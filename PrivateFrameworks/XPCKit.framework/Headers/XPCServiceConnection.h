/* Runtime dump - XPCServiceConnection
 * Image: /System/Library/PrivateFrameworks/XPCKit.framework/XPCKit
 */

@interface XPCServiceConnection : NSObject
{
    NSString * _serviceName;
    <XPCServiceConnectionDelegate> * _delegate;
    NSObject<OS_xpc_object> * _client;
    <NSObject> * _context;
    XPCServiceListener * _serviceListener;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, retain, nonatomic) NSString * serviceName;
@property (weak, nonatomic) <XPCServiceConnectionDelegate> * delegate;
@property (retain, nonatomic) <NSObject> * context;
@property (readonly, nonatomic) NSObject<OS_xpc_object> * client;
@property (weak, nonatomic) XPCServiceListener * serviceListener;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * workQueue;

- (void)setDelegate:(<XPCServiceConnectionDelegate> *)arg0;
- (NSString *)debugDescription;
- (<XPCServiceConnectionDelegate> *)delegate;
- (<NSObject> *)context;
- (void)setContext:(<NSObject> *)arg0;
- (void)resume;
- (void).cxx_destruct;
- (XPCServiceListener *)serviceListener;
- (NSObject<OS_dispatch_queue> *)workQueue;
- (NSString *)serviceName;
- (void)setWorkQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)shutDownCompletionBlock:(id /* block */)arg0;
- (void)setServiceListener:(XPCServiceListener *)arg0;
- (NSObject<OS_xpc_object> *)client;
- (void)sendMessage:(NSString *)arg0 withHandler:(id /* block */)arg1;
- (void)workQueueHandleIncomingMessage:(NSString *)arg0;
- (void)workQueueShutDown;
- (XPCServiceConnection *)initWithServiceName:(NSString *)arg0 client:(NSObject<OS_xpc_object> *)arg1 queue:(NSObject *)arg2;

@end
