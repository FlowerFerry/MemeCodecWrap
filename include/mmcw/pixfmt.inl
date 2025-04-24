
#ifndef MMCW_PIXFMT_ENUM
#define MMCW_PIXFMT_ENUM(CLASS, NAME, NUMBER)
#endif


// None
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, NONE, -1) ///< No pixel format specified

// Planar YUV formats
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, YUV420P, 0) ///< planar YUV 4:2:0, 12bpp, 1 Cr & Cb sample per 2x2 Y samples
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, YUYV422, 1) ///< packed YUV 4:2:2, 16bpp, Y0 Cb Y1 Cr
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, RGB24, 2) ///< packed RGB 8:8:8, 24bpp, RGBRGB...
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, BGR24, 3) ///< packed RGB 8:8:8, 24bpp, BGRBGR...
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, YUV422P, 4) ///< planar YUV 4:2:2, 16bpp, 1 Cr & Cb sample per 2x1 Y samples
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, YUV444P, 5) ///< planar YUV 4:4:4, 24bpp, 1 Cr & Cb sample per 1x1 Y samples
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, YUV410P, 6) ///< planar YUV 4:1:0, 9bpp, 1 Cr & Cb sample per 4x4 Y samples
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, YUV411P, 7) ///< planar YUV 4:1:1, 12bpp, 1 Cr & Cb sample per 4x1 Y samples

// Grayscale and monochrome
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, GRAY8, 8) ///< grayscale, 8bpp
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, MONOWHITE, 9) ///< monochrome, 1bpp, 0 is white, 1 is black
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, MONOBLACK, 10) ///< monochrome, 1bpp, 0 is black, 1 is white

// Paletted formats
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, PAL8, 11) ///< 8-bit palette format with AV_PIX_FMT_RGB32 palette

// JPEG formats
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, YUVJ420P, 12) ///< planar YUV 4:2:0, full scale (JPEG), deprecated
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, YUVJ422P, 13) ///< planar YUV 4:2:2, full scale (JPEG), deprecated
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, YUVJ444P, 14) ///< planar YUV 4:4:4, full scale (JPEG), deprecated

// Packed YUV formats
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, UYVY422, 15) ///< packed YUV 4:2:2, 16bpp, Cb Y0 Cr Y1
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, UYYVYY411, 16) ///< packed YUV 4:1:1, 12bpp, Cb Y0 Y1 Cr Y2 Y3

// Packed RGB formats
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, BGR8, 17) ///< packed RGB 3:3:2, 8bpp, 2B 3G 3R
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, BGR4, 18) ///< packed RGB 1:2:1, 4bpp, 1B 2G 1R
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, BGR4_BYTE, 19) ///< packed RGB 1:2:1, 8bpp, 1B 2G 1R
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, RGB8, 20) ///< packed RGB 3:3:2, 8bpp, 2R 3G 3B
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, RGB4, 21) ///< packed RGB 1:2:1, 4bpp, 1R 2G 1B
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, RGB4_BYTE, 22) ///< packed RGB 1:2:1, 8bpp, 1R 2G 1B

// NV12 and NV21 formats
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, NV12, 23) ///< planar YUV 4:2:0, 1 plane for Y, 1 plane for interleaved UV
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, NV21, 24) ///< planar YUV 4:2:0, 1 plane for Y, 1 plane for interleaved VU

// Packed RGBA formats
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, ARGB, 25) ///< packed ARGB 8:8:8:8, 32bpp
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, RGBA, 26) ///< packed RGBA 8:8:8:8, 32bpp
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, ABGR, 27) ///< packed ABGR 8:8:8:8, 32bpp
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, BGRA, 28) ///< packed BGRA 8:8:8:8, 32bpp

// High bit-depth grayscale
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, GRAY16BE, 29) ///< grayscale, 16bpp, big-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, GRAY16LE, 30) ///< grayscale, 16bpp, little-endian

// YUV 4:4:0 formats
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, YUV440P, 31) ///< planar YUV 4:4:0, 1 Cr & Cb sample per 1x2 Y samples
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, YUVJ440P, 32) ///< planar YUV 4:4:0, full scale (JPEG), deprecated

// YUV + Alpha formats
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, YUVA420P, 33) ///< planar YUV 4:2:0 with alpha, 20bpp

// RGB48 formats
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, RGB48BE, 34) ///< packed RGB 16:16:16, 48bpp, big-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, RGB48LE, 35) ///< packed RGB 16:16:16, 48bpp, little-endian

// RGB565 formats
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, RGB565BE, 36) ///< packed RGB 5:6:5, 16bpp, big-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, RGB565LE, 37) ///< packed RGB 5:6:5, 16bpp, little-endian

// RGB555 formats
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, RGB555BE, 38) ///< packed RGB 5:5:5, 16bpp, big-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, RGB555LE, 39) ///< packed RGB 5:5:5, 16bpp, little-endian

// BGR565 formats
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, BGR565BE, 40) ///< packed BGR 5:6:5, 16bpp, big-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, BGR565LE, 41) ///< packed BGR 5:6:5, 16bpp, little-endian

// BGR555 formats
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, BGR555BE, 42) ///< packed BGR 5:5:5, 16bpp, big-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, BGR555LE, 43) ///< packed BGR 5:5:5, 16bpp, little-endian

// High bit-depth YUV formats
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, YUV420P16LE, 45) ///< planar YUV 4:2:0, 16bpp, little-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, YUV420P16BE, 46) ///< planar YUV 4:2:0, 16bpp, big-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, YUV422P16LE, 47) ///< planar YUV 4:2:2, 16bpp, little-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, YUV422P16BE, 48) ///< planar YUV 4:2:2, 16bpp, big-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, YUV444P16LE, 49) ///< planar YUV 4:4:4, 16bpp, little-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, YUV444P16BE, 50) ///< planar YUV 4:4:4, 16bpp, big-endian

// DXVA2 hardware acceleration
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, DXVA2_VLD, 51) ///< hardware decoding through DXVA2

// RGB444 formats
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, RGB444LE, 52) ///< packed RGB 4:4:4, 16bpp, little-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, RGB444BE, 53) ///< packed RGB 4:4:4, 16bpp, big-endian

// BGR444 formats
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, BGR444LE, 54) ///< packed BGR 4:4:4, 16bpp, little-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, BGR444BE, 55) ///< packed BGR 4:4:4, 16bpp, big-endian

// Grayscale with alpha
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, YA8, 56) ///< 8 bits grayscale, 8 bits alpha

// High bit-depth BGR formats
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, BGR48BE, 57) ///< packed BGR 16:16:16, 48bpp, big-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, BGR48LE, 58) ///< packed BGR 16:16:16, 48bpp, little-endian

// High bit-depth planar YUV formats with 9 and 10 bits
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, YUV420P9BE, 59) ///< planar YUV 4:2:0, 13.5bpp, big-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, YUV420P9LE, 60) ///< planar YUV 4:2:0, 13.5bpp, little-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, YUV420P10BE, 61) ///< planar YUV 4:2:0, 15bpp, big-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, YUV420P10LE, 62) ///< planar YUV 4:2:0, 15bpp, little-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, YUV422P10BE, 63) ///< planar YUV 4:2:2, 20bpp, big-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, YUV422P10LE, 64) ///< planar YUV 4:2:2, 20bpp, little-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, YUV444P9BE, 65) ///< planar YUV 4:4:4, 27bpp, big-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, YUV444P9LE, 66) ///< planar YUV 4:4:4, 27bpp, little-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, YUV444P10BE, 67) ///< planar YUV 4:4:4, 30bpp, big-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, YUV444P10LE, 68) ///< planar YUV 4:4:4, 30bpp, little-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, YUV422P9BE, 69) ///< planar YUV 4:2:2, 24bpp, big-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, YUV422P9LE, 70) ///< planar YUV 4:2:2, 24bpp, little-endian

// Planar GBR formats
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, GBRP, 71) ///< planar GBR 4:4:4, 24bpp
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, GBRP9BE, 72) ///< planar GBR 4:4:4, 27bpp, big-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, GBRP9LE, 73) ///< planar GBR 4:4:4, 27bpp, little-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, GBRP10BE, 74) ///< planar GBR 4:4:4, 30bpp, big-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, GBRP10LE, 75) ///< planar GBR 4:4:4, 30bpp, little-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, GBRP16BE, 76) ///< planar GBR 4:4:4, 48bpp, big-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, GBRP16LE, 77) ///< planar GBR 4:4:4, 48bpp, little-endian

