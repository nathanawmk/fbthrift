/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.sink;

import java.util.*;

public class SinkServiceReactiveAsyncWrapper 
  implements SinkService.Async {
  private SinkService.Reactive _delegate;

  public SinkServiceReactiveAsyncWrapper(SinkService.Reactive _delegate) {
    
    this._delegate = _delegate;
  }

  @java.lang.Override
  public void close() {
    _delegate.dispose();
  }

}
