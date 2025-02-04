/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include <folly/io/async/DelayedDestruction.h>
#include <thrift/lib/cpp/transport/THeader.h>
#include <thrift/lib/cpp2/async/RequestChannel.h>

namespace thrift {
namespace py3lite {
namespace client {

using RequestChannel_ptr = std::unique_ptr<
    apache::thrift::RequestChannel,
    folly::DelayedDestruction::Destructor>;

/**
 * Create a thrift channel by connecting to a host:port over TCP.
 */
folly::Future<RequestChannel_ptr> createThriftChannelTCP(
    const std::string& host,
    uint16_t port,
    uint32_t connect_timeout,
    CLIENT_TYPE client_t,
    apache::thrift::protocol::PROTOCOL_TYPES proto);

RequestChannel_ptr sync_createThriftChannelTCP(
    const std::string& host,
    uint16_t port,
    uint32_t connect_timeout,
    CLIENT_TYPE client_t,
    apache::thrift::protocol::PROTOCOL_TYPES proto);

/**
 * Create a thrift channel by connecting to a Unix domain socket.
 */
folly::Future<RequestChannel_ptr> createThriftChannelUnix(
    const std::string& path,
    uint32_t connect_timeout,
    CLIENT_TYPE client_t,
    apache::thrift::protocol::PROTOCOL_TYPES proto);

RequestChannel_ptr sync_createThriftChannelUnix(
    const std::string& path,
    uint32_t connect_timeout,
    CLIENT_TYPE client_t,
    apache::thrift::protocol::PROTOCOL_TYPES proto);

} // namespace client
} // namespace py3lite
} // namespace thrift
