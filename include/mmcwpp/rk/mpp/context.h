
#ifndef MMCWPP_RK_MPP_CONTEXT_H_INCLUDED
#define MMCWPP_RK_MPP_CONTEXT_H_INCLUDED

extern "C" {
#include <rk_type.h>
#include <rk_mpi.h>
}

#include "frame.h"
#include "packet.h"

#include <tuple>
#include <utility>

namespace mmcwpp {
namespace rk {
namespace mpp {

struct context
{
    context() noexcept {}
    context(context&& _other) noexcept 
        : ctx_(_other.ctx_) 
    {
        _other.ctx_ = nullptr;
    }

    ~context() {
        if (ctx_) {
            mpp_destroy(ctx_);
        }
    }

    context& operator=(context&& _other) noexcept {
        if (this != &_other) {
            std::swap(ctx_, _other.ctx_);
        }
        return *this;
    }

    MPP_RET control(MpiCmd _cmd, MppParam _param) 
    {
        return api_->control(ctx_, _cmd, _param);
    }

    MPP_RET encode_put_frame(const frame& _frame) 
    {
        return api_->encode_put_frame(ctx_, _frame.native_handle());
    }

    MPP_RET encode_put_end()
    {
        return api_->encode_put_frame(ctx_, nullptr);
    }

    std::tuple<packet, MPP_RET> encode_get_packet() 
    {
        MppPacket pkt = nullptr;
        MPP_RET ret = api_->encode_get_packet(ctx_, &pkt);
        if (ret != MPP_OK) 
            return std::make_tuple(packet{}, ret);
        else
            return std::make_tuple(packet::take(pkt), ret);
    }

    MppCtx native_handle() const noexcept {
        return ctx_;
    }

    MppCtx native_handle() noexcept {
        return ctx_;
    }

    static context take(MppCtx _ctx) 
    {
        context c;
        c.ctx_ = _ctx;
        return c;
    }    

    static std::tuple<context, MPP_RET> create(MppCtxType _type, MppCodingType _coding) 
    {
        MppCtx  ctx = nullptr;
        MppApi* mpi = nullptr;
        MPP_RET ret = mpp_create(&ctx, &mpi);
        if (ret != MPP_OK) {
            return std::make_tuple(context{}, ret);
        }
        
        ret = mpp_init(ctx, _type, _coding);
        if (ret != MPP_OK) {
            mpp_destroy(ctx);
            return std::make_tuple(context{}, ret);
        }

        context c;
        c.ctx_ = ctx;
        c.api_ = mpi;
        return std::make_tuple(std::move(c), MPP_OK);
    }

private:
    MppCtx  ctx_ = nullptr;
    MppApi *api_ = nullptr;
};

}
}
}

#endif // !MMCWPP_RK_MPP_CONTEXT_H_INCLUDED
