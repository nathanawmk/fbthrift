/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#pragma once
#include <src/gen-cpp2/MyService.h>

#include <folly/futures/Future.h>
#include <folly/futures/Promise.h>
#include <folly/Unit.h>
#include <thrift/lib/py3/clientcallbacks.h>

#include <cstdint>
#include <functional>
#include <map>
#include <memory>
#include <set>
#include <vector>

namespace cpp2 {

class MyServiceClientWrapper {
  protected:
    std::shared_ptr<::cpp2::MyServiceAsyncClient> async_client;
    std::shared_ptr<apache::thrift::RequestChannel> channel_;
  public:
    explicit MyServiceClientWrapper(
      std::shared_ptr<::cpp2::MyServiceAsyncClient> async_client,
      std::shared_ptr<apache::thrift::RequestChannel> channel);
    virtual ~MyServiceClientWrapper();

    folly::Future<folly::Unit> disconnect();
    void disconnectInLoop();
    void setPersistentHeader(const std::string& key, const std::string& value);

    folly::Future<folly::Unit> ping(
      apache::thrift::RpcOptions& rpcOptions);
    folly::Future<std::string> getRandomData(
      apache::thrift::RpcOptions& rpcOptions);
    folly::Future<bool> hasDataById(
      apache::thrift::RpcOptions& rpcOptions,
      int64_t arg_id);
    folly::Future<std::string> getDataById(
      apache::thrift::RpcOptions& rpcOptions,
      int64_t arg_id);
    folly::Future<folly::Unit> putDataById(
      apache::thrift::RpcOptions& rpcOptions,
      int64_t arg_id,
      std::string arg_data);
    folly::Future<folly::Unit> lobDataById(
      apache::thrift::RpcOptions& rpcOptions,
      int64_t arg_id,
      std::string arg_data);
};


} // namespace cpp2
