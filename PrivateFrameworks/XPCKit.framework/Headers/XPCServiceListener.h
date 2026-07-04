/* Runtime dump - XPCServiceListener
 * Image: /System/Library/PrivateFrameworks/XPCKit.framework/XPCKit
 */

@interface XPCServiceListener : NSObject
{
    NSString * _serviceName;
    <XPCServiceListenerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _workQueue;
    NSObject<OS_xpc_object> * _listener;
    NSMutableSet * _serviceConnections;
    unsigned long _clientCount;
}

@property (readonly, retain, nonatomic) NSString * serviceName;
@property (readonly, nonatomic) <XPCServiceListenerDelegate> * delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * workQueue;
@property (retain, nonatomic) NSObject<OS_xpc_object> * listener;
@property (retain, nonatomic) NSMutableSet * serviceConnections;
@property (nonatomic) unsigned long clientCount;

- (NSString *)debugDescription;
- (<XPCServiceListenerDelegate> *)delegate;
- (void)start;
- (void).cxx_destruct;
- (NSObject<OS_xpc_object> *)listener;
- (void)setListener:(NSObject<OS_xpc_object> *)arg0;
- (NSObject<OS_dispatch_queue> *)workQueue;
- (NSString *)serviceName;
- (void)setWorkQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)shutDownCompletionBlock:(id /* block */)arg0;
- (void)serviceConnectionDidDisconnect:(id)arg0;
- (void)workQueueHandleIncomingConnection:(NSURLConnection *)arg0;
- (void)_workQueueShutDownServiceConnections:(NSArray *)arg0 index:(unsigned int)arg1 completionBlock:(id /* block */)arg2;
- (XPCServiceListener *)initWithServiceName:(NSString *)arg0 queue:(NSObject *)arg1 delegate:(<XPCServiceListenerDelegate> *)arg2;
- (NSMutableSet *)serviceConnections;
- (void)setServiceConnections:(NSMutableSet *)arg0;
- (unsigned long)clientCount;
- (void)setClientCount:(unsigned long)arg0;

@end
