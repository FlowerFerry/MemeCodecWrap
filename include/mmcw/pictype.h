
#ifndef MMCW_PICTYPE_H_INCLUDED
#define MMCW_PICTYPE_H_INCLUDED

#include <stdint.h>
#include <mego/predef/symbol/inline.h>

typedef int32_t mmcw_pictype_e;
enum {
#define MMCW_PICTYPE_ENUM(CLASS, NAME, NUMBER) CLASS##_##NAME = NUMBER,
#include "pictype.inl"
#undef MMCW_PICTYPE_ENUM
    MMCW_PICTYPE_LAST
};

MG_CAPI_INLINE const char* mmcw_pictype_name(mmcw_pictype_e pictype) 
{
    switch (pictype) {
#define MMCW_PICTYPE_ENUM(CLASS, NAME, NUMBER) \
        case CLASS##_##NAME: return "PICTYPE_" #NAME;
#include "pictype.inl"
#undef MMCW_PICTYPE_ENUM
        default: return "UNKNOWN";
    }
}

#endif // !MMCW_PICTYPE_H_INCLUDED