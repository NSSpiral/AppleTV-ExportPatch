/* Runtime dump - DMXPCConnection
 * Image: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
 */

@interface DMXPCConnection : NSObject
{
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_xpc_object> * _connection;
    NSObject<OS_dispatch_queue> * _replyQueue;
    id _interruptionHandler;
    id _invalidationHandler;
}

@property (readonly, nonatomic) NSObject<OS_xpc_object> * connection;
@property (copy) id interruptionHandler;
@property (copy) id invalidationHandler;

- (void)handleMessage:(NSString *)arg0;
- (id /* block */)interruptionHandler;
- (id /* block */)invalidationHandler;
- (void)invalidate;
- (void)resume;
- (void).cxx_destruct;
- (NSObject<OS_xpc_object> *)connection;
- (DMXPCConnection *)initWithServiceName:(NSString *)arg0;
- (void)setInvalidationHandler:(id /* block */)arg0;
- (void)setInterruptionHandler:(id /* block */)arg0;
- (void)sendMessage:(NSString *)arg0 replyHandler:(id /* block */)arg1;
- (DMXPCConnection *)initWithConnection:(NSObject<OS_xpc_object> *)arg0;
- (void)_handleMessage:(NSString *)arg0;

@end
