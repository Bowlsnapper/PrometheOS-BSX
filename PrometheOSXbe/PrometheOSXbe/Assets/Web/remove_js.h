#pragma once

const uint8_t remove_js[] = {
  0x77, 0x69, 0x6e, 0x64, 0x6f, 0x77, 0x2e, 0x6f, 0x6e, 0x6c, 0x6f, 0x61, 0x64, 0x20, 0x3d, 0x20,
  0x66, 0x75, 0x6e, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x28, 0x29, 0x20, 0x7b, 0x0d, 0x0a, 0x20,
  0x20, 0x20, 0x20, 0x67, 0x65, 0x74, 0x42, 0x61, 0x6e, 0x6b, 0x49, 0x6e, 0x66, 0x6f, 0x28, 0x29,
  0x3b, 0x0d, 0x0a, 0x7d, 0x3b, 0x0d, 0x0a, 0x0d, 0x0a, 0x61, 0x73, 0x79, 0x6e, 0x63, 0x20, 0x66,
  0x75, 0x6e, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x67, 0x65, 0x74, 0x42, 0x61, 0x6e, 0x6b, 0x49,
  0x6e, 0x66, 0x6f, 0x28, 0x29, 0x0d, 0x0a, 0x7b, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x61, 0x77,
  0x61, 0x69, 0x74, 0x20, 0x66, 0x65, 0x74, 0x63, 0x68, 0x28, 0x22, 0x2f, 0x61, 0x70, 0x69, 0x2f,
  0x62, 0x61, 0x6e, 0x6b, 0x69, 0x6e, 0x66, 0x6f, 0x2e, 0x6a, 0x73, 0x6f, 0x6e, 0x22, 0x29, 0x2e,
  0x74, 0x68, 0x65, 0x6e, 0x28, 0x61, 0x73, 0x79, 0x6e, 0x63, 0x20, 0x72, 0x65, 0x73, 0x70, 0x6f,
  0x6e, 0x73, 0x65, 0x20, 0x3d, 0x3e, 0x20, 0x7b, 0x0d, 0x0a, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x63, 0x6f, 0x6e, 0x73, 0x74, 0x20, 0x6a, 0x73, 0x6f, 0x6e, 0x20, 0x3d,
  0x20, 0x61, 0x77, 0x61, 0x69, 0x74, 0x20, 0x72, 0x65, 0x73, 0x70, 0x6f, 0x6e, 0x73, 0x65, 0x2e,
  0x6a, 0x73, 0x6f, 0x6e, 0x28, 0x29, 0x3b, 0x0d, 0x0a, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x6c, 0x65, 0x74, 0x20, 0x63, 0x6f, 0x6e, 0x74, 0x65, 0x6e, 0x74, 0x42, 0x6f,
  0x64, 0x79, 0x20, 0x3d, 0x20, 0x22, 0x22, 0x3b, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x66, 0x6f, 0x72, 0x20, 0x28, 0x6c, 0x65, 0x74, 0x20, 0x69, 0x20, 0x3d, 0x20, 0x30,
  0x3b, 0x20, 0x69, 0x20, 0x3c, 0x20, 0x6a, 0x73, 0x6f, 0x6e, 0x2e, 0x6c, 0x65, 0x6e, 0x67, 0x74,
  0x68, 0x3b, 0x20, 0x69, 0x2b, 0x2b, 0x29, 0x20, 0x7b, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x69, 0x66, 0x20, 0x28, 0x6a, 0x73, 0x6f, 0x6e, 0x5b,
  0x69, 0x5d, 0x2e, 0x73, 0x6c, 0x6f, 0x74, 0x73, 0x20, 0x3e, 0x20, 0x30, 0x29, 0x20, 0x7b, 0x0d,
  0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x63, 0x6f, 0x6e, 0x74, 0x65, 0x6e, 0x74, 0x42, 0x6f, 0x64, 0x79, 0x20, 0x2b, 0x3d, 0x20,
  0x22, 0x3c, 0x70, 0x3e, 0x3c, 0x64, 0x69, 0x76, 0x20, 0x63, 0x6c, 0x61, 0x73, 0x73, 0x3d, 0x5c,
  0x22, 0x67, 0x72, 0x69, 0x64, 0x5c, 0x22, 0x3e, 0x3c, 0x61, 0x20, 0x72, 0x6f, 0x6c, 0x65, 0x3d,
  0x5c, 0x22, 0x62, 0x75, 0x74, 0x74, 0x6f, 0x6e, 0x5c, 0x22, 0x20, 0x68, 0x72, 0x65, 0x66, 0x3d,
  0x5c, 0x22, 0x23, 0x5c, 0x22, 0x20, 0x6f, 0x6e, 0x63, 0x6c, 0x69, 0x63, 0x6b, 0x3d, 0x5c, 0x22,
  0x72, 0x65, 0x6d, 0x6f, 0x76, 0x65, 0x42, 0x61, 0x6e, 0x6b, 0x28, 0x22, 0x20, 0x2b, 0x20, 0x6a,
  0x73, 0x6f, 0x6e, 0x5b, 0x69, 0x5d, 0x2e, 0x69, 0x64, 0x20, 0x2b, 0x20, 0x22, 0x29, 0x5c, 0x22,
  0x3e, 0x22, 0x20, 0x2b, 0x20, 0x6a, 0x73, 0x6f, 0x6e, 0x5b, 0x69, 0x5d, 0x2e, 0x6e, 0x61, 0x6d,
  0x65, 0x20, 0x2b, 0x20, 0x22, 0x3c, 0x2f, 0x61, 0x3e, 0x3c, 0x2f, 0x64, 0x69, 0x76, 0x3e, 0x3c,
  0x2f, 0x70, 0x3e, 0x22, 0x3b, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x7d, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x0d,
  0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x6c, 0x65, 0x74, 0x20, 0x63, 0x6f, 0x6e,
  0x74, 0x65, 0x6e, 0x74, 0x20, 0x3d, 0x20, 0x64, 0x6f, 0x63, 0x75, 0x6d, 0x65, 0x6e, 0x74, 0x2e,
  0x67, 0x65, 0x74, 0x45, 0x6c, 0x65, 0x6d, 0x65, 0x6e, 0x74, 0x42, 0x79, 0x49, 0x64, 0x28, 0x22,
  0x63, 0x6f, 0x6e, 0x74, 0x65, 0x6e, 0x74, 0x22, 0x29, 0x3b, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x63, 0x6f, 0x6e, 0x74, 0x65, 0x6e, 0x74, 0x2e, 0x69, 0x6e, 0x6e, 0x65,
  0x72, 0x48, 0x54, 0x4d, 0x4c, 0x20, 0x3d, 0x20, 0x63, 0x6f, 0x6e, 0x74, 0x65, 0x6e, 0x74, 0x42,
  0x6f, 0x64, 0x79, 0x20, 0x3d, 0x3d, 0x20, 0x22, 0x22, 0x20, 0x3f, 0x20, 0x22, 0x4e, 0x6f, 0x20,
  0x69, 0x74, 0x65, 0x6d, 0x73, 0x20, 0x66, 0x6f, 0x75, 0x6e, 0x64, 0x2e, 0x22, 0x20, 0x3a, 0x20,
  0x63, 0x6f, 0x6e, 0x74, 0x65, 0x6e, 0x74, 0x42, 0x6f, 0x64, 0x79, 0x3b, 0x0d, 0x0a, 0x0d, 0x0a,
  0x20, 0x20, 0x20, 0x20, 0x7d, 0x29, 0x2e, 0x63, 0x61, 0x74, 0x63, 0x68, 0x28, 0x65, 0x72, 0x72,
  0x6f, 0x72, 0x20, 0x3d, 0x3e, 0x20, 0x7b, 0x0d, 0x0a, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x6c, 0x65, 0x74, 0x20, 0x63, 0x6f, 0x6e, 0x74, 0x65, 0x6e, 0x74, 0x20, 0x3d,
  0x20, 0x64, 0x6f, 0x63, 0x75, 0x6d, 0x65, 0x6e, 0x74, 0x2e, 0x67, 0x65, 0x74, 0x45, 0x6c, 0x65,
  0x6d, 0x65, 0x6e, 0x74, 0x42, 0x79, 0x49, 0x64, 0x28, 0x22, 0x63, 0x6f, 0x6e, 0x74, 0x65, 0x6e,
  0x74, 0x22, 0x29, 0x3b, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x63, 0x6f,
  0x6e, 0x74, 0x65, 0x6e, 0x74, 0x2e, 0x69, 0x6e, 0x6e, 0x65, 0x72, 0x48, 0x54, 0x4d, 0x4c, 0x20,
  0x3d, 0x20, 0x22, 0x46, 0x61, 0x69, 0x6c, 0x65, 0x64, 0x20, 0x74, 0x6f, 0x20, 0x63, 0x6f, 0x6e,
  0x6e, 0x65, 0x63, 0x74, 0x2e, 0x22, 0x0d, 0x0a, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x29,
  0x3b, 0x0d, 0x0a, 0x7d, 0x0d, 0x0a, 0x0d, 0x0a, 0x61, 0x73, 0x79, 0x6e, 0x63, 0x20, 0x66, 0x75,
  0x6e, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x72, 0x65, 0x6d, 0x6f, 0x76, 0x65, 0x42, 0x61, 0x6e,
  0x6b, 0x28, 0x69, 0x64, 0x29, 0x0d, 0x0a, 0x7b, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x61, 0x77,
  0x61, 0x69, 0x74, 0x20, 0x66, 0x65, 0x74, 0x63, 0x68, 0x28, 0x22, 0x2f, 0x61, 0x70, 0x69, 0x2f,
  0x72, 0x65, 0x6d, 0x6f, 0x76, 0x65, 0x62, 0x61, 0x6e, 0x6b, 0x3f, 0x22, 0x20, 0x2b, 0x20, 0x69,
  0x64, 0x29, 0x2e, 0x74, 0x68, 0x65, 0x6e, 0x28, 0x28, 0x29, 0x20, 0x3d, 0x3e, 0x20, 0x7b, 0x0d,
  0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x67, 0x65, 0x74, 0x42, 0x61, 0x6e, 0x6b,
  0x49, 0x6e, 0x66, 0x6f, 0x28, 0x29, 0x3b, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x29, 0x2e,
  0x63, 0x61, 0x74, 0x63, 0x68, 0x28, 0x65, 0x72, 0x72, 0x6f, 0x72, 0x20, 0x3d, 0x3e, 0x20, 0x7b,
  0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x63, 0x6f, 0x6e, 0x74, 0x65, 0x6e,
  0x74, 0x2e, 0x69, 0x6e, 0x6e, 0x65, 0x72, 0x48, 0x54, 0x4d, 0x4c, 0x20, 0x3d, 0x20, 0x22, 0x46,
  0x61, 0x69, 0x6c, 0x65, 0x64, 0x20, 0x74, 0x6f, 0x20, 0x63, 0x6f, 0x6e, 0x6e, 0x65, 0x63, 0x74,
  0x2e, 0x22, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x29, 0x3b, 0x0d, 0x0a, 0x7d
};
