/* Runtime dump - HMDXpcServer
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDXpcServer : HMMessageDispatcher <NSXPCListenerDelegate, HMMessageReceiver, HMDApplicationMonitorDelegate>
{
    HMDApplicationRegistry * _appRegistry;
    NSObject<OS_dispatch_queue> * _xpcWorkQueue;
    NSUUID * _uuid;
    NSXPCListener * _xpcListener;
    NSMutableSet * _xpcClients;
    HMDApplicationMonitor * _appMonitor;
    NSObject<OS_dispatch_group> * _activeMessageTracker;
    HMDIDSMessageDispatcher * _recvDispatcher;
    HMMessageDispatcher * _notificationRelayDispatcher;
    HMDBackgroundAppMessageFilter * _backgroundAppMsgFilter;
}

@property (retain, nonatomic) HMDApplicationRegistry * appRegistry;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * xpcWorkQueue;
@property (retain, nonatomic) NSUUID * uuid;
@property (retain, nonatomic) NSXPCListener * xpcListener;
@property (retain, nonatomic) NSMutableSet * xpcClients;
@property (weak, nonatomic) HMDApplicationMonitor * appMonitor;
@property (retain, nonatomic) NSObject<OS_dispatch_group> * activeMessageTracker;
@property (retain, nonatomic) HMDIDSMessageDispatcher * recvDispatcher;
@property (retain, nonatomic) HMMessageDispatcher * notificationRelayDispatcher;
@property (retain, nonatomic) HMDBackgroundAppMessageFilter * backgroundAppMsgFilter;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) NSUUID * messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * messageReceiveQueue;

- (void)reset;
- (char)stop;
- (char)start;
- (void).cxx_destruct;
- (NSUUID *)uuid;
- (char)listener:(NSXPCListener *)arg0 shouldAcceptNewConnection:(NSXPCConnection *)arg1;
- (NSXPCListener *)xpcListener;
- (void)setXpcListener:(NSXPCListener *)arg0;
- (void)deregisterReceiver:(NSObject *)arg0;
- (void)sendMessage:(NSString *)arg0 target:(NSObject *)arg1;
- (void)_registerForMessages;
- (void)sendMessage:(NSString *)arg0 target:(NSObject *)arg1 andInvokeCompletionHandler:(id /* block */)arg2;
- (void)registerForMessage:(NSString *)arg0 receiver:(NSObject *)arg1 messageHandler:(NSObject<MBConnectionHandler> *)arg2;
- (NSUUID *)messageTargetUUID;
- (NSObject<OS_dispatch_queue> *)messageReceiveQueue;
- (void)setNotificationRelayDispatcher:(HMMessageDispatcher *)arg0;
- (HMMessageDispatcher *)notificationRelayDispatcher;
- (HMDXpcServer *)initWithQueue:(NSObject<OS_dispatch_queue> *)arg0 receiveDispatcher:(id)arg1 notificationRelayDispatcher:(HMMessageDispatcher *)arg2 messageFilterChain:(HMDMessageFilterChain *)arg3 registerAsMachService:(char)arg4;
- (HMDApplicationRegistry *)appRegistry;
- (void)sendMessage:(NSString *)arg0 target:(NSObject *)arg1 completionQueue:(NSObject<OS_dispatch_queue> *)arg2 deliveryCompletionHandler:(id /* block */)arg3;
- (void)dispatchMessage:(NSString *)arg0 target:(NSObject *)arg1;
- (HMDApplicationMonitor *)appMonitor;
- (NSMutableSet *)xpcClients;
- (NSObject<OS_dispatch_queue> *)xpcWorkQueue;
- (NSObject<OS_dispatch_group> *)activeMessageTracker;
- (HMDIDSMessageDispatcher *)recvDispatcher;
- (HMDBackgroundAppMessageFilter *)backgroundAppMsgFilter;
- (void)_sendMessage:(NSString *)arg0 target:(NSObject *)arg1 andInvokeCompletionHandler:(id /* block */)arg2 withDeliveryCompletion:(/* block */ id)arg3;
- (void)deregisterForMessage:(NSString *)arg0 receiver:(NSObject *)arg1;
- (void)_handleSuspendXPCConnectionRequest:(NSURLRequest *)arg0;
- (void)_handleResumeXPCConnectionRequest:(NSURLRequest *)arg0;
- (void)applicationMonitorDidChangeActiveHomeKitAppStatus:(char)arg0;
- (void)applicationMonitorDidChangeAppState:(HMDProcessInfo *)arg0;
- (struct CGPoint)endPoint;
- (void)sendMessage:(NSString *)arg0 target:(NSObject *)arg1 responseQueue:(NSObject<OS_dispatch_queue> *)arg2 responseHandler:(NSObject<OS_xpc_object> *)arg3;
- (void)setAppRegistry:(HMDApplicationRegistry *)arg0;
- (void)setXpcWorkQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)setXpcClients:(NSMutableSet *)arg0;
- (void)setAppMonitor:(HMDApplicationMonitor *)arg0;
- (void)setActiveMessageTracker:(NSObject<OS_dispatch_group> *)arg0;
- (void)setRecvDispatcher:(HMDIDSMessageDispatcher *)arg0;
- (void)setBackgroundAppMsgFilter:(HMDBackgroundAppMessageFilter *)arg0;
- (void)setUuid:(NSUUID *)arg0;

@end
