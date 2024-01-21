#pragma once

const uint8_t remove_html[] = {
  0x3c, 0x21, 0x44, 0x4f, 0x43, 0x54, 0x59, 0x50, 0x45, 0x20, 0x68, 0x74, 0x6d, 0x6c, 0x3e, 0x3c,
  0x68, 0x74, 0x6d, 0x6c, 0x20, 0x6c, 0x61, 0x6e, 0x67, 0x3d, 0x65, 0x6e, 0x20, 0x64, 0x61, 0x74,
  0x61, 0x2d, 0x74, 0x68, 0x65, 0x6d, 0x65, 0x3d, 0x64, 0x61, 0x72, 0x6b, 0x3e, 0x3c, 0x68, 0x65,
  0x61, 0x64, 0x3e, 0x3c, 0x6d, 0x65, 0x74, 0x61, 0x20, 0x63, 0x68, 0x61, 0x72, 0x73, 0x65, 0x74,
  0x3d, 0x75, 0x74, 0x66, 0x2d, 0x38, 0x20, 0x2f, 0x3e, 0x3c, 0x6d, 0x65, 0x74, 0x61, 0x20, 0x6e,
  0x61, 0x6d, 0x65, 0x3d, 0x76, 0x69, 0x65, 0x77, 0x70, 0x6f, 0x72, 0x74, 0x20, 0x63, 0x6f, 0x6e,
  0x74, 0x65, 0x6e, 0x74, 0x3d, 0x22, 0x77, 0x69, 0x64, 0x74, 0x68, 0x3d, 0x64, 0x65, 0x76, 0x69,
  0x63, 0x65, 0x2d, 0x77, 0x69, 0x64, 0x74, 0x68, 0x2c, 0x20, 0x69, 0x6e, 0x69, 0x74, 0x69, 0x61,
  0x6c, 0x2d, 0x73, 0x63, 0x61, 0x6c, 0x65, 0x3d, 0x31, 0x2c, 0x20, 0x73, 0x68, 0x72, 0x69, 0x6e,
  0x6b, 0x2d, 0x74, 0x6f, 0x2d, 0x66, 0x69, 0x74, 0x3d, 0x6e, 0x6f, 0x22, 0x20, 0x2f, 0x3e, 0x3c,
  0x74, 0x69, 0x74, 0x6c, 0x65, 0x3e, 0x50, 0x72, 0x6f, 0x6d, 0x65, 0x74, 0x68, 0x65, 0x4f, 0x53,
  0x3c, 0x2f, 0x74, 0x69, 0x74, 0x6c, 0x65, 0x3e, 0x3c, 0x6c, 0x69, 0x6e, 0x6b, 0x20, 0x72, 0x65,
  0x6c, 0x3d, 0x69, 0x63, 0x6f, 0x6e, 0x20, 0x74, 0x79, 0x70, 0x65, 0x3d, 0x69, 0x6d, 0x61, 0x67,
  0x65, 0x2f, 0x78, 0x2d, 0x69, 0x63, 0x6f, 0x6e, 0x20, 0x68, 0x72, 0x65, 0x66, 0x3d, 0x66, 0x61,
  0x76, 0x69, 0x63, 0x6f, 0x6e, 0x2e, 0x69, 0x63, 0x6f, 0x20, 0x2f, 0x3e, 0x3c, 0x6c, 0x69, 0x6e,
  0x6b, 0x20, 0x68, 0x72, 0x65, 0x66, 0x3d, 0x70, 0x69, 0x63, 0x6f, 0x2e, 0x63, 0x73, 0x73, 0x20,
  0x72, 0x65, 0x6c, 0x3d, 0x73, 0x74, 0x79, 0x6c, 0x65, 0x73, 0x68, 0x65, 0x65, 0x74, 0x20, 0x2f,
  0x3e, 0x3c, 0x2f, 0x68, 0x65, 0x61, 0x64, 0x3e, 0x3c, 0x62, 0x6f, 0x64, 0x79, 0x3e, 0x3c, 0x6d,
  0x61, 0x69, 0x6e, 0x20, 0x63, 0x6c, 0x61, 0x73, 0x73, 0x3d, 0x63, 0x6f, 0x6e, 0x74, 0x61, 0x69,
  0x6e, 0x65, 0x72, 0x3e, 0x3c, 0x66, 0x6f, 0x72, 0x6d, 0x3e, 0x3c, 0x68, 0x32, 0x3e, 0x50, 0x72,
  0x6f, 0x6d, 0x65, 0x74, 0x68, 0x65, 0x4f, 0x53, 0x3a, 0x20, 0x52, 0x65, 0x6d, 0x6f, 0x76, 0x65,
  0x3c, 0x2f, 0x68, 0x32, 0x3e, 0x3c, 0x64, 0x69, 0x76, 0x3e, 0x3c, 0x73, 0x70, 0x61, 0x6e, 0x20,
  0x69, 0x64, 0x3d, 0x63, 0x6f, 0x6e, 0x74, 0x65, 0x6e, 0x74, 0x3e, 0x50, 0x6c, 0x65, 0x61, 0x73,
  0x65, 0x20, 0x57, 0x61, 0x69, 0x74, 0x2e, 0x2e, 0x2e, 0x3c, 0x2f, 0x73, 0x70, 0x61, 0x6e, 0x3e,
  0x3c, 0x2f, 0x64, 0x69, 0x76, 0x3e, 0x3c, 0x62, 0x72, 0x20, 0x2f, 0x3e, 0x3c, 0x64, 0x69, 0x76,
  0x20, 0x63, 0x6c, 0x61, 0x73, 0x73, 0x3d, 0x67, 0x72, 0x69, 0x64, 0x3e, 0x3c, 0x61, 0x20, 0x72,
  0x6f, 0x6c, 0x65, 0x3d, 0x62, 0x75, 0x74, 0x74, 0x6f, 0x6e, 0x20, 0x63, 0x6c, 0x61, 0x73, 0x73,
  0x3d, 0x73, 0x65, 0x63, 0x6f, 0x6e, 0x64, 0x61, 0x72, 0x79, 0x20, 0x68, 0x72, 0x65, 0x66, 0x3d,
  0x69, 0x6e, 0x64, 0x65, 0x78, 0x2e, 0x68, 0x74, 0x6d, 0x6c, 0x3e, 0x42, 0x61, 0x63, 0x6b, 0x3c,
  0x2f, 0x61, 0x3e, 0x3c, 0x2f, 0x64, 0x69, 0x76, 0x3e, 0x3c, 0x62, 0x72, 0x20, 0x2f, 0x3e, 0x3c,
  0x64, 0x69, 0x76, 0x3e, 0x3c, 0x62, 0x3e, 0x43, 0x6f, 0x70, 0x79, 0x72, 0x69, 0x67, 0x68, 0x74,
  0x20, 0x32, 0x30, 0x32, 0x34, 0x20, 0x2d, 0x20, 0x54, 0x65, 0x61, 0x6d, 0x20, 0x43, 0x65, 0x72,
  0x62, 0x69, 0x6f, 0x73, 0x20, 0x2b, 0x20, 0x54, 0x65, 0x61, 0x6d, 0x20, 0x52, 0x65, 0x73, 0x75,
  0x72, 0x67, 0x65, 0x6e, 0x74, 0x3c, 0x2f, 0x62, 0x3e, 0x3c, 0x2f, 0x64, 0x69, 0x76, 0x3e, 0x3c,
  0x2f, 0x66, 0x6f, 0x72, 0x6d, 0x3e, 0x3c, 0x2f, 0x6d, 0x61, 0x69, 0x6e, 0x3e, 0x3c, 0x73, 0x63,
  0x72, 0x69, 0x70, 0x74, 0x20, 0x73, 0x72, 0x63, 0x3d, 0x72, 0x65, 0x6d, 0x6f, 0x76, 0x65, 0x2e,
  0x6a, 0x73, 0x3e, 0x3c, 0x2f, 0x73, 0x63, 0x72, 0x69, 0x70, 0x74, 0x3e, 0x3c, 0x2f, 0x62, 0x6f,
  0x64, 0x79, 0x3e, 0x3c, 0x2f, 0x68, 0x74, 0x6d, 0x6c, 0x3e
};
