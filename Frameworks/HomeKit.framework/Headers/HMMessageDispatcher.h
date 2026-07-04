/* Runtime dump - HMMessageDispatcher
 * Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMMessageDispatcher : NSObject
{
    char _remoteSource;
    <HMMessageTransport> * _transport;
    NSObject<OS_dispatch_queue> * _workQueue;
    NSMutableDictionary * _notificationHandlers;
}

@property (weak, nonatomic) <HMMessageTransport> * transport;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * workQueue;
@property (retain, nonatomic) NSMutableDictionary * notificationHandlers;
@property (nonatomic) char remoteSource;

- (void).cxx_destruct;
- (NSObject<OS_dispatch_queue> *)workQueue;
- (void)setWorkQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)deregisterReceiver:(NSObject *)arg0;
- (void)sendMessage:(NSString *)arg0 target:(NSObject *)arg1;
- (void)sendMessage:(NSString *)arg0 target:(NSObject *)arg1 andInvokeCompletionHandler:(id /* block */)arg2;
- (void)registerForMessage:(NSString *)arg0 receiver:(NSObject *)arg1 messageHandler:(NSObject<MBConnectionHandler> *)arg2;
- (HMMessageDispatcher *)initWithTransport:(<HMMessageTransport> *)arg0;
- (char)isRemoteSource;
- (<HMMessageTransport> *)transport;
- (void)sendMessage:(NSString *)arg0 target:(NSObject *)arg1 completionQueue:(NSObject<OS_dispatch_queue> *)arg2 deliveryCompletionHandler:(id /* block */)arg3;
- (void)dispatchMessage:(NSString *)arg0 target:(NSObject *)arg1;
- (void)deregisterForMessage:(NSString *)arg0 receiver:(NSObject *)arg1;
- (void)sendMessage:(NSString *)arg0 target:(NSObject *)arg1 responseQueue:(NSObject<OS_dispatch_queue> *)arg2 responseHandler:(NSObject<OS_xpc_object> *)arg3;
- (void)_sendMessage:(NSString *)arg0 target:(NSObject *)arg1 responseQueue:(NSObject<OS_dispatch_queue> *)arg2 responseHandler:(NSObject<OS_xpc_object> *)arg3;
- (NSMutableDictionary *)notificationHandlers;
- (void)_deregisterForMessage:(NSString *)arg0 receiver:(NSObject *)arg1 token:(NSString *)arg2;
- (void)setTransport:(<HMMessageTransport> *)arg0;
- (void)setNotificationHandlers:(NSMutableDictionary *)arg0;
- (void)setRemoteSource:(char)arg0;

@end
