
#ifndef MMCWPP_RK_MPP_PACKET_H_INCLUDED
#define MMCWPP_RK_MPP_PACKET_H_INCLUDED

extern "C" {
#include <mpp_packet.h>
}

#include <tuple>
#include <utility>

namespace mmcwpp {
namespace rk {
namespace mpp {

struct packet
{
    packet() noexcept : native_(nullptr) {}
    packet(packet&& _other) noexcept 
        : native_(_other.native_) 
    {
        _other.native_ = nullptr;
    }

    ~packet() {
        if (native_) {
            mpp_packet_deinit(&native_);
        }
    }

    packet& operator=(packet&& _other) noexcept {
        if (this != &_other) {
            std::swap(native_, _other.native_);
        }
        return *this;
    }

    void* data() const noexcept {
        return mpp_packet_get_data(native_);
    }

    size_t size() const noexcept {
        return mpp_packet_get_length(native_);
    }

    MppPacket native_handle() const noexcept {
        return native_;
    }

    MppPacket native_handle() noexcept {
        return native_;
    }

    static packet take(MppPacket pkt) 
    {
        packet p;
        p.native_ = pkt;
        return p;
    }

    static std::tuple<packet, MPP_RET> create(void* _data, size_t _size)
    {
        MppPacket pkt = nullptr;
        MPP_RET ret = mpp_packet_init(&pkt, _data, _size);
        if (ret != MPP_OK) {
            return std::make_tuple(packet{}, ret);
        }
        return std::make_tuple(packet::take(pkt), ret);
    }

private:
    MppPacket native_;
};

}
}
}

#endif // !MMCWPP_RK_MPP_PACKET_H_INCLUDED
