/* Runtime dump - SSEventMonitor
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSEventMonitor : NSObject
{
    <SSEventMonitorDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    SSXPCConnection * _eventConnection;
}

@property <SSEventMonitorDelegate> * delegate;

- (void)dealloc;
- (void)setDelegate:(<SSEventMonitorDelegate> *)arg0;
- (SSEventMonitor *)init;
- (<SSEventMonitorDelegate> *)delegate;
- (void)_handleMessage:(NSString *)arg0 fromServerConnection:(NSURLConnection *)arg1;
- (void)_connectEventConnection;

@end
