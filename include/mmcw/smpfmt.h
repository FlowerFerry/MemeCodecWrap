
#ifndef MMCW_SMPFMT_H_INCLUDED
#define MMCW_SMPFMT_H_INCLUDED

#include <stdint.h>
#include <mego/predef/symbol/inline.h>

typedef int32_t mmcw_smpfmt_e;
enum {
#define MMCW_SMPFMT_ENUM(CLASS, NAME, NUMBER) CLASS##_##NAME = NUMBER,
#include "smpfmt.inl"
#undef MMCW_SMPFMT_ENUM
    MMCW_SMPFMT_LAST
};

MG_CAPI_INLINE const char* mmcw_smpfmt_name(mmcw_smpfmt_e smpfmt) 
{
    switch (smpfmt) {
#define MMCW_SMPFMT_ENUM(CLASS, NAME, NUMBER) \
        case CLASS##_##NAME: return "SMPFMT_" #NAME;
#include "smpfmt.inl"
#undef MMCW_SMPFMT_ENUM
        default: return "UNKNOWN";
    }
}  