// YUV + Alpha formats with 422 and 444 chroma subsampling
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, YUVA422P, 78) ///< planar YUV 4:2:2 with alpha, 24bpp
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, YUVA444P, 79) ///< planar YUV 4:4:4 with alpha, 32bpp
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, YUVA420P9BE, 80) ///< planar YUV 4:2:0 with alpha, 22.5bpp, big-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, YUVA420P9LE, 81) ///< planar YUV 4:2:0 with alpha, 22.5bpp, little-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, YUVA422P9BE, 82) ///< planar YUV 4:2:2 with alpha, 27bpp, big-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, YUVA422P9LE, 83) ///< planar YUV 4:2:2 with alpha, 27bpp, little-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, YUVA444P9BE, 84) ///< planar YUV 4:4:4 with alpha, 36bpp, big-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, YUVA444P9LE, 85) ///< planar YUV 4:4:4 with alpha, 36bpp, little-endian

// YUV + Alpha formats with 10-bit depth
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, YUVA420P10BE, 86) ///< planar YUV 4:2:0 with alpha, 25bpp, big-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, YUVA420P10LE, 87) ///< planar YUV 4:2:0 with alpha, 25bpp, little-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, YUVA422P10BE, 88) ///< planar YUV 4:2:2 with alpha, 30bpp, big-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, YUVA422P10LE, 89) ///< planar YUV 4:2:2 with alpha, 30bpp, little-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, YUVA444P10BE, 90) ///< planar YUV 4:4:4 with alpha, 40bpp, big-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, YUVA444P10LE, 91) ///< planar YUV 4:4:4 with alpha, 40bpp, little-endian

// YUV + Alpha formats with 16-bit depth
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, YUVA420P16BE, 92) ///< planar YUV 4:2:0 with alpha, 40bpp, big-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, YUVA420P16LE, 93) ///< planar YUV 4:2:0 with alpha, 40bpp, little-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, YUVA422P16BE, 94) ///< planar YUV 4:2:2 with alpha, 48bpp, big-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, YUVA422P16LE, 95) ///< planar YUV 4:2:2 with alpha, 48bpp, little-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, YUVA444P16BE, 96) ///< planar YUV 4:4:4 with alpha, 64bpp, big-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, YUVA444P16LE, 97) ///< planar YUV 4:4:4 with alpha, 64bpp, little-endian

// VDPAU hardware acceleration
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, VDPAU, 98) ///< hardware acceleration through VDPAU

// XYZ formats
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, XYZ12LE, 99) ///< packed XYZ 4:4:4, 36bpp, little-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, XYZ12BE, 100) ///< packed XYZ 4:4:4, 36bpp, big-endian

// Interleaved chroma formats
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, NV16, 101) ///< interleaved chroma YUV 4:2:2, 16bpp
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, NV20LE, 102) ///< interleaved chroma YUV 4:2:2, 20bpp, little-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, NV20BE, 103) ///< interleaved chroma YUV 4:2:2, 20bpp, big-endian

// RGBA64 formats
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, RGBA64BE, 104) ///< packed RGBA 16:16:16:16, 64bpp, big-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, RGBA64LE, 105) ///< packed RGBA 16:16:16:16, 64bpp, little-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, BGRA64BE, 106) ///< packed BGRA 16:16:16:16, 64bpp, big-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, BGRA64LE, 107) ///< packed BGRA 16:16:16:16, 64bpp, little-endian

// Packed YUV 4:2:2
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, YVYU422, 108) ///< packed YUV 4:2:2, 16bpp, Y0 Cr Y1 Cb

// Grayscale + Alpha formats with 16-bit depth
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, YA16BE, 109) ///< 16 bits grayscale, 16 bits alpha, big-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, YA16LE, 110) ///< 16 bits grayscale, 16 bits alpha, little-endian
// Planar GBR with alpha formats
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, GBRAP, 111) ///< planar GBRA 4:4:4:4, 32bpp
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, GBRAP16BE, 112) ///< planar GBRA 4:4:4:4, 64bpp, big-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, GBRAP16LE, 113) ///< planar GBRA 4:4:4:4, 64bpp, little-endian

// Hardware acceleration formats
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, QSV, 114) ///< hardware acceleration through QSV
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, MMAL, 115) ///< hardware acceleration through MMAL
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, D3D11VA_VLD, 116) ///< hardware decoding through Direct3D11 (legacy API)
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, CUDA, 117) ///< hardware acceleration through CUDA

// Packed RGB/BGR with unused/undefined alpha
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, 0RGB, 118) ///< packed RGB 8:8:8, 32bpp, XRGBXRGB... (X=unused/undefined)
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, RGB0, 119) ///< packed RGB 8:8:8, 32bpp, RGBXRGBX... (X=unused/undefined)
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, 0BGR, 120) ///< packed BGR 8:8:8, 32bpp, XBGRXBGR... (X=unused/undefined)
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, BGR0, 121) ///< packed BGR 8:8:8, 32bpp, BGRXBGRX... (X=unused/undefined)

