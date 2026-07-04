/* Runtime dump - HMDNotificationRelay
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDNotificationRelay : NSObject <HMMessageReceiver>
{
    NSUUID * _uuid;
    NSObject<OS_dispatch_queue> * _workQueue;
    NSMutableDictionary * _pendingNotifications;
    HMDIDSMessageDispatcher * _msgDispatcher;
    HMMessageDispatcher * _notificationRelayDispatcher;
}

@property (retain, nonatomic) NSUUID * uuid;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * workQueue;
@property (retain, nonatomic) NSMutableDictionary * pendingNotifications;
@property (weak, nonatomic) HMDIDSMessageDispatcher * msgDispatcher;
@property (weak, nonatomic) HMMessageDispatcher * notificationRelayDispatcher;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) NSUUID * messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * messageReceiveQueue;

- (void)dealloc;
- (void).cxx_destruct;
- (NSUUID *)uuid;
- (NSObject<OS_dispatch_queue> *)workQueue;
- (void)setWorkQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (HMDIDSMessageDispatcher *)msgDispatcher;
- (void)setMsgDispatcher:(HMDIDSMessageDispatcher *)arg0;
- (NSUUID *)messageTargetUUID;
- (NSObject<OS_dispatch_queue> *)messageReceiveQueue;
- (void)setNotificationRelayDispatcher:(HMMessageDispatcher *)arg0;
- (HMMessageDispatcher *)notificationRelayDispatcher;
- (void)_registerForNotifications;
- (NSMutableDictionary *)pendingNotifications;
- (void)_handleNotification:(NSNotification *)arg0;
- (void)_relayResponseForNotificationState:(NSObject *)arg0;
- (HMDNotificationRelay *)initWithMessageDispatcher:(HMMessageDispatcher *)arg0 notificationRelayDispatcher:(HMMessageDispatcher *)arg1;
- (void)addPendingNotification:(NSNotification *)arg0 forDestination:(NSObject *)arg1 responseQueue:(NSObject<OS_dispatch_queue> *)arg2 responseHandler:(NSObject<OS_xpc_object> *)arg3;
- (void)removePendingNotification:(NSNotification *)arg0;
- (void)setPendingNotifications:(NSMutableDictionary *)arg0;
- (void)setUuid:(NSUUID *)arg0;

@end
