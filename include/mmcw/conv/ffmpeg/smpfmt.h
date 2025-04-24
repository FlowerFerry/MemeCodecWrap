
#ifndef MMCW_CONV_FFMPEG_SMPFMT_H_INCLUDED
#define MMCW_CONV_FFMPEG_SMPFMT_H_INCLUDED

#include <mmcw/smpfmt.h>
#include <libavutil/samplefmt.h>

MG_CAPI_INLINE AVSampleFormat mmcw_smpfmt_into_avsmpfmt(mmcw_smpfmt_e smpfmt) 
{
    switch (smpfmt) {
#define MMCW_SMPFMT_ENUM(CLASS, NAME, NUMBER) \
        case CLASS##_##NAME: return AV_SAMPLE_FMT_##NAME;
#include "smpfmt.inl"
#undef MMCW_SMPFMT_ENUM
        default: return AV_SAMPLE_FMT_NONE;
    }
}

MG_CAPI_INLINE mmcw_smpfmt_e mmcw_smpfmt_from_avsmpfmt(AVSampleFormat smpfmt) 
{
    switch (smpfmt) {
#define MMCW_SMPFMT_ENUM(CLASS, NAME, NUMBER) \
        case AV_SAMPLE_FMT_##NAME: return CLASS##_##NAME;
#include "smpfmt.inl"
#undef MMCW_SMPFMT_ENUM
        default: return MMCW_SMPFMT_NONE;
    }
}
