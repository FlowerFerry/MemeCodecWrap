
#ifndef MMCWPP_RK_MPP_ENC_CFG_H_INCLUDED
#define MMCWPP_RK_MPP_ENC_CFG_H_INCLUDED

extern "C" {
#include <rk_venc_cfg.h>
}

#include <tuple>
#include <utility>

namespace mmcwpp {
namespace rk {
namespace mpp {

struct enc_cfg 
{
    enc_cfg() noexcept : native_(nullptr) {}
    enc_cfg(enc_cfg&& _other) noexcept 
        : native_(_other.native_) 
    {
        _other.native_ = nullptr;
    }

    ~enc_cfg() {
        if (native_) {
            mpp_enc_cfg_deinit(&native_);
        }
    }

    enc_cfg& operator=(enc_cfg&& _other) noexcept {
        if (this != &_other) {
            std::swap(native_, _other.native_);
        }
        return *this;
    }

    MPP_RET set(const char* _key, RK_S32 _value) 
    {
        return mpp_enc_cfg_set_s32(native_, _key, _value);
    }

    MPP_RET set(const char* _key, RK_U32 _value) 
    {
        return mpp_enc_cfg_set_u32(native_, _key, _value);
    }

    MPP_RET set(const char* _key, RK_S64 _value) 
    {
        return mpp_enc_cfg_set_s64(native_, _key, _value);
    }

    MPP_RET set(const char* _key, RK_U64 _value) 
    {
        return mpp_enc_cfg_set_u64(native_, _key, _value);
    }

    MppEncCfg native_handle() const noexcept {
        return native_;
    }

    MppEncCfg native_handle() noexcept {
        return native_;
    }

    static enc_cfg take(MppEncCfg _cfg) 
    {
        enc_cfg c;
        c.native_ = _cfg;
        return c;
    }

    static std::tuple<enc_cfg, MPP_RET> create() 
    {
        MppEncCfg cfg = nullptr;
        MPP_RET ret = mpp_enc_cfg_init(&cfg);
        if (ret != MPP_OK)
            return std::make_tuple(enc_cfg{}, ret);
        else
            return std::make_tuple(enc_cfg::take(cfg), ret);
    }

private:
    MppEncCfg native_;
};

}
}
}

#endif // !MMCWPP_RK_MPP_ENC_CFG_H_INCLUDED