// High bit-depth planar YUV formats with 12 and 14 bits
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, YUV420P12BE, 122) ///< planar YUV 4:2:0, 18bpp, big-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, YUV420P12LE, 123) ///< planar YUV 4:2:0, 18bpp, little-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, YUV420P14BE, 124) ///< planar YUV 4:2:0, 21bpp, big-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, YUV420P14LE, 125) ///< planar YUV 4:2:0, 21bpp, little-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, YUV422P12BE, 126) ///< planar YUV 4:2:2, 24bpp, big-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, YUV422P12LE, 127) ///< planar YUV 4:2:2, 24bpp, little-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, YUV422P14BE, 128) ///< planar YUV 4:2:2, 28bpp, big-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, YUV422P14LE, 129) ///< planar YUV 4:2:2, 28bpp, little-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, YUV444P12BE, 130) ///< planar YUV 4:4:4, 36bpp, big-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, YUV444P12LE, 131) ///< planar YUV 4:4:4, 36bpp, little-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, YUV444P14BE, 132) ///< planar YUV 4:4:4, 42bpp, big-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, YUV444P14LE, 133) ///< planar YUV 4:4:4, 42bpp, little-endian

// High bit-depth planar GBR formats
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, GBRP12BE, 134) ///< planar GBR 4:4:4, 36bpp, big-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, GBRP12LE, 135) ///< planar GBR 4:4:4, 36bpp, little-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, GBRP14BE, 136) ///< planar GBR 4:4:4, 42bpp, big-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, GBRP14LE, 137) ///< planar GBR 4:4:4, 42bpp, little-endian

// Deprecated JPEG YUV 4:1:1 format
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, YUVJ411P, 138) ///< planar YUV 4:1:1, full scale (JPEG), deprecated

// Bayer formats (8-bit and 16-bit)
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, BAYER_BGGR8, 139) ///< bayer, BGBG..(odd line), GRGR..(even line), 8-bit samples
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, BAYER_RGGB8, 140) ///< bayer, RGRG..(odd line), GBGB..(even line), 8-bit samples
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, BAYER_GBRG8, 141) ///< bayer, GBGB..(odd line), RGRG..(even line), 8-bit samples
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, BAYER_GRBG8, 142) ///< bayer, GRGR..(odd line), BGBG..(even line), 8-bit samples
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, BAYER_BGGR16LE, 143) ///< bayer, BGBG..(odd line), GRGR..(even line), 16-bit samples, little-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, BAYER_BGGR16BE, 144) ///< bayer, BGBG..(odd line), GRGR..(even line), 16-bit samples, big-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, BAYER_RGGB16LE, 145) ///< bayer, RGRG..(odd line), GBGB..(even line), 16-bit samples, little-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, BAYER_RGGB16BE, 146) ///< bayer, RGRG..(odd line), GBGB..(even line), 16-bit samples, big-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, BAYER_GBRG16LE, 147) ///< bayer, GBGB..(odd line), RGRG..(even line), 16-bit samples, little-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, BAYER_GBRG16BE, 148) ///< bayer, GBGB..(odd line), RGRG..(even line), 16-bit samples, big-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, BAYER_GRBG16LE, 149) ///< bayer, GRGR..(odd line), BGBG..(even line), 16-bit samples, little-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, BAYER_GRBG16BE, 150) ///< bayer, GRGR..(odd line), BGBG..(even line), 16-bit samples, big-endian

// XVideo Motion Acceleration
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, XVMC, 151) ///< XVideo Motion Acceleration via common packet passing

// High bit-depth YUV 4:4:0 formats
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, YUV440P10LE, 152) ///< planar YUV 4:4:0, 20bpp, little-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, YUV440P10BE, 153) ///< planar YUV 4:4:0, 20bpp, big-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, YUV440P12LE, 154) ///< planar YUV 4:4:0, 24bpp, little-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, YUV440P12BE, 155) ///< planar YUV 4:4:0, 24bpp, big-endian

// Packed AYUV formats
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, AYUV64LE, 156) ///< packed AYUV 4:4:4:4, 64bpp, little-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, AYUV64BE, 157) ///< packed AYUV 4:4:4:4, 64bpp, big-endian

// Hardware decoding through Videotoolbox
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, VIDEOTOOLBOX, 158) ///< hardware decoding through Videotoolbox

