using PrometheOSPacker.Helpers;
using System.Diagnostics;

namespace PrometheOSPacker
{
    internal class Program
    {
        static async Task<bool> DownloadFileAsync(string url, string filename)
        {
            const bool offline = true;
            if (offline)
            {
                try
                {
                    byte[] fileBytes = File.ReadAllBytes(Path.Combine("OfflineFiles", Path.GetFileName(url)));
                    await File.WriteAllBytesAsync(filename, fileBytes);
                    return true;
                }
                catch (Exception ex)
                {
                    Console.WriteLine($"An error occurre downloading file: {ex.Message}");
                    return false;
                }
            }

            using (var client = new HttpClient())
            {
                try
                {
                    byte[] fileBytes = await client.GetByteArrayAsync(url);
                    await File.WriteAllBytesAsync(filename, fileBytes);
                    return true;
                }
                catch (Exception ex)
                {
                    Console.WriteLine($"An error occurre downloading file: {ex.Message}");
                    return false;
                }
            }
        }

        static void Main()
        {
            var version = "V1.0.8";
            //version = "latest";

            var baseUrl = $"https://github.com/Team-Resurgent/Modxo/releases/download/{version}";

            Console.WriteLine("Downloading 'modxo-bsx.bin'.");
            if (DownloadFileAsync($"{baseUrl}/modxo_bsx.bin", "modxo-bsx.bin").GetAwaiter().GetResult() == false)
            {
                return;
            }
            var prometheosWebTestIp = "192.168.1.66"; // If you change ip in PrometheOSWeb update here

            Console.WriteLine("1) Updating embeded web files in XBE...");
            Minify.Process(prometheosWebTestIp);
            Console.WriteLine();

            Console.WriteLine("2) Please now build as Release PrometheOSTools and PrometheOSXbe for every modchip...");
            Console.WriteLine();
            Console.WriteLine("Press Enter when done.");
            Console.ReadLine();

            Console.WriteLine("3) Packaging PrometheOSTools and PrometheOS firmware for each modchip...");

            var modchips = new string[]
            {
                "Modxo",
            };

            foreach (var modchip in modchips)
            {
                if (modchip.Equals("Modxo", StringComparison.CurrentCultureIgnoreCase))
                {
                    Package.PackageModxo(modchip);
                }

                // Edit and enable below lines if you wish to ftp to xbox / xenium programmer
                //Console.WriteLine("4) FTP PrometheOS firmware...");
                //Package.FtpPrometheOS("127.0.0.1", "xbox", "xbox", $"/c/prometheos-{modchip}.bin");
            }

            Console.WriteLine("Done\n");
            Console.WriteLine();
            Console.WriteLine("Press Enter to finish.");
            Console.ReadLine();

        }
    }
}