// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: ssgoapi.proto

#include "ssgoapi.pb.h"
#include "ssgoapi.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace api {

static const char* SSService_method_names[] = {
  "/api.SSService/QueryStats",
};

std::unique_ptr< SSService::Stub> SSService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< SSService::Stub> stub(new SSService::Stub(channel));
  return stub;
}

SSService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_QueryStats_(SSService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status SSService::Stub::QueryStats(::grpc::ClientContext* context, const ::api::StatsRequest& request, ::api::StatsReply* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_QueryStats_, context, request, response);
}

void SSService::Stub::experimental_async::QueryStats(::grpc::ClientContext* context, const ::api::StatsRequest* request, ::api::StatsReply* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_QueryStats_, context, request, response, std::move(f));
}

void SSService::Stub::experimental_async::QueryStats(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::api::StatsReply* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_QueryStats_, context, request, response, std::move(f));
}

void SSService::Stub::experimental_async::QueryStats(::grpc::ClientContext* context, const ::api::StatsRequest* request, ::api::StatsReply* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_QueryStats_, context, request, response, reactor);
}

void SSService::Stub::experimental_async::QueryStats(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::api::StatsReply* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_QueryStats_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::api::StatsReply>* SSService::Stub::AsyncQueryStatsRaw(::grpc::ClientContext* context, const ::api::StatsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::api::StatsReply>::Create(channel_.get(), cq, rpcmethod_QueryStats_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::api::StatsReply>* SSService::Stub::PrepareAsyncQueryStatsRaw(::grpc::ClientContext* context, const ::api::StatsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::api::StatsReply>::Create(channel_.get(), cq, rpcmethod_QueryStats_, context, request, false);
}

SSService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      SSService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< SSService::Service, ::api::StatsRequest, ::api::StatsReply>(
          std::mem_fn(&SSService::Service::QueryStats), this)));
}

SSService::Service::~Service() {
}

::grpc::Status SSService::Service::QueryStats(::grpc::ServerContext* context, const ::api::StatsRequest* request, ::api::StatsReply* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace api
