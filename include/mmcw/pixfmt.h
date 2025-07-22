
#ifndef MMCW_PIXFMT_H_INCLUDED
#define MMCW_PIXFMT_H_INCLUDED

#include <stdint.h>
#include <mego/predef/symbol/inline.h>

typedef int32_t mmcw_pixfmt_e;
enum {
#define MMCW_PIXFMT_ENUM(CLASS, NAME, NUMBER) CLASS##_##NAME = NUMBER,
#include "pixfmt.inl"
#undef MMCW_PIXFMT_ENUM
    MMCW_PIXFMT_LAST
};

MG_CAPI_INLINE const char* mmcw_pixfmt_name(mmcw_pixfmt_e pixfmt) 
{
    switch (pixfmt) {
#define MMCW_PIXFMT_ENUM(CLASS, NAME, NUMBER) \
        case CLASS##_##NAME: return "PIXFMT_" #NAME;
#include "pixfmt.inl"
#undef MMCW_PIXFMT_ENUM
        default: return "UNKNOWN";
    }
}

typedef int32_t mmcw_colrange_e;
enum {
#define MMCW_COLRANGE_ENUM(CLASS, NAME, NUMBER) CLASS##_##NAME = NUMBER,
#include "color_range.inl"
#undef MMCW_COLRANGE_ENUM
    MMCW_COLRANGE_LAST
};

MG_CAPI_INLINE const char* mmcw_colrange_name(mmcw_colrange_e colrange) 
{
    switch (colrange) {
#define MMCW_COLRANGE_ENUM(CLASS, NAME, NUMBER) \
        case CLASS##_##NAME: return "COLORRANGE_" #NAME;
#include "color_range.inl"
#undef MMCW_COLRANGE_ENUM
        default: return "UNKNOWN";
    }
}

typedef int32_t mmcw_colpri_e;
enum {
#define MMCW_COLPRI_ENUM(CLASS, NAME, NUMBER) CLASS##_##NAME = NUMBER,
#include "color_primaries.inl"
#undef MMCW_COLPRI_ENUM
    MMCW_COLPRI_LAST
};
#define MMCW_COLPRI_JEDEC_P22    MMCW_COLPRI_EBU3213
#define MMCW_COLPRI_SMPTEST428_1 MMCW_COLPRI_SMPTE428

MG_CAPI_INLINE const char* mmcw_colpri_name(mmcw_colpri_e colpri) 
{
    switch (colpri) {
#define MMCW_COLPRI_ENUM(CLASS, NAME, NUMBER) \
        case CLASS##_##NAME: return "COLORPRIMARIES_" #NAME;
#include "color_primaries.inl"
#undef MMCW_COLPRI_ENUM
        default: return "UNKNOWN";
    }
}

typedef int32_t mmcw_coltrc_e;
enum {
#define MMCW_COLTRC_ENUM(CLASS, NAME, NUMBER) CLASS##_##NAME = NUMBER,
#include "color_transfer_characteristic.inl"
#undef MMCW_COLTRC_ENUM
    MMCW_COLTRC_LAST
};
#define MMCW_COLTRC_SMPTEST2084   MMCW_COLTRC_SMPTE2084
#define MMCW_COLTRC_SMPTEST428_1  MMCW_COLTRC_SMPTE428

MG_CAPI_INLINE const char* mmcw_coltrc_name(mmcw_coltrc_e coltrc) 
{
    switch (coltrc) {
#define MMCW_COLTRC_ENUM(CLASS, NAME, NUMBER) \
        case CLASS##_##NAME: return "COLORTRANSFERCHARACTERISTIC_" #NAME;
#include "color_transfer_characteristic.inl"
#undef MMCW_COLTRC_ENUM
        default: return "UNKNOWN";
    }
}

typedef int32_t mmcw_colspc_e;
enum {
#define MMCW_COLSPC_ENUM(CLASS, NAME, NUMBER) CLASS##_##NAME = NUMBER,
#include "color_space.inl"
#undef MMCW_COLSPC_ENUM
    MMCW_COLSPC_LAST
};
#define MMCW_COLSPC_YCOCG MMCW_COLSPC_YCGCO

MG_CAPI_INLINE const char* mmcw_colspc_name(mmcw_colspc_e colspc) 
{
    switch (colspc) {
#define MMCW_COLSPC_ENUM(CLASS, NAME, NUMBER) \
        case CLASS##_##NAME: return "COLORSPACE_" #NAME;
#include "color_space.inl"
#undef MMCW_COLSPC_ENUM
        default: return "UNKNOWN";
    }
}

typedef int32_t mmcw_chromaloc_e;
enum {
#define MMCW_CHROMALOC_ENUM(CLASS, NAME, NUMBER) CLASS##_##NAME = NUMBER,
#include "chroma_location.inl"
#undef MMCW_CHROMALOC_ENUM
    MMCW_CHROMALOC_LAST
};

MG_CAPI_INLINE const char* mmcw_chromaloc_name(mmcw_chromaloc_e chromaloc) 
{
    switch (chromaloc) {
#define MMCW_CHROMALOC_ENUM(CLASS, NAME, NUMBER) \
        case CLASS##_##NAME: return "CHROMALOC_" #NAME;
#include "chroma_location.inl"
#undef MMCW_CHROMALOC_ENUM
        default: return "UNKNOWN";
    }
}

#endif // !MMCW_PIXFMT_H_INCLUDED
