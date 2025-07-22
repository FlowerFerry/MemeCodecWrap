
#ifndef MMCW_CODECID_H_INCLUDED
#define MMCW_CODECID_H_INCLUDED

#include <stdint.h>
#include <mego/predef/symbol/inline.h>

typedef int32_t mmcw_codecid_e;
enum {
#define MMCW_CODECID_ENUM(CLASS, NAME, NUMBER) CLASS##_##NAME = NUMBER,
#include "codecid.inl"
#undef MMCW_CODECID_ENUM
    MMCW_CODECID_LAST
};
#define MMCW_CODECID_BYTERUN1       MMCW_CODECID_IFF_ILBM
#define MMCW_CODECID_H265           MMCW_CODECID_HEVC
#define MMCW_CODECID_H266           MMCW_CODECID_VVC
#define MMCW_CODECID_FIRST_AUDIO    MMCW_CODECID_PCM_S16LE
#define MMCW_CODECID_FIRST_SUBTITLE MMCW_CODECID_DVD_SUBTITLE
#define MMCW_CODECID_FIRST_UNKNOWN  MMCW_CODECID_TTF

MG_CAPI_INLINE const char* mmcw_codecid_name(mmcw_codecid_e codecid) 
{
    switch (codecid) {
#define MMCW_CODECID_ENUM(CLASS, NAME, NUMBER) \
        case CLASS##_##NAME: return "CODECID_" #NAME;
#include "codecid.inl"
#undef MMCW_CODECID_ENUM
        default: return "UNKNOWN";
    }
}

#endif // !MMCW_CODECID_H_INCLUDED