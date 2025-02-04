# Copyright (c) Facebook, Inc. and its affiliates.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

from libc.stdint cimport int32_t
from libcpp.memory cimport unique_ptr, make_shared, static_pointer_cast
from libcpp.string cimport string
from folly.iobuf cimport cIOBuf, IOBuf, from_unique_ptr
from thrift.py3.server cimport cAsyncProcessorFactory, Cpp2RequestContext, ThriftServer, AsyncProcessorFactory, RequestContext, THRIFT_REQUEST_CONTEXT

cdef extern from "thrift/lib/py3lite/server/server.h" namespace "::thrift::py3":
    cdef cppclass cPy3LiteAsyncProcessorFactory "::thrift::py3::Py3LiteAsyncProcessorFactory"(cAsyncProcessorFactory):
        cPy3LiteAsyncProcessorFactory()

cdef extern from "thrift/lib/cpp2/async/RpcTypes.h" namespace "::apache::thrift":
    cdef cppclass SerializedRequest "::apache::thrift::SerializedRequest":
        unique_ptr[cIOBuf] buffer

cdef class ServiceInterface:
    pass
