using FluentFTP;
using SixLabors.ImageSharp.PixelFormats;
using SixLabors.ImageSharp.Processing;
using System.Net;
using System.Net.Http.Headers;
using System.Text;

namespace PrometheOSPacker.Helpers
{
    //Bank1_256k      =  3  0x000000 - 0x03ffff  Sector Size 65536  Total  262144
    //Bank2_256k      =  4  0x040000 - 0x07ffff  Sector Size 65536  Total  262144
    //Bank3_256k      =  5  0x080000 - 0x0bffff  Sector Size 65536  Total  262144
    //Bank4_256k      =  6  0x0c0000 - 0x0fffff  Sector Size 65536  Total  262144
    //Bank1_512k      =  7  0x000000 - 0x07ffff  Sector Size 65536  Total  524288
    //Bank2_512k      =  8  0x080000 - 0x0fffff  Sector Size 65536  Total  524288
    //Bank1_1024k     =  9  0x000000 - 0x0fffff  Sector Size 65536  Total 1048576
    //Bank_PrometheOS =  2  0x100000 - 0x17ffff  Sector Size 65536  Total  524288
    //Bank_Bootloader =  1  0x180000 - 0x1bffff  Sector Size 65536  Total  262144
    //Bank_Recovery   = 10  0x1c0000 - 0x1fffff  See Below          Total  262144

    //0x1c0000 - 0x1effff  Sector Size 65536  Total 196608 (PrometheOS Continued)
    //0x1f0000 - 0x1f7fff  Sector Size 32768  Total 32768  (Installer Logo)
    //0x1f8000 - 0x1f9fff  Sector Size 8192   Total 8192   (Settings)
    //0x1fa000 - 0x1fbfff  Sector Size 8192   Total 8192   (Spare)
    //0x1fc000 - 0x1fffff  Sector Size 16384  Total 16384  (Spare)

    //Suggested byes for PrometheOS = 720896 (524288 bytes Bank_PrometheOS + First 196608 bytes of Bank_Recovery)

    internal class Package
    {
        public static byte[] CompressBank(string filePath, int size)
        {
            var fileData = File.ReadAllBytes(filePath);
            var compressedData = new byte[fileData.Length];
            var compressedSize = K4os.Compression.LZ4.LZ4Codec.Encode(fileData, compressedData, K4os.Compression.LZ4.LZ4Level.L12_MAX);
            if (compressedSize <= 0)
            {
                throw new Exception("Compress failed.");
            }
            byte[] promethosLengthBytes = BitConverter.GetBytes(fileData.Length);
            byte[] compressedLengthBytes = BitConverter.GetBytes(compressedSize);

            var bank = new byte[size];
            Array.Copy(promethosLengthBytes, 0, bank, 0, promethosLengthBytes.Length);
            Array.Copy(compressedLengthBytes, 0, bank, 4, compressedLengthBytes.Length);
            Array.Copy(compressedData, 0, bank, 8, compressedSize);

            var checksum = 0;
            for (int i = 0; i < bank.Length; i++)
            {
                checksum = checksum + bank[i] & 0xffff;
            }

            Console.WriteLine($"Compressed Size = {compressedSize + 8} of {size} - Checksum {checksum}");

            return bank;
        }

        public static byte[] ExtractPrometheOS(string modchip)
        {
            var slnFolder = Utility.GetSlnFolder();
            var prometheosSourcePath = Path.GetFullPath($"..\\Input\\prometheos-{modchip}.bin", slnFolder);
            if (File.Exists(prometheosSourcePath) == false)
            {
                Console.WriteLine($"Error: Looks like you didnt suppliy prometheos-{modchip}.bin in input folder.");
                throw new Exception("Failed: ExtractPrometheOS");
            }

            var prometheosSource = File.ReadAllBytes(prometheosSourcePath);
            var firmware = new byte[256 * 1024];

            if (modchip.StartsWith("Modxo", StringComparison.CurrentCultureIgnoreCase))
            {
                Array.Copy(prometheosSource, 0x040000, firmware, 0, 256 * 1024);
                return firmware;
            }

            throw new Exception($"Failed: Unrecognized modchip {modchip}.");
        }

        private static void PackageModxoVariant(byte[] prometheos, string variant, string modchip, uint familyId)
        {
            var slnFolder = Utility.GetSlnFolder();

            var promethosXbePath = Path.GetFullPath($"..\\PrometheOSXbe\\PrometheOSXbe\\Release-{modchip}\\PrometheOS.xbe", slnFolder);
            if (File.Exists(promethosXbePath) == false)
            {
                Console.WriteLine("Error: Looks like you didnt build PrometheOSXbe.");
                return;
            }

            Console.WriteLine("Packing PrometheOS Xbe...");
            var promethosxbeBank = CompressBank(promethosXbePath, 0x080000 - 0x1000);

            var firmware = new byte[1 * 1024 * 1024];
            Array.Copy(promethosxbeBank, 0, firmware, 0x080000, promethosxbeBank.Length);
            Array.Copy(prometheos, 0, firmware, 0x040000, prometheos.Length);

            var modxo = File.ReadAllBytes($"modxo-{variant}.bin");
            Array.Copy(modxo, 0, firmware, 0x000000, modxo.Length);

            var buildPath = Path.Combine(slnFolder, "..\\Build");
            Directory.CreateDirectory(buildPath);
            File.WriteAllBytes(Path.Combine(buildPath, $"prometheos-{modchip.ToLower()}-{variant.ToLower()}.bin"), firmware);

            var uf2 = FlashBin.ProcessUf2(firmware, 0x10000000, 0xffffffff, familyId);
            File.WriteAllBytes(Path.Combine(buildPath, $"prometheos-{modchip.ToLower()}-{variant.ToLower()}.uf2"), uf2);
        }

        public static void PackageModxo(string modchip)
        {
            var slnFolder = Utility.GetSlnFolder();
            var prometheos = ExtractPrometheOS($"{modchip}-official-pico");
            uint defaultFamilyId = 0xE48BFF56;

            PackageModxoVariant(prometheos, "bsx", modchip, defaultFamilyId);
        }
    }
}
