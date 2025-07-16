
#ifndef MMCWPP_RK_MPP_BUFFER_GROUP_H_INCLUDED
#define MMCWPP_RK_MPP_BUFFER_GROUP_H_INCLUDED

extern "C" {
#include <mpp_buffer.h>
}

#include <utility>

namespace mmcwpp {
namespace rk {
namespace mpp {

struct buffer_group
{
    buffer_group() noexcept : native_(nullptr) {}
    
    buffer_group(buffer_group&& other) noexcept 
        : native_(other.native_) 
    {
        other.native_ = nullptr;
    }

    ~buffer_group() {
        if (native_) {
            mpp_buffer_group_put(native_);
        }
    }

    buffer_group& operator=(buffer_group&& other) noexcept {
        if (this != &other) {
            std::swap(native_, other.native_);
        }
        return *this;
    }

    MppBufferGroup native_handle() const noexcept {
        return native_;
    }

    MppBufferGroup native_handle() noexcept {
        return native_;
    }

    static buffer_group take(MppBufferGroup group) 
    {
        buffer_group bg;
        bg.native_ = group;
        return bg;
    }

private:
    MppBufferGroup native_;
};

}
}
}

#endif // !MMCWPP_RK_MPP_BUFFER_GROUP_H_INCLUDED
