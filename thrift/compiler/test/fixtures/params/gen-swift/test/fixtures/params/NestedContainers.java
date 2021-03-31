/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.params;

import com.facebook.swift.codec.*;
import com.facebook.swift.codec.ThriftField.Requiredness;
import com.facebook.swift.service.*;
import com.facebook.swift.transport.client.*;
import com.google.common.util.concurrent.ListenableFuture;
import java.io.*;
import java.util.*;

@SwiftGenerated
@com.facebook.swift.service.ThriftService("NestedContainers")
public interface NestedContainers extends java.io.Closeable {
    @com.facebook.swift.service.ThriftService("NestedContainers")
    public interface Async extends java.io.Closeable {
        @java.lang.Override void close();

        @ThriftMethod(value = "mapList")
        ListenableFuture<Void> mapList(
            @com.facebook.swift.codec.ThriftField(value=1, name="foo", requiredness=Requiredness.NONE) final Map<Integer, List<Integer>> foo);

        default ListenableFuture<Void> mapList(
            @com.facebook.swift.codec.ThriftField(value=1, name="foo", requiredness=Requiredness.NONE) final Map<Integer, List<Integer>> foo,
            RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }

        default ListenableFuture<ResponseWrapper<Void>> mapListWrapper(
            @com.facebook.swift.codec.ThriftField(value=1, name="foo", requiredness=Requiredness.NONE) final Map<Integer, List<Integer>> foo,
            RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }

        @ThriftMethod(value = "mapSet")
        ListenableFuture<Void> mapSet(
            @com.facebook.swift.codec.ThriftField(value=1, name="foo", requiredness=Requiredness.NONE) final Map<Integer, Set<Integer>> foo);

        default ListenableFuture<Void> mapSet(
            @com.facebook.swift.codec.ThriftField(value=1, name="foo", requiredness=Requiredness.NONE) final Map<Integer, Set<Integer>> foo,
            RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }

        default ListenableFuture<ResponseWrapper<Void>> mapSetWrapper(
            @com.facebook.swift.codec.ThriftField(value=1, name="foo", requiredness=Requiredness.NONE) final Map<Integer, Set<Integer>> foo,
            RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }

        @ThriftMethod(value = "listMap")
        ListenableFuture<Void> listMap(
            @com.facebook.swift.codec.ThriftField(value=1, name="foo", requiredness=Requiredness.NONE) final List<Map<Integer, Integer>> foo);

        default ListenableFuture<Void> listMap(
            @com.facebook.swift.codec.ThriftField(value=1, name="foo", requiredness=Requiredness.NONE) final List<Map<Integer, Integer>> foo,
            RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }

        default ListenableFuture<ResponseWrapper<Void>> listMapWrapper(
            @com.facebook.swift.codec.ThriftField(value=1, name="foo", requiredness=Requiredness.NONE) final List<Map<Integer, Integer>> foo,
            RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }

        @ThriftMethod(value = "listSet")
        ListenableFuture<Void> listSet(
            @com.facebook.swift.codec.ThriftField(value=1, name="foo", requiredness=Requiredness.NONE) final List<Set<Integer>> foo);

        default ListenableFuture<Void> listSet(
            @com.facebook.swift.codec.ThriftField(value=1, name="foo", requiredness=Requiredness.NONE) final List<Set<Integer>> foo,
            RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }

        default ListenableFuture<ResponseWrapper<Void>> listSetWrapper(
            @com.facebook.swift.codec.ThriftField(value=1, name="foo", requiredness=Requiredness.NONE) final List<Set<Integer>> foo,
            RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }

        @ThriftMethod(value = "turtles")
        ListenableFuture<Void> turtles(
            @com.facebook.swift.codec.ThriftField(value=1, name="foo", requiredness=Requiredness.NONE) final List<List<Map<Integer, Map<Integer, Set<Integer>>>>> foo);

        default ListenableFuture<Void> turtles(
            @com.facebook.swift.codec.ThriftField(value=1, name="foo", requiredness=Requiredness.NONE) final List<List<Map<Integer, Map<Integer, Set<Integer>>>>> foo,
            RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }

        default ListenableFuture<ResponseWrapper<Void>> turtlesWrapper(
            @com.facebook.swift.codec.ThriftField(value=1, name="foo", requiredness=Requiredness.NONE) final List<List<Map<Integer, Map<Integer, Set<Integer>>>>> foo,
            RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }
    }
    @java.lang.Override void close();

    @ThriftMethod(value = "mapList")
    void mapList(
        @com.facebook.swift.codec.ThriftField(value=1, name="foo", requiredness=Requiredness.NONE) final Map<Integer, List<Integer>> foo) throws org.apache.thrift.TException;

    default void mapList(
        @com.facebook.swift.codec.ThriftField(value=1, name="foo", requiredness=Requiredness.NONE) final Map<Integer, List<Integer>> foo,
        RpcOptions rpcOptions) throws org.apache.thrift.TException {
        throw new UnsupportedOperationException();
    }

    default ResponseWrapper<Void> mapListWrapper(
        @com.facebook.swift.codec.ThriftField(value=1, name="foo", requiredness=Requiredness.NONE) final Map<Integer, List<Integer>> foo,
        RpcOptions rpcOptions) throws org.apache.thrift.TException {
        throw new UnsupportedOperationException();
    }

    @ThriftMethod(value = "mapSet")
    void mapSet(
        @com.facebook.swift.codec.ThriftField(value=1, name="foo", requiredness=Requiredness.NONE) final Map<Integer, Set<Integer>> foo) throws org.apache.thrift.TException;

    default void mapSet(
        @com.facebook.swift.codec.ThriftField(value=1, name="foo", requiredness=Requiredness.NONE) final Map<Integer, Set<Integer>> foo,
        RpcOptions rpcOptions) throws org.apache.thrift.TException {
        throw new UnsupportedOperationException();
    }

    default ResponseWrapper<Void> mapSetWrapper(
        @com.facebook.swift.codec.ThriftField(value=1, name="foo", requiredness=Requiredness.NONE) final Map<Integer, Set<Integer>> foo,
        RpcOptions rpcOptions) throws org.apache.thrift.TException {
        throw new UnsupportedOperationException();
    }

    @ThriftMethod(value = "listMap")
    void listMap(
        @com.facebook.swift.codec.ThriftField(value=1, name="foo", requiredness=Requiredness.NONE) final List<Map<Integer, Integer>> foo) throws org.apache.thrift.TException;

    default void listMap(
        @com.facebook.swift.codec.ThriftField(value=1, name="foo", requiredness=Requiredness.NONE) final List<Map<Integer, Integer>> foo,
        RpcOptions rpcOptions) throws org.apache.thrift.TException {
        throw new UnsupportedOperationException();
    }

    default ResponseWrapper<Void> listMapWrapper(
        @com.facebook.swift.codec.ThriftField(value=1, name="foo", requiredness=Requiredness.NONE) final List<Map<Integer, Integer>> foo,
        RpcOptions rpcOptions) throws org.apache.thrift.TException {
        throw new UnsupportedOperationException();
    }

    @ThriftMethod(value = "listSet")
    void listSet(
        @com.facebook.swift.codec.ThriftField(value=1, name="foo", requiredness=Requiredness.NONE) final List<Set<Integer>> foo) throws org.apache.thrift.TException;

    default void listSet(
        @com.facebook.swift.codec.ThriftField(value=1, name="foo", requiredness=Requiredness.NONE) final List<Set<Integer>> foo,
        RpcOptions rpcOptions) throws org.apache.thrift.TException {
        throw new UnsupportedOperationException();
    }

    default ResponseWrapper<Void> listSetWrapper(
        @com.facebook.swift.codec.ThriftField(value=1, name="foo", requiredness=Requiredness.NONE) final List<Set<Integer>> foo,
        RpcOptions rpcOptions) throws org.apache.thrift.TException {
        throw new UnsupportedOperationException();
    }

    @ThriftMethod(value = "turtles")
    void turtles(
        @com.facebook.swift.codec.ThriftField(value=1, name="foo", requiredness=Requiredness.NONE) final List<List<Map<Integer, Map<Integer, Set<Integer>>>>> foo) throws org.apache.thrift.TException;

    default void turtles(
        @com.facebook.swift.codec.ThriftField(value=1, name="foo", requiredness=Requiredness.NONE) final List<List<Map<Integer, Map<Integer, Set<Integer>>>>> foo,
        RpcOptions rpcOptions) throws org.apache.thrift.TException {
        throw new UnsupportedOperationException();
    }

    default ResponseWrapper<Void> turtlesWrapper(
        @com.facebook.swift.codec.ThriftField(value=1, name="foo", requiredness=Requiredness.NONE) final List<List<Map<Integer, Map<Integer, Set<Integer>>>>> foo,
        RpcOptions rpcOptions) throws org.apache.thrift.TException {
        throw new UnsupportedOperationException();
    }

    @com.facebook.swift.service.ThriftService("NestedContainers")
    interface Reactive extends reactor.core.Disposable {
        reactor.core.publisher.Mono<Void> mapList(final Map<Integer, List<Integer>> foo);

        default reactor.core.publisher.Mono<Void> mapList(final Map<Integer, List<Integer>> foo, RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }

        default reactor.core.publisher.Mono<ResponseWrapper<Void>> mapListWrapper(final Map<Integer, List<Integer>> foo, RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }

        reactor.core.publisher.Mono<Void> mapSet(final Map<Integer, Set<Integer>> foo);

        default reactor.core.publisher.Mono<Void> mapSet(final Map<Integer, Set<Integer>> foo, RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }

        default reactor.core.publisher.Mono<ResponseWrapper<Void>> mapSetWrapper(final Map<Integer, Set<Integer>> foo, RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }

        reactor.core.publisher.Mono<Void> listMap(final List<Map<Integer, Integer>> foo);

        default reactor.core.publisher.Mono<Void> listMap(final List<Map<Integer, Integer>> foo, RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }

        default reactor.core.publisher.Mono<ResponseWrapper<Void>> listMapWrapper(final List<Map<Integer, Integer>> foo, RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }

        reactor.core.publisher.Mono<Void> listSet(final List<Set<Integer>> foo);

        default reactor.core.publisher.Mono<Void> listSet(final List<Set<Integer>> foo, RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }

        default reactor.core.publisher.Mono<ResponseWrapper<Void>> listSetWrapper(final List<Set<Integer>> foo, RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }

        reactor.core.publisher.Mono<Void> turtles(final List<List<Map<Integer, Map<Integer, Set<Integer>>>>> foo);

        default reactor.core.publisher.Mono<Void> turtles(final List<List<Map<Integer, Map<Integer, Set<Integer>>>>> foo, RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }

        default reactor.core.publisher.Mono<ResponseWrapper<Void>> turtlesWrapper(final List<List<Map<Integer, Map<Integer, Set<Integer>>>>> foo, RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }

    }
}
