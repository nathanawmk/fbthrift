/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/basic-annotations/gen-cpp2/MyService.h"
#include "thrift/compiler/test/fixtures/basic-annotations/gen-cpp2/MyService.tcc"

#include <thrift/lib/cpp2/gen/service_cpp.h>

#include <thrift/lib/cpp2/protocol/BinaryProtocol.h>
#include <thrift/lib/cpp2/protocol/CompactProtocol.h>
#include <thrift/lib/cpp2/protocol/Protocol.h>

namespace cpp2 {
std::unique_ptr<apache::thrift::AsyncProcessor> MyServiceSvIf::getProcessor() {
  return std::make_unique<MyServiceAsyncProcessor>(this);
}

void MyServiceSvIf::ping() {
  apache::thrift::detail::si::throw_app_exn_unimplemented("ping");
}

folly::SemiFuture<folly::Unit> MyServiceSvIf::semifuture_ping() {
  return apache::thrift::detail::si::semifuture([&] { return ping(); });
}

folly::Future<folly::Unit> MyServiceSvIf::future_ping() {
  return apache::thrift::detail::si::future(semifuture_ping(), getThreadManager());
}


void MyServiceSvIf::async_tm_ping(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] { return future_ping(); });
}

void MyServiceSvIf::getRandomData(::std::string& /*_return*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("getRandomData");
}

folly::SemiFuture<std::unique_ptr<::std::string>> MyServiceSvIf::semifuture_getRandomData() {
  return apache::thrift::detail::si::semifuture_returning_uptr([&](::std::string& _return) { getRandomData(_return); });
}

folly::Future<std::unique_ptr<::std::string>> MyServiceSvIf::future_getRandomData() {
  return apache::thrift::detail::si::future(semifuture_getRandomData(), getThreadManager());
}


void MyServiceSvIf::async_tm_getRandomData(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::std::string>>> callback) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] { return future_getRandomData(); });
}


bool MyServiceSvIf::hasDataById(int64_t /*id*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("hasDataById");
}

folly::SemiFuture<bool> MyServiceSvIf::semifuture_hasDataById(int64_t id) {
  return apache::thrift::detail::si::semifuture([&] { return hasDataById(id); });
}

folly::Future<bool> MyServiceSvIf::future_hasDataById(int64_t id) {
  return apache::thrift::detail::si::future(semifuture_hasDataById(id), getThreadManager());
}


void MyServiceSvIf::async_tm_hasDataById(std::unique_ptr<apache::thrift::HandlerCallback<bool>> callback, int64_t id) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] { return future_hasDataById(id); });
}

void MyServiceSvIf::getDataById(::std::string& /*_return*/, int64_t /*id*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("getDataById");
}

folly::SemiFuture<std::unique_ptr<::std::string>> MyServiceSvIf::semifuture_getDataById(int64_t id) {
  return apache::thrift::detail::si::semifuture_returning_uptr([&](::std::string& _return) { getDataById(_return, id); });
}

folly::Future<std::unique_ptr<::std::string>> MyServiceSvIf::future_getDataById(int64_t id) {
  return apache::thrift::detail::si::future(semifuture_getDataById(id), getThreadManager());
}


void MyServiceSvIf::async_tm_getDataById(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::std::string>>> callback, int64_t id) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] { return future_getDataById(id); });
}


void MyServiceSvIf::putDataById(int64_t /*id*/, std::unique_ptr<::std::string> /*data*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("putDataById");
}

folly::SemiFuture<folly::Unit> MyServiceSvIf::semifuture_putDataById(int64_t id, std::unique_ptr<::std::string> data) {
  return apache::thrift::detail::si::semifuture([&] { return putDataById(id, std::move(data)); });
}

folly::Future<folly::Unit> MyServiceSvIf::future_putDataById(int64_t id, std::unique_ptr<::std::string> data) {
  return apache::thrift::detail::si::future(semifuture_putDataById(id, std::move(data)), getThreadManager());
}


void MyServiceSvIf::async_tm_putDataById(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, int64_t id, std::unique_ptr<::std::string> data) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] { return future_putDataById(id, std::move(data)); });
}

void MyServiceSvIf::lobDataById(int64_t /*id*/, std::unique_ptr<::std::string> /*data*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("lobDataById");
}

folly::SemiFuture<folly::Unit> MyServiceSvIf::semifuture_lobDataById(int64_t id, std::unique_ptr<::std::string> data) {
  return apache::thrift::detail::si::semifuture([&] { return lobDataById(id, std::move(data)); });
}

folly::Future<folly::Unit> MyServiceSvIf::future_lobDataById(int64_t id, std::unique_ptr<::std::string> data) {
  return apache::thrift::detail::si::future(semifuture_lobDataById(id, std::move(data)), getThreadManager());
}


void MyServiceSvIf::async_tm_lobDataById(std::unique_ptr<apache::thrift::HandlerCallbackBase> callback, int64_t id, std::unique_ptr<::std::string> data) {
  apache::thrift::detail::si::async_tm_oneway(this, std::move(callback), [&] { return future_lobDataById(id, std::move(data)); });
}

void MyServiceSvIf::cppDoNothing() {
  apache::thrift::detail::si::throw_app_exn_unimplemented("doNothing");
}

folly::SemiFuture<folly::Unit> MyServiceSvIf::semifuture_cppDoNothing() {
  return apache::thrift::detail::si::semifuture([&] { return cppDoNothing(); });
}

folly::Future<folly::Unit> MyServiceSvIf::future_cppDoNothing() {
  return apache::thrift::detail::si::future(semifuture_cppDoNothing(), getThreadManager());
}


void MyServiceSvIf::async_tm_cppDoNothing(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] { return future_cppDoNothing(); });
}

void MyServiceSvNull::ping() {
  return;
}

void MyServiceSvNull::getRandomData(::std::string& /*_return*/) {}

