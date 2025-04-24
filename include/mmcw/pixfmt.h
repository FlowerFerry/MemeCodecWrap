
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

#endif // !MMCW_PIXFMT_H_INCLUDED
