/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.basic;

import java.util.*;

public class MyServiceReactiveBlockingWrapper 
  implements MyService {
  private final MyService.Reactive _delegate;

  public MyServiceReactiveBlockingWrapper(MyService.Reactive _delegate) {
    
    this._delegate = _delegate;
  }

  @java.lang.Override
  public void close() {
    _delegate.dispose();
  }

  @java.lang.Override
  public void ping() throws org.apache.thrift.TException {
      _delegate.ping().block();
  }
  @java.lang.Override
  public String getRandomData() throws org.apache.thrift.TException {
      return _delegate.getRandomData().block();
  }
  @java.lang.Override
  public void sink(final long sink) throws org.apache.thrift.TException {
      _delegate.sink(sink).block();
  }
  @java.lang.Override
  public void putDataById(final long id,final String data) throws org.apache.thrift.TException {
      _delegate.putDataById(id, data).block();
  }
  @java.lang.Override
  public boolean hasDataById(final long id) throws org.apache.thrift.TException {
      return _delegate.hasDataById(id).block();
  }
  @java.lang.Override
  public String getDataById(final long id) throws org.apache.thrift.TException {
      return _delegate.getDataById(id).block();
  }
  @java.lang.Override
  public void deleteDataById(final long id) throws org.apache.thrift.TException {
      _delegate.deleteDataById(id).block();
  }
  @java.lang.Override
  public void lobDataById(final long id,final String data) throws org.apache.thrift.TException {
      _delegate.lobDataById(id, data).block();
  }

}
