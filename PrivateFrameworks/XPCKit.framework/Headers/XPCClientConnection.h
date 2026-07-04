/* Runtime dump - XPCClientConnection
 * Image: /System/Library/PrivateFrameworks/XPCKit.framework/XPCKit
 */

@interface XPCClientConnection : NSObject
{
    NSString * _serviceName;
    NSObject<OS_xpc_object> * _connection;
    NSObject<OS_dispatch_queue> * _queue;
    <XPCClientConnectionDelegate> * _delegate;
}

@property (readonly, nonatomic) <XPCClientConnectionDelegate> * delegate;

- (NSString *)debugDescription;
- (<XPCClientConnectionDelegate> *)delegate;
- (void).cxx_destruct;
- (void)shutDownCompletionBlock:(id /* block */)arg0;
- (XPCClientConnection *)initWithServiceName:(NSString *)arg0 delegate:(<XPCClientConnectionDelegate> *)arg1;
- (void)_handleIncomingMessage:(NSString *)arg0;
- (void)_handleConnectionEvent:(NSObject *)arg0;
- (void)_reallySendMessage:(NSString *)arg0 handler:(id /* block */)arg1 sequence:(/* block */ id)arg2 retryCount:(unsigned long)arg3;
- (void)sendMessage:(NSString *)arg0 withHandler:(id /* block */)arg1;

@end
