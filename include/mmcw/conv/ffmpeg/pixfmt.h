
#ifndef MMCW_CONV_FFMPEG_PIXFMT_H_INCLUDED
#define MMCW_CONV_FFMPEG_PIXFMT_H_INCLUDED

#include <mmcw/pixfmt.h>
#include <libavutil/pixfmt.h>

MG_CAPI_INLINE AVPixFormat mmcw_pixfmt_into_avpixfmt(mmcw_pixfmt_e pixfmt) 
{
    switch (pixfmt) {
#define MMCW_PIXFMT_ENUM(CLASS, NAME, NUMBER) \
        case CLASS##_##NAME: return AV_PIX_FMT_##NAME;
#include "pixfmt.inl"
#undef MMCW_PIXFMT_ENUM
        default: return AV_PIX_FMT_NONE;
    }
}

MG_CAPI_INLINE mmcw_pixfmt_e mmcw_pixfmt_from_avpixfmt(AVPixFormat pixfmt) 
{
    switch (pixfmt) {
#define MMCW_PIXFMT_ENUM(CLASS, NAME, NUMBER) \
        case AV_PIX_FMT_##NAME: return CLASS##_##NAME;
#include "pixfmt.inl"
#undef MMCW_PIXFMT_ENUM
        default: return MMCW_PIXFMT_NONE;
    }
}

MG_CAPI_INLINE AVColorRange mmcw_colrange_into_avcolrange(mmcw_colrange_e colrange) 
{
    switch (colrange) {
#define MMCW_COLRANGE_ENUM(CLASS, NAME, NUMBER) \
        case CLASS##_##NAME: return AVCOL_RANGE_##NAME;
#include "color_range.inl"
#undef MMCW_COLRANGE_ENUM
        default: return AVCOL_RANGE_UNSPECIFIED;
    }
}

MG_CAPI_INLINE mmcw_colrange_e mmcw_colrange_from_avcolrange(AVColorRange colrange) 
{
    switch (colrange) {
#define MMCW_COLRANGE_ENUM(CLASS, NAME, NUMBER) \
        case AVCOL_RANGE_##NAME: return CLASS##_##NAME;
#include "color_range.inl"
#undef MMCW_COLRANGE_ENUM
        default: return MMCW_COLRANGE_UNSPECIFIED;
    }
}

MG_CAPI_INLINE AVColorPrimaries mmcw_colpri_into_avcolpri(mmcw_colpri_e colpri) 
{
    switch (colpri) {
#define MMCW_COLPRI_ENUM(CLASS, NAME, NUMBER) \
        case CLASS##_##NAME: return AVCOL_PRI_##NAME;
#include "color_primaries.inl"
#undef MMCW_COLPRI_ENUM
        default: return AVCOL_PRI_UNSPECIFIED;
    }
}

MG_CAPI_INLINE mmcw_colpri_e mmcw_colpri_from_avcolpri(AVColorPrimaries colpri) 
{
    switch (colpri) {
#define MMCW_COLPRI_ENUM(CLASS, NAME, NUMBER) \
        case AVCOL_PRI_##NAME: return CLASS##_##NAME;
#include "color_primaries.inl"
#undef MMCW_COLPRI_ENUM
        default: return MMCW_COLPRI_UNSPECIFIED;
    }
}

MG_CAPI_INLINE AVColorTransferCharacteristic mmcw_coltrc_into_avcoltrc(mmcw_coltrc_e coltrc) 
{
    switch (coltrc) {
#define MMCW_COLTRC_ENUM(CLASS, NAME, NUMBER) \
        case CLASS##_##NAME: return AVCOL_TRC_##NAME;
#include "color_transfer_characteristic.inl"
#undef MMCW_COLTRC_ENUM
        default: return AVCOL_TRC_UNSPECIFIED;
    }
}

MG_CAPI_INLINE mmcw_coltrc_e mmcw_coltrc_from_avcoltrc(AVColorTransferCharacteristic coltrc) 
{
    switch (coltrc) {
#define MMCW_COLTRC_ENUM(CLASS, NAME, NUMBER) \
        case AVCOL_TRC_##NAME: return CLASS##_##NAME;
#include "color_transfer_characteristic.inl"
#undef MMCW_COLTRC_ENUM
        default: return MMCW_COLTRC_UNSPECIFIED;
    }
}

MG_CAPI_INLINE AVColorSpace mmcw_colspc_into_avcolspc(mmcw_colspc_e colspc) 
{
    switch (colspc) {
#define MMCW_COLSPC_ENUM(CLASS, NAME, NUMBER) \
        case CLASS##_##NAME: return AVCOL_SPC_##NAME;
#include "color_space.inl"
#undef MMCW_COLSPC_ENUM
        default: return AVCOL_SPC_UNSPECIFIED;
    }
}

MG_CAPI_INLINE mmcw_colspc_e mmcw_colspc_from_avcolspc(AVColorSpace colspc) 
{
    switch (colspc) {
#define MMCW_COLSPC_ENUM(CLASS, NAME, NUMBER) \
        case AVCOL_SPC_##NAME: return CLASS##_##NAME;
#include "color_space.inl"
#undef MMCW_COLSPC_ENUM
        default: return MMCW_COLSPC_UNSPECIFIED;
    }
}

#endif // !MMCW_CONV_FFMPEG_PIXFMT_H_INCLUDED
