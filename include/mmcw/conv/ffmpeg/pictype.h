
#ifndef MMCW_CONV_FFMPEG_PICTYPE_H_INCLUDED
#define MMCW_CONV_FFMPEG_PICTYPE_H_INCLUDED

#include <mmcw/pictype.h>
#include <libavutil/avutil.h>

MG_CAPI_INLINE AVPictureType mmcw_pictype_into_avpictype(mmcw_pictype_e pictype) 
{
    switch (pictype) {
#define MMCW_PICTYPE_ENUM(CLASS, NAME, NUMBER) \
        case CLASS##_##NAME: return AV_PICTURE_TYPE_##NAME;
#include "pictype.inl"
#undef MMCW_PICTYPE_ENUM
        default: return AV_PICTURE_TYPE_NONE;
    }
}

MG_CAPI_INLINE mmcw_pictype_e mmcw_pictype_from_avpictype(AVPictureType pictype) 
{
    switch (pictype) {
#define MMCW_PICTYPE_ENUM(CLASS, NAME, NUMBER) \
        case AV_PICTURE_TYPE_##NAME: return CLASS##_##NAME;
#include "pictype.inl"
#undef MMCW_PICTYPE_ENUM
        default: return MMCW_PICTYPE_NONE;
    }
}

#endif // !MMCW_CONV_FFMPEG_PICTYPE_H_INCLUDED