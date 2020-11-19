/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include "thrift/compiler/test/fixtures/stream/gen-cpp2/PubSubStreamingService.h"

#include <thrift/lib/cpp2/gen/service_tcc.h>

namespace cpp2 {
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, apache::thrift::protocol::T_I32, int32_t*>, apache::thrift::FieldData<2, apache::thrift::protocol::T_I32, int32_t*>> PubSubStreamingService_returnstream_pargs;
typedef apache::thrift::ThriftPResultStream<
    apache::thrift::ThriftPresult<true>, 
    apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, apache::thrift::protocol::T_I32, int32_t*>>
    > PubSubStreamingService_returnstream_presult;
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, apache::thrift::protocol::T_I32, int32_t*>> PubSubStreamingService_streamthrows_pargs;
typedef apache::thrift::ThriftPResultStream<
    apache::thrift::ThriftPresult<true>, 
    apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, apache::thrift::protocol::T_I32, int32_t*>, apache::thrift::FieldData<1, apache::thrift::protocol::T_STRUCT,  ::cpp2::FooEx>>
    > PubSubStreamingService_streamthrows_presult;
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, apache::thrift::protocol::T_I32, int32_t*>> PubSubStreamingService_boththrows_pargs;
typedef apache::thrift::ThriftPResultStream<
    apache::thrift::ThriftPresult<true, apache::thrift::FieldData<1, apache::thrift::protocol::T_STRUCT,  ::cpp2::FooEx>>, 
    apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, apache::thrift::protocol::T_I32, int32_t*>, apache::thrift::FieldData<1, apache::thrift::protocol::T_STRUCT,  ::cpp2::FooEx>>
    > PubSubStreamingService_boththrows_presult;
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, apache::thrift::protocol::T_I32, int32_t*>> PubSubStreamingService_responseandstreamthrows_pargs;
typedef apache::thrift::ThriftPResultStream<
    apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, apache::thrift::protocol::T_I32, int32_t*>, apache::thrift::FieldData<1, apache::thrift::protocol::T_STRUCT,  ::cpp2::FooEx>>, 
    apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, apache::thrift::protocol::T_I32, int32_t*>, apache::thrift::FieldData<1, apache::thrift::protocol::T_STRUCT,  ::cpp2::FooEx>>
    > PubSubStreamingService_responseandstreamthrows_presult;
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, apache::thrift::protocol::T_I32, int32_t*>, apache::thrift::FieldData<2, apache::thrift::protocol::T_I32, int32_t*>> PubSubStreamingService_returnstreamFast_pargs;
typedef apache::thrift::ThriftPResultStream<
    apache::thrift::ThriftPresult<true>, 
    apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, apache::thrift::protocol::T_I32, int32_t*>>
    > PubSubStreamingService_returnstreamFast_presult;
template <typename ProtocolIn_, typename ProtocolOut_>
void PubSubStreamingServiceAsyncProcessor::setUpAndProcess_returnstream(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  if (!setUpRequestProcessing(req, ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_STREAMING_RESPONSE, iface_)) {
    return;
  }
  auto pri = iface_->getRequestPriority(ctx, apache::thrift::concurrency::NORMAL);
  ctx->setRequestPriority(pri);
  processInThread(std::move(req), std::move(serializedRequest), ctx, eb, tm, pri, apache::thrift::RpcKind::SINGLE_REQUEST_STREAMING_RESPONSE, &PubSubStreamingServiceAsyncProcessor::process_returnstream<ProtocolIn_, ProtocolOut_>, this);
}

template <typename ProtocolIn_, typename ProtocolOut_>
void PubSubStreamingServiceAsyncProcessor::process_returnstream(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  // make sure getConnectionContext is null
  // so async calls don't accidentally use it
  iface_->setConnectionContext(nullptr);
  PubSubStreamingService_returnstream_pargs args;
  int32_t uarg_i32_from{0};
  args.get<0>().value = &uarg_i32_from;
  int32_t uarg_i32_to{0};
  args.get<1>().value = &uarg_i32_to;
  std::unique_ptr<apache::thrift::ContextStack> ctxStack(this->getContextStack(this->getServiceName(), "PubSubStreamingService.returnstream", ctx));
  try {
    deserializeRequest<ProtocolIn_>(args, ctx->getMethodName(), serializedRequest, ctxStack.get());
  }
  catch (const std::exception& ex) {
    apache::thrift::detail::ap::process_handle_exn_deserialization<ProtocolOut_>(
        ex, std::move(req), ctx, eb, "returnstream");
    return;
  }
  req->setStartedProcessing();
  auto callback = std::make_unique<apache::thrift::HandlerCallback<apache::thrift::ServerStream<int32_t>>>(std::move(req), std::move(ctxStack), return_returnstream<ProtocolIn_,ProtocolOut_>, throw_wrapped_returnstream<ProtocolIn_, ProtocolOut_>, ctx->getProtoSeqId(), eb, tm, ctx, apache::thrift::ServerInterface::getBlockingThreadManager(tm));
  if (!callback->isRequestActive()) {
    return;
  }
  iface_->async_tm_returnstream(std::move(callback), args.get<0>().ref(), args.get<1>().ref());
}

template <class ProtocolIn_, class ProtocolOut_>
apache::thrift::ResponseAndServerStreamFactory PubSubStreamingServiceAsyncProcessor::return_returnstream(int32_t protoSeqId, apache::thrift::ContextStack* ctx, folly::Executor::KeepAlive<> executor, apache::thrift::ServerStream<int32_t> _return) {
  ProtocolOut_ prot;
  PubSubStreamingService_returnstream_presult::FieldsType result;
  using StreamPResultType = PubSubStreamingService_returnstream_presult::StreamPResultType;
  auto& _returnStream = _return;

      using ExMapType = apache::thrift::detail::ap::EmptyExMapType;
  auto _encodedStream = apache::thrift::detail::ap::encode_server_stream<ProtocolOut_, StreamPResultType, ExMapType>(std::move(_returnStream), std::move(executor));
  return {serializeResponse("returnstream", &prot, protoSeqId, ctx, result), std::move(_encodedStream)};
}

template <class ProtocolIn_, class ProtocolOut_>
void PubSubStreamingServiceAsyncProcessor::throw_wrapped_returnstream(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx) {
  if (!ew) {
    return;
  }
  {
    (void)protoSeqId;
    apache::thrift::detail::ap::process_throw_wrapped_handler_error<ProtocolOut_>(
        ew, std::move(req), reqCtx, ctx, "returnstream");
    return;
  }
}

template <typename ProtocolIn_, typename ProtocolOut_>
void PubSubStreamingServiceAsyncProcessor::setUpAndProcess_streamthrows(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  if (!setUpRequestProcessing(req, ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_STREAMING_RESPONSE, iface_)) {
    return;
  }
  auto pri = iface_->getRequestPriority(ctx, apache::thrift::concurrency::NORMAL);
  ctx->setRequestPriority(pri);
  processInThread(std::move(req), std::move(serializedRequest), ctx, eb, tm, pri, apache::thrift::RpcKind::SINGLE_REQUEST_STREAMING_RESPONSE, &PubSubStreamingServiceAsyncProcessor::process_streamthrows<ProtocolIn_, ProtocolOut_>, this);
}

template <typename ProtocolIn_, typename ProtocolOut_>
void PubSubStreamingServiceAsyncProcessor::process_streamthrows(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  // make sure getConnectionContext is null
  // so async calls don't accidentally use it
  iface_->setConnectionContext(nullptr);
  PubSubStreamingService_streamthrows_pargs args;
  int32_t uarg_foo{0};
  args.get<0>().value = &uarg_foo;
  std::unique_ptr<apache::thrift::ContextStack> ctxStack(this->getContextStack(this->getServiceName(), "PubSubStreamingService.streamthrows", ctx));
  try {
    deserializeRequest<ProtocolIn_>(args, ctx->getMethodName(), serializedRequest, ctxStack.get());
  }
  catch (const std::exception& ex) {
    apache::thrift::detail::ap::process_handle_exn_deserialization<ProtocolOut_>(
        ex, std::move(req), ctx, eb, "streamthrows");
    return;
  }
  req->setStartedProcessing();
  auto callback = std::make_unique<apache::thrift::HandlerCallback<apache::thrift::ServerStream<int32_t>>>(std::move(req), std::move(ctxStack), return_streamthrows<ProtocolIn_,ProtocolOut_>, throw_wrapped_streamthrows<ProtocolIn_, ProtocolOut_>, ctx->getProtoSeqId(), eb, tm, ctx, apache::thrift::ServerInterface::getBlockingThreadManager(tm));
  if (!callback->isRequestActive()) {
    return;
  }
  iface_->async_tm_streamthrows(std::move(callback), args.get<0>().ref());
}

template <class ProtocolIn_, class ProtocolOut_>
apache::thrift::ResponseAndServerStreamFactory PubSubStreamingServiceAsyncProcessor::return_streamthrows(int32_t protoSeqId, apache::thrift::ContextStack* ctx, folly::Executor::KeepAlive<> executor, apache::thrift::ServerStream<int32_t> _return) {
  ProtocolOut_ prot;
  PubSubStreamingService_streamthrows_presult::FieldsType result;
  using StreamPResultType = PubSubStreamingService_streamthrows_presult::StreamPResultType;
  auto& _returnStream = _return;

  struct ExMapType {
    bool operator()(StreamPResultType& res, folly::exception_wrapper ew) {
      if (ew.with_exception([&]( ::cpp2::FooEx& e) {
            res.get<1>().ref() = e;
            res.setIsSet(1, true);
          })) {
        return true;
      }
      return false;
    }
  };
  auto _encodedStream = apache::thrift::detail::ap::encode_server_stream<ProtocolOut_, StreamPResultType, ExMapType>(std::move(_returnStream), std::move(executor));
  return {serializeResponse("streamthrows", &prot, protoSeqId, ctx, result), std::move(_encodedStream)};
}

template <class ProtocolIn_, class ProtocolOut_>
void PubSubStreamingServiceAsyncProcessor::throw_wrapped_streamthrows(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx) {
  if (!ew) {
    return;
  }
  {
    (void)protoSeqId;
    apache::thrift::detail::ap::process_throw_wrapped_handler_error<ProtocolOut_>(
        ew, std::move(req), reqCtx, ctx, "streamthrows");
    return;
  }
}

template <typename ProtocolIn_, typename ProtocolOut_>
void PubSubStreamingServiceAsyncProcessor::setUpAndProcess_boththrows(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  if (!setUpRequestProcessing(req, ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_STREAMING_RESPONSE, iface_)) {
    return;
  }
  auto pri = iface_->getRequestPriority(ctx, apache::thrift::concurrency::NORMAL);
  ctx->setRequestPriority(pri);
  processInThread(std::move(req), std::move(serializedRequest), ctx, eb, tm, pri, apache::thrift::RpcKind::SINGLE_REQUEST_STREAMING_RESPONSE, &PubSubStreamingServiceAsyncProcessor::process_boththrows<ProtocolIn_, ProtocolOut_>, this);
}

template <typename ProtocolIn_, typename ProtocolOut_>
void PubSubStreamingServiceAsyncProcessor::process_boththrows(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  // make sure getConnectionContext is null
  // so async calls don't accidentally use it
  iface_->setConnectionContext(nullptr);
  PubSubStreamingService_boththrows_pargs args;
  int32_t uarg_foo{0};
  args.get<0>().value = &uarg_foo;
  std::unique_ptr<apache::thrift::ContextStack> ctxStack(this->getContextStack(this->getServiceName(), "PubSubStreamingService.boththrows", ctx));
  try {
    deserializeRequest<ProtocolIn_>(args, ctx->getMethodName(), serializedRequest, ctxStack.get());
  }
  catch (const std::exception& ex) {
    apache::thrift::detail::ap::process_handle_exn_deserialization<ProtocolOut_>(
        ex, std::move(req), ctx, eb, "boththrows");
    return;
  }
  req->setStartedProcessing();
  auto callback = std::make_unique<apache::thrift::HandlerCallback<apache::thrift::ServerStream<int32_t>>>(std::move(req), std::move(ctxStack), return_boththrows<ProtocolIn_,ProtocolOut_>, throw_wrapped_boththrows<ProtocolIn_, ProtocolOut_>, ctx->getProtoSeqId(), eb, tm, ctx, apache::thrift::ServerInterface::getBlockingThreadManager(tm));
  if (!callback->isRequestActive()) {
    return;
  }
  iface_->async_tm_boththrows(std::move(callback), args.get<0>().ref());
}

template <class ProtocolIn_, class ProtocolOut_>
apache::thrift::ResponseAndServerStreamFactory PubSubStreamingServiceAsyncProcessor::return_boththrows(int32_t protoSeqId, apache::thrift::ContextStack* ctx, folly::Executor::KeepAlive<> executor, apache::thrift::ServerStream<int32_t> _return) {
  ProtocolOut_ prot;
  PubSubStreamingService_boththrows_presult::FieldsType result;
  using StreamPResultType = PubSubStreamingService_boththrows_presult::StreamPResultType;
  auto& _returnStream = _return;

  struct ExMapType {
    bool operator()(StreamPResultType& res, folly::exception_wrapper ew) {
      if (ew.with_exception([&]( ::cpp2::FooEx& e) {
            res.get<1>().ref() = e;
            res.setIsSet(1, true);
          })) {
        return true;
      }
      return false;
    }
  };
  auto _encodedStream = apache::thrift::detail::ap::encode_server_stream<ProtocolOut_, StreamPResultType, ExMapType>(std::move(_returnStream), std::move(executor));
  return {serializeResponse("boththrows", &prot, protoSeqId, ctx, result), std::move(_encodedStream)};
}

template <class ProtocolIn_, class ProtocolOut_>
void PubSubStreamingServiceAsyncProcessor::throw_wrapped_boththrows(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx) {
  if (!ew) {
    return;
  }
  PubSubStreamingService_boththrows_presult result;
  if (ew.with_exception([&]( ::cpp2::FooEx& e) {
    ctx->userExceptionWrapped(true, ew);
    result.fields.get<0>().ref() = e;
    result.fields.setIsSet(0, true);
  }
  )) {} else
  {
    (void)protoSeqId;
    apache::thrift::detail::ap::process_throw_wrapped_handler_error<ProtocolOut_>(
        ew, std::move(req), reqCtx, ctx, "boththrows");
    return;
  }
  ProtocolOut_ prot;
  auto queue = serializeResponse("boththrows", &prot, protoSeqId, ctx, result.fields);
  queue.append(apache::thrift::transport::THeader::transform(queue.move(), reqCtx->getHeader()->getWriteTransforms()));
  std::ignore = req->sendStreamReply(queue.move(), apache::thrift::StreamServerCallbackPtr(nullptr));
}

template <typename ProtocolIn_, typename ProtocolOut_>
void PubSubStreamingServiceAsyncProcessor::setUpAndProcess_responseandstreamthrows(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  if (!setUpRequestProcessing(req, ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_STREAMING_RESPONSE, iface_)) {
    return;
  }
  auto pri = iface_->getRequestPriority(ctx, apache::thrift::concurrency::NORMAL);
  ctx->setRequestPriority(pri);
  processInThread(std::move(req), std::move(serializedRequest), ctx, eb, tm, pri, apache::thrift::RpcKind::SINGLE_REQUEST_STREAMING_RESPONSE, &PubSubStreamingServiceAsyncProcessor::process_responseandstreamthrows<ProtocolIn_, ProtocolOut_>, this);
}

template <typename ProtocolIn_, typename ProtocolOut_>
void PubSubStreamingServiceAsyncProcessor::process_responseandstreamthrows(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  // make sure getConnectionContext is null
  // so async calls don't accidentally use it
  iface_->setConnectionContext(nullptr);
  PubSubStreamingService_responseandstreamthrows_pargs args;
  int32_t uarg_foo{0};
  args.get<0>().value = &uarg_foo;
  std::unique_ptr<apache::thrift::ContextStack> ctxStack(this->getContextStack(this->getServiceName(), "PubSubStreamingService.responseandstreamthrows", ctx));
  try {
    deserializeRequest<ProtocolIn_>(args, ctx->getMethodName(), serializedRequest, ctxStack.get());
  }
  catch (const std::exception& ex) {
    apache::thrift::detail::ap::process_handle_exn_deserialization<ProtocolOut_>(
        ex, std::move(req), ctx, eb, "responseandstreamthrows");
    return;
  }
  req->setStartedProcessing();
  auto callback = std::make_unique<apache::thrift::HandlerCallback<apache::thrift::ResponseAndServerStream<int32_t,int32_t>>>(std::move(req), std::move(ctxStack), return_responseandstreamthrows<ProtocolIn_,ProtocolOut_>, throw_wrapped_responseandstreamthrows<ProtocolIn_, ProtocolOut_>, ctx->getProtoSeqId(), eb, tm, ctx, apache::thrift::ServerInterface::getBlockingThreadManager(tm));
  if (!callback->isRequestActive()) {
    return;
  }
  iface_->async_tm_responseandstreamthrows(std::move(callback), args.get<0>().ref());
}

template <class ProtocolIn_, class ProtocolOut_>
apache::thrift::ResponseAndServerStreamFactory PubSubStreamingServiceAsyncProcessor::return_responseandstreamthrows(int32_t protoSeqId, apache::thrift::ContextStack* ctx, folly::Executor::KeepAlive<> executor, apache::thrift::ResponseAndServerStream<int32_t,int32_t> _return) {
  ProtocolOut_ prot;
  PubSubStreamingService_responseandstreamthrows_presult::FieldsType result;
  using StreamPResultType = PubSubStreamingService_responseandstreamthrows_presult::StreamPResultType;
  result.get<0>().value = const_cast<apache::thrift::ResponseAndServerStream<int32_t,int32_t>::ResponseType*>(&_return.response);
  result.setIsSet(0, true);
  auto& _returnStream = _return.stream;

  struct ExMapType {
    bool operator()(StreamPResultType& res, folly::exception_wrapper ew) {
      if (ew.with_exception([&]( ::cpp2::FooEx& e) {
            res.get<1>().ref() = e;
            res.setIsSet(1, true);
          })) {
        return true;
      }
      return false;
    }
  };
  auto _encodedStream = apache::thrift::detail::ap::encode_server_stream<ProtocolOut_, StreamPResultType, ExMapType>(std::move(_returnStream), std::move(executor));
  return {serializeResponse("responseandstreamthrows", &prot, protoSeqId, ctx, result), std::move(_encodedStream)};
}

template <class ProtocolIn_, class ProtocolOut_>
void PubSubStreamingServiceAsyncProcessor::throw_wrapped_responseandstreamthrows(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx) {
  if (!ew) {
    return;
  }
  PubSubStreamingService_responseandstreamthrows_presult result;
  if (ew.with_exception([&]( ::cpp2::FooEx& e) {
    ctx->userExceptionWrapped(true, ew);
    result.fields.get<1>().ref() = e;
    result.fields.setIsSet(1, true);
  }
  )) {} else
  {
    (void)protoSeqId;
    apache::thrift::detail::ap::process_throw_wrapped_handler_error<ProtocolOut_>(
        ew, std::move(req), reqCtx, ctx, "responseandstreamthrows");
    return;
  }
  ProtocolOut_ prot;
  auto queue = serializeResponse("responseandstreamthrows", &prot, protoSeqId, ctx, result.fields);
  queue.append(apache::thrift::transport::THeader::transform(queue.move(), reqCtx->getHeader()->getWriteTransforms()));
  std::ignore = req->sendStreamReply(queue.move(), apache::thrift::StreamServerCallbackPtr(nullptr));
}

template <typename ProtocolIn_, typename ProtocolOut_>
void PubSubStreamingServiceAsyncProcessor::setUpAndProcess_returnstreamFast(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  if (!setUpRequestProcessing(req, ctx, eb, nullptr, apache::thrift::RpcKind::SINGLE_REQUEST_STREAMING_RESPONSE, iface_)) {
    return;
  }
  process_returnstreamFast<ProtocolIn_, ProtocolOut_>(std::move(req), std::move(serializedRequest), ctx, eb, tm);
}

template <typename ProtocolIn_, typename ProtocolOut_>
void PubSubStreamingServiceAsyncProcessor::process_returnstreamFast(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  // make sure getConnectionContext is null
  // so async calls don't accidentally use it
  iface_->setConnectionContext(nullptr);
  PubSubStreamingService_returnstreamFast_pargs args;
  int32_t uarg_i32_from{0};
  args.get<0>().value = &uarg_i32_from;
  int32_t uarg_i32_to{0};
  args.get<1>().value = &uarg_i32_to;
  std::unique_ptr<apache::thrift::ContextStack> ctxStack(this->getContextStack(this->getServiceName(), "PubSubStreamingService.returnstreamFast", ctx));
  try {
    deserializeRequest<ProtocolIn_>(args, ctx->getMethodName(), serializedRequest, ctxStack.get());
  }
  catch (const std::exception& ex) {
    apache::thrift::detail::ap::process_handle_exn_deserialization<ProtocolOut_>(
        ex, std::move(req), ctx, eb, "returnstreamFast");
    return;
  }
  req->setStartedProcessing();
  auto callback = std::make_unique<apache::thrift::HandlerCallback<apache::thrift::ServerStream<int32_t>>>(std::move(req), std::move(ctxStack), return_returnstreamFast<ProtocolIn_,ProtocolOut_>, throw_wrapped_returnstreamFast<ProtocolIn_, ProtocolOut_>, ctx->getProtoSeqId(), eb, tm, ctx, eb);
  iface_->async_eb_returnstreamFast(std::move(callback), args.get<0>().ref(), args.get<1>().ref());
}

template <class ProtocolIn_, class ProtocolOut_>
apache::thrift::ResponseAndServerStreamFactory PubSubStreamingServiceAsyncProcessor::return_returnstreamFast(int32_t protoSeqId, apache::thrift::ContextStack* ctx, folly::Executor::KeepAlive<> executor, apache::thrift::ServerStream<int32_t> _return) {
  ProtocolOut_ prot;
  PubSubStreamingService_returnstreamFast_presult::FieldsType result;
  using StreamPResultType = PubSubStreamingService_returnstreamFast_presult::StreamPResultType;
  auto& _returnStream = _return;

      using ExMapType = apache::thrift::detail::ap::EmptyExMapType;
  auto _encodedStream = apache::thrift::detail::ap::encode_server_stream<ProtocolOut_, StreamPResultType, ExMapType>(std::move(_returnStream), std::move(executor));
  return {serializeResponse("returnstreamFast", &prot, protoSeqId, ctx, result), std::move(_encodedStream)};
}

template <class ProtocolIn_, class ProtocolOut_>
void PubSubStreamingServiceAsyncProcessor::throw_wrapped_returnstreamFast(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx) {
  if (!ew) {
    return;
  }
  {
    (void)protoSeqId;
    apache::thrift::detail::ap::process_throw_wrapped_handler_error<ProtocolOut_>(
        ew, std::move(req), reqCtx, ctx, "returnstreamFast");
    return;
  }
}


} // cpp2
