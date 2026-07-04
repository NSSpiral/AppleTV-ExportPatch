/* Runtime dump - AITXPCConnection
 * Image: /System/Library/PrivateFrameworks/AITTarget.framework/AITTarget
 */

@interface AITXPCConnection : NSObject
{
    int _pid;
    <AITXPCConnectionDelegate> * _delegate;
    NSString * _bundleId;
    NSObject<OS_xpc_object> * _connection;
    NSObject<OS_xpc_object> * _currentMessage;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSObject<OS_dispatch_queue> * _internalQueue;
}

@property (nonatomic) <AITXPCConnectionDelegate> * delegate;
@property (readonly, nonatomic) char available;
@property (copy, nonatomic) NSString * bundleId;
@property (readonly, nonatomic) int pid;
@property (nonatomic) NSObject<OS_xpc_object> * connection;
@property (nonatomic) NSObject<OS_xpc_object> * currentMessage;
@property (nonatomic) NSObject<OS_dispatch_queue> * dispatchQueue;
@property (nonatomic) NSObject<OS_dispatch_queue> * internalQueue;

- (NSString *)bundleId;
- (void)dealloc;
- (void)setDelegate:(<AITXPCConnectionDelegate> *)arg0;
- (<AITXPCConnectionDelegate> *)delegate;
- (NSObject<OS_xpc_object> *)connection;
- (void)setConnection:(NSObject<OS_xpc_object> *)arg0;
- (void)sendMessage:(NSString *)arg0 userInfo:(NSDictionary *)arg1;
- (AITXPCConnection *)initWithConnection:(NSObject<OS_xpc_object> *)arg0 delegate:(<AITXPCConnectionDelegate> *)arg1 dispatchQueue:(NSObject<OS_dispatch_queue> *)arg2;
- (void)barrierWithCompletionHandler:(id /* block */)arg0;
- (void)_handleEvent:(NSObject *)arg0;
- (NSString *)_deserializeMessage:(NSString *)arg0;
- (void)sendMessage:(NSString *)arg0 userInfo:(NSDictionary *)arg1 replyHandler:(id /* block */)arg2;
- (void)setCurrentMessage:(NSObject<OS_xpc_object> *)arg0;
- (int)pid;
- (NSObject<OS_dispatch_queue> *)dispatchQueue;
- (void)setDispatchQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (NSObject<OS_xpc_object> *)currentMessage;
- (AITXPCConnection *)initWithConnection:(NSObject<OS_xpc_object> *)arg0 delegate:(<AITXPCConnectionDelegate> *)arg1;
- (char)available;
- (void)closeConnection;
- (void)setBundleId:(NSString *)arg0;
- (NSObject<OS_dispatch_queue> *)internalQueue;
- (void)setInternalQueue:(NSObject<OS_dispatch_queue> *)arg0;

@end
