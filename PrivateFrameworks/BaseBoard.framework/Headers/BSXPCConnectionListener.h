/* Runtime dump - BSXPCConnectionListener
 * Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSXPCConnectionListener : NSObject
{
    NSObject<OS_xpc_object> * _connection;
    <BSXPCConnectionListenerHandler> * _handler;
    NSString * _service;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, retain) <BSXPCConnectionListenerHandler> * handler;
@property (readonly, copy) NSString * service;
@property (readonly) NSObject<OS_dispatch_queue> * queue;

- (void)dealloc;
- (NSString *)description;
- (void)invalidate;
- (<BSXPCConnectionListenerHandler> *)handler;
- (BSXPCConnectionListener *)initWithConnection:(NSObject<OS_xpc_object> *)arg0 forService:(struct __SCNetworkService *)arg1 withHandler:(<BSXPCConnectionListenerHandler> *)arg2 onQueue:(/* block */ id)arg3;
- (NSObject<OS_dispatch_queue> *)queue;
- (NSString *)service;

@end
