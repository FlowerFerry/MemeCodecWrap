
#ifndef MMCWPP_RK_MPP_BUFFER_H_INCLUDED
#define MMCWPP_RK_MPP_BUFFER_H_INCLUDED

extern "C" {
#include <mpp_buffer.h>
}

#include "buffer_group.h"

#include <tuple>

namespace mmcwpp {
namespace rk {
namespace mpp {

struct buffer
{
    buffer() noexcept : native_(nullptr) {}
    buffer(buffer&& _other) noexcept 
        : native_(_other.native_) 
    {
        _other.native_ = nullptr;
    }

    ~buffer() {
        if (native_) {
            mpp_buffer_put(native_);
        }
    }

    buffer& operator=(buffer&& _other) noexcept {
        if (this != &_other) {
            std::swap(native_, _other.native_);
        }
        return *this;
    }

    void* data() const noexcept {
        return mpp_buffer_get_ptr(native_);
    }

    size_t size() const noexcept {
        return mpp_buffer_get_size(native_);
    }

    MppBuffer native_handle() const noexcept {
        return native_;
    }

    MppBuffer native_handle() noexcept {
        return native_;
    }

    static buffer take(MppBuffer _buf) 
    {
        buffer b;
        b.native_ = _buf;
        return b;
    }

    static std::tuple<buffer, MPP_RET> create(size_t _size) 
    {
        MppBuffer buf;
        MPP_RET ret = mpp_buffer_get(NULL, &buf, _size);
        if (ret != MPP_OK)
            return std::make_tuple(buffer{}, ret);
        else 
            return std::make_tuple(buffer::take(buf), ret);
    }

    static std::tuple<buffer, MPP_RET> create(buffer_group& _group, size_t _size) 
    {
        MppBuffer buf;
        MPP_RET ret = mpp_buffer_get(_group.native_handle(), &buf, _size);
        if (ret != MPP_OK)
            return std::make_tuple(buffer{}, ret);
        else
            return std::make_tuple(buffer::take(buf), ret);
    }

private:
    MppBuffer native_;
}; 

}
}
}

#endif // !MMCWPP_RK_MPP_BUFFER_H_INCLUDED
