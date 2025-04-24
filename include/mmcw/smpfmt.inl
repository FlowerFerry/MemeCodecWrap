
#ifndef MMCW_SMPFMT_ENUM
#define MMCW_SMPFMT_ENUM(CLASS, NAME, NUMBER)
#endif

MMCW_SMPFMT_ENUM(MMCW_SMPFMT, NONE, -1) ///< No sample format specified
MMCW_SMPFMT_ENUM(MMCW_SMPFMT, U8, 0) ///< unsigned 8-bit integer
MMCW_SMPFMT_ENUM(MMCW_SMPFMT, S16, 1) ///< signed 16-bit integer
MMCW_SMPFMT_ENUM(MMCW_SMPFMT, S32, 2) ///< signed 32-bit integer
MMCW_SMPFMT_ENUM(MMCW_SMPFMT, FLT, 3) ///< float
MMCW_SMPFMT_ENUM(MMCW_SMPFMT, DBL, 4) ///< double
MMCW_SMPFMT_ENUM(MMCW_SMPFMT, U8P, 5) ///< unsigned 8-bit integer, planar
MMCW_SMPFMT_ENUM(MMCW_SMPFMT, S16P, 6) ///< signed 16-bit integer, planar
MMCW_SMPFMT_ENUM(MMCW_SMPFMT, S32P, 7) ///< signed 32-bit integer, planar
MMCW_SMPFMT_ENUM(MMCW_SMPFMT, FLTP, 8) ///< float, planar
MMCW_SMPFMT_ENUM(MMCW_SMPFMT, DBLP, 9) ///< double, planar
MMCW_SMPFMT_ENUM(MMCW_SMPFMT, S64, 10) ///< signed 64-bit integer
MMCW_SMPFMT_ENUM(MMCW_SMPFMT, S64P, 11) ///< signed 64-bit integer, planar