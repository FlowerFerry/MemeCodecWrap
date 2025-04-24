
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

#endif // !MMCW_CONV_FFMPEG_PIXFMT_H_INCLUDED