// High bit-depth interleaved chroma formats
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, P010LE, 159) ///< interleaved chroma YUV 4:2:0, 10bpp, little-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, P010BE, 160) ///< interleaved chroma YUV 4:2:0, 10bpp, big-endian

// High bit-depth planar GBR with alpha formats
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, GBRAP12BE, 161) ///< planar GBR with alpha, 48bpp, big-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, GBRAP12LE, 162) ///< planar GBR with alpha, 48bpp, little-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, GBRAP10BE, 163) ///< planar GBR with alpha, 40bpp, big-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, GBRAP10LE, 164) ///< planar GBR with alpha, 40bpp, little-endian

// Hardware decoding through MediaCodec
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, MEDIACODEC, 165) ///< hardware decoding through MediaCodec

// High bit-depth grayscale formats
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, GRAY12BE, 166) ///< grayscale, 12bpp, big-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, GRAY12LE, 167) ///< grayscale, 12bpp, little-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, GRAY10BE, 168) ///< grayscale, 10bpp, big-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, GRAY10LE, 169) ///< grayscale, 10bpp, little-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, P016LE, 170) ///< interleaved chroma YUV 4:2:0, 16bpp, little-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, P016BE, 171) ///< interleaved chroma YUV 4:2:0, 16bpp, big-endian
// Direct3D11 hardware surfaces
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, D3D11, 172) ///< hardware surfaces for Direct3D11

// High bit-depth grayscale formats with 9 bits
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, GRAY9BE, 173) ///< grayscale, 9bpp, big-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, GRAY9LE, 174) ///< grayscale, 9bpp, little-endian

// IEEE-754 single-precision planar GBR formats
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, GBRPF32BE, 175) ///< planar GBR 4:4:4, 96bpp, IEEE-754 single precision, big-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, GBRPF32LE, 176) ///< planar GBR 4:4:4, 96bpp, IEEE-754 single precision, little-endian

// IEEE-754 single-precision planar GBRA formats
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, GBRAPF32BE, 177) ///< planar GBRA 4:4:4:4, 128bpp, IEEE-754 single precision, big-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, GBRAPF32LE, 178) ///< planar GBRA 4:4:4:4, 128bpp, IEEE-754 single precision, little-endian

// DRM-managed buffers
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, DRM_PRIME, 179) ///< DRM-managed buffers exposed through PRIME buffer sharing

// OpenCL hardware surfaces
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, OPENCL, 180) ///< hardware surfaces for OpenCL

// High bit-depth grayscale formats with 14 bits
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, GRAY14BE, 181) ///< grayscale, 14bpp, big-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, GRAY14LE, 182) ///< grayscale, 14bpp, little-endian

// IEEE-754 single-precision grayscale formats
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, GRAYF32BE, 183) ///< grayscale, 32bpp, IEEE-754 single precision, big-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, GRAYF32LE, 184) ///< grayscale, 32bpp, IEEE-754 single precision, little-endian

// High bit-depth YUV + Alpha formats with 12 bits
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, YUVA422P12BE, 185) ///< planar YUV 4:2:2 with alpha, 24bpp, 12b alpha, big-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, YUVA422P12LE, 186) ///< planar YUV 4:2:2 with alpha, 24bpp, 12b alpha, little-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, YUVA444P12BE, 187) ///< planar YUV 4:4:4 with alpha, 36bpp, 12b alpha, big-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, YUVA444P12LE, 188) ///< planar YUV 4:4:4 with alpha, 36bpp, 12b alpha, little-endian

// Planar NV24 and NV42 formats
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, NV24, 189) ///< planar YUV 4:4:4, 24bpp, one plane for Y and one for interleaved UV
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, NV42, 190) ///< planar YUV 4:4:4, 24bpp, one plane for Y and one for interleaved VU

// Vulkan hardware images
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, VULKAN, 191) ///< Vulkan hardware images

// Packed YUV 4:2:2 with 10 bits
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, Y210BE, 192) ///< packed YUV 4:2:2, 20bpp, big-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, Y210LE, 193) ///< packed YUV 4:2:2, 20bpp, little-endian

// Packed RGB with 10 bits and unused alpha
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, X2RGB10LE, 194) ///< packed RGB 10:10:10, 30bpp, little-endian
MMCW_PIXFMT_ENUM(MMCW_PIXFMT, X2RGB10BE, 195) ///< packed RGB 10:10:10, 30bpp, big-endian