bool MyServiceSvNull::hasDataById(int64_t /*id*/) {
  return 0;
}

void MyServiceSvNull::getDataById(::std::string& /*_return*/, int64_t /*id*/) {}

void MyServiceSvNull::putDataById(int64_t /*id*/, std::unique_ptr<::std::string> /*data*/) {
  return;
}

void MyServiceSvNull::lobDataById(int64_t /*id*/, std::unique_ptr<::std::string> /*data*/) {
  return;
}

void MyServiceSvNull::cppDoNothing() {
  return;
}

const char* MyServiceAsyncProcessor::getServiceName() {
  return "MyService";
}

folly::Optional<std::string> MyServiceAsyncProcessor::getCacheKey(folly::IOBuf* buf, apache::thrift::protocol::PROTOCOL_TYPES protType) {
  return apache::thrift::detail::ap::get_cache_key(buf, protType, cacheKeyMap_);
}

void MyServiceAsyncProcessor::process(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  apache::thrift::detail::ap::process(this, std::move(req), std::move(buf), protType, context, eb, tm);
}

bool MyServiceAsyncProcessor::isOnewayMethod(const folly::IOBuf* buf, const apache::thrift::transport::THeader* header) {
  return apache::thrift::detail::ap::is_oneway_method(buf, header, onewayMethods_);
}

std::shared_ptr<folly::RequestContext> MyServiceAsyncProcessor::getBaseContextForRequest() {
  return iface_->getBaseContextForRequest();
}

std::unordered_set<std::string> MyServiceAsyncProcessor::onewayMethods_ {
  "lobDataById"
};
std::unordered_map<std::string, int16_t> MyServiceAsyncProcessor::cacheKeyMap_ {};
const MyServiceAsyncProcessor::ProcessMap& MyServiceAsyncProcessor::getBinaryProtocolProcessMap() {
  return binaryProcessMap_;
}

const MyServiceAsyncProcessor::ProcessMap MyServiceAsyncProcessor::binaryProcessMap_ {
  {"ping", &MyServiceAsyncProcessor::_processInThread_ping<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"getRandomData", &MyServiceAsyncProcessor::_processInThread_getRandomData<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"hasDataById", &MyServiceAsyncProcessor::_processInThread_hasDataById<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"getDataById", &MyServiceAsyncProcessor::_processInThread_getDataById<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"putDataById", &MyServiceAsyncProcessor::_processInThread_putDataById<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"lobDataById", &MyServiceAsyncProcessor::_processInThread_lobDataById<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"doNothing", &MyServiceAsyncProcessor::_processInThread_cppDoNothing<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
};

const MyServiceAsyncProcessor::ProcessMap& MyServiceAsyncProcessor::getCompactProtocolProcessMap() {
  return compactProcessMap_;
}

const MyServiceAsyncProcessor::ProcessMap MyServiceAsyncProcessor::compactProcessMap_ {
  {"ping", &MyServiceAsyncProcessor::_processInThread_ping<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"getRandomData", &MyServiceAsyncProcessor::_processInThread_getRandomData<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"hasDataById", &MyServiceAsyncProcessor::_processInThread_hasDataById<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"getDataById", &MyServiceAsyncProcessor::_processInThread_getDataById<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"putDataById", &MyServiceAsyncProcessor::_processInThread_putDataById<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"lobDataById", &MyServiceAsyncProcessor::_processInThread_lobDataById<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"doNothing", &MyServiceAsyncProcessor::_processInThread_cppDoNothing<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
};

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
