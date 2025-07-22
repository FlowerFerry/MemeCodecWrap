
#ifndef MMCW_CONV_FFMPEG_CODECID_H_INCLUDED
#define MMCW_CONV_FFMPEG_CODECID_H_INCLUDED

#include <mmcw/codecid.h>
#include <libavcodec/avcodec.h>

MG_CAPI_INLINE AVCodecID mmcw_codecid_into_avcodecid(mmcw_codecid_e codecid) 
{
    switch (codecid) {
#define MMCW_CODECID_ENUM(CLASS, NAME, NUMBER) \
        case CLASS##_##NAME: return AV_CODEC_ID_##NAME;
#include "codecid.inl"
#undef MMCW_CODECID_ENUM
        default: return AV_CODEC_ID_NONE;
    }
}

MG_CAPI_INLINE mmcw_codecid_e mmcw_codecid_from_avcodecid(AVCodecID codecid) 
{
    switch (codecid) {
#define MMCW_CODECID_ENUM(CLASS, NAME, NUMBER) \
        case AV_CODEC_ID_##NAME: return CLASS##_##NAME;
#include "codecid.inl"
#undef MMCW_CODECID_ENUM
        default: return MMCW_CODECID_NONE;
    }
}

#endif // !MMCW_CONV_FFMPEG_CODECID_H_INCLUDED