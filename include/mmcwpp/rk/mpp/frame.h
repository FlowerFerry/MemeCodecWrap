
#ifndef MMCWPP_RK_MPP_FRAME_H_INCLUDED
#define MMCWPP_RK_MPP_FRAME_H_INCLUDED

extern "C" {
#include <mpp_frame.h>
}

#include "buffer.h"

#include <utility>

namespace mmcwpp {
namespace rk {
namespace mpp {

struct frame
{
    frame() noexcept : native_(nullptr) {}
    frame(frame&& _other) noexcept 
        : native_(_other.native_) 
    {
        _other.native_ = nullptr;
    }

    ~frame() {
        if (native_) {
            mpp_frame_deinit(&native_);
        }
    }

    frame& operator=(frame&& _other) noexcept {
        if (this != &_other) {
            std::swap(native_, _other.native_);
        }
        return *this;
    }

    void set_width(uint32_t _width) 
    {
        mpp_frame_set_width(native_, _width);
    }

    void set_height(uint32_t _height) 
    {
        mpp_frame_set_height(native_, _height);
    }

    void set_horizontal_stride(uint32_t _stride) 
    {
        mpp_frame_set_hor_stride(native_, _stride);
    }

    void set_vertical_stride(uint32_t _stride) 
    {
        mpp_frame_set_ver_stride(native_, _stride);
    }

    void set_format(MppFrameFormat _format) 
    {
        mpp_frame_set_fmt(native_, _format);
    }

    void set_pts(int64_t _pts) 
    {
        mpp_frame_set_pts(native_, _pts);
    }

    void set_fmt(MppFrameFormat _format) 
    {
        mpp_frame_set_fmt(native_, _format);
    }

    void set_eos(uint32_t _eos) 
    {
        mpp_frame_set_eos(native_, _eos);
    }

    void set_buffer(const buffer& _buf) 
    {
        mpp_frame_set_buffer(native_, _buf.native_handle());
    }

    MppFrame native_handle() const noexcept {
        return native_;
    }

    MppFrame native_handle() noexcept {
        return native_;
    }

    static frame take(MppFrame _frm) 
    {
        frame f;
        f.native_ = _frm;
        return f;
    }

    static std::tuple<frame, MPP_RET> create() 
    {
        MppFrame frm = nullptr;
        MPP_RET ret = mpp_frame_init(&frm);
        if (ret != MPP_OK)
            return std::make_tuple(frame{}, ret);
        else 
            return std::make_tuple(frame::take(frm), ret);
    }

private:
    MppFrame native_;
};

}
}
}

#endif // !MMCWPP_RK_MPP_FRAME_H_INCLUDED
