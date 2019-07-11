/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#include <src/gen-py3/module/clients_wrapper.h>

namespace cpp2 {


MyServiceClientWrapper::MyServiceClientWrapper(
    std::shared_ptr<::cpp2::MyServiceAsyncClient> async_client,
    std::shared_ptr<apache::thrift::RequestChannel> channel) : 
    async_client(async_client),
      channel_(channel) {}

MyServiceClientWrapper::~MyServiceClientWrapper() {}

folly::Future<folly::Unit> MyServiceClientWrapper::disconnect() {
  return folly::via(
    this->async_client->getChannel()->getEventBase(),
    [cha = std::move(channel_), cli = std::move(async_client)] {});
}

void MyServiceClientWrapper::setPersistentHeader(const std::string& key, const std::string& value) {
    auto headerChannel = async_client->getHeaderChannel();
    if (headerChannel != nullptr) {
        headerChannel->setPersistentHeader(key, value);
    }
}


folly::Future<folly::Unit>
MyServiceClientWrapper::ping(
    apache::thrift::RpcOptions& rpcOptions) {
  folly::Promise<folly::Unit> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<::thrift::py3::FutureCallback<folly::Unit>>(
    std::move(_promise), rpcOptions, async_client->recv_wrapped_ping, channel_);
  async_client->ping(
    rpcOptions,
    std::move(callback)
  );
  return _future;
}

folly::Future<std::string>
MyServiceClientWrapper::getRandomData(
    apache::thrift::RpcOptions& rpcOptions) {
  folly::Promise<std::string> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<::thrift::py3::FutureCallback<std::string>>(
    std::move(_promise), rpcOptions, async_client->recv_wrapped_getRandomData, channel_);
  async_client->getRandomData(
    rpcOptions,
    std::move(callback)
  );
  return _future;
}

folly::Future<bool>
MyServiceClientWrapper::hasDataById(
    apache::thrift::RpcOptions& rpcOptions,
    int64_t arg_id) {
  folly::Promise<bool> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<::thrift::py3::FutureCallback<bool>>(
    std::move(_promise), rpcOptions, async_client->recv_wrapped_hasDataById, channel_);
  async_client->hasDataById(
    rpcOptions,
    std::move(callback),
    arg_id
  );
  return _future;
}

folly::Future<std::string>
MyServiceClientWrapper::getDataById(
    apache::thrift::RpcOptions& rpcOptions,
    int64_t arg_id) {
  folly::Promise<std::string> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<::thrift::py3::FutureCallback<std::string>>(
    std::move(_promise), rpcOptions, async_client->recv_wrapped_getDataById, channel_);
  async_client->getDataById(
    rpcOptions,
    std::move(callback),
    arg_id
  );
  return _future;
}

folly::Future<folly::Unit>
MyServiceClientWrapper::putDataById(
    apache::thrift::RpcOptions& rpcOptions,
    int64_t arg_id,
    std::string arg_data) {
  folly::Promise<folly::Unit> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<::thrift::py3::FutureCallback<folly::Unit>>(
    std::move(_promise), rpcOptions, async_client->recv_wrapped_putDataById, channel_);
  async_client->putDataById(
    rpcOptions,
    std::move(callback),
    arg_id,
    arg_data
  );
  return _future;
}

folly::Future<folly::Unit>
MyServiceClientWrapper::lobDataById(
    apache::thrift::RpcOptions& rpcOptions,
    int64_t arg_id,
    std::string arg_data) {
  folly::Promise<folly::Unit> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<::apache::thrift::OneWayFutureCallback>(
    std::move(_promise), channel_);
  async_client->lobDataById(
    rpcOptions,
    std::move(callback),
    arg_id,
    arg_data
  );
  return _future;
}


} // namespace cpp2
