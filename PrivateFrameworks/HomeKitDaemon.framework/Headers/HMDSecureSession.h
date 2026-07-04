/* Runtime dump - HMDSecureSession
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDSecureSession : NSObject
{
    char _clientMode;
    NSUUID * _sessionID;
    NSObject<OS_dispatch_queue> * _workQueue;
    NSString * _destination;
    HMDUser * _peer;
    HMDIDSMessageDispatcher * _msgDispatcher;
    HAPRemoteSession * _hapRemoteSession;
    HMDIdentityRegistry * _identityRegistry;
    id _stoppedNotificationHandler;
    HMDNotificationRelay * _notificationRelay;
    HMDSecureSessionNotifications * _sessionNotifications;
    HMDAWDRemoteSessionMetric * _metric;
}

@property (copy, nonatomic) id sessionStoppedNotificationHandler;
@property (readonly, copy, nonatomic) NSUUID * sessionID;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * workQueue;
@property (copy, nonatomic) NSString * destination;
@property (retain, nonatomic) HMDUser * peer;
@property (retain, nonatomic) HMDIDSMessageDispatcher * msgDispatcher;
@property (retain, nonatomic) HAPRemoteSession * hapRemoteSession;
@property (retain, nonatomic) HMDIdentityRegistry * identityRegistry;
@property (copy, nonatomic) id stoppedNotificationHandler;
@property (retain, nonatomic) HMDNotificationRelay * notificationRelay;
@property (nonatomic) char clientMode;
@property (retain, nonatomic) HMDSecureSessionNotifications * sessionNotifications;
@property (readonly, nonatomic) HMDAWDRemoteSessionMetric * metric;

+ (HMDSecureSession *)whitelistedRemoteAccessCommands;

- (HMDUser *)peer;
- (void)setPeer:(HMDUser *)arg0;
- (void)stop;
- (NSString *)destination;
- (void)setDestination:(NSString *)arg0;
- (void).cxx_destruct;
- (NSObject<OS_dispatch_queue> *)workQueue;
- (void)setWorkQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (NSUUID *)sessionID;
- (HMDIDSMessageDispatcher *)msgDispatcher;
- (void)setMsgDispatcher:(HMDIDSMessageDispatcher *)arg0;
- (void)setIdentityRegistry:(HMDIdentityRegistry *)arg0;
- (HMDIdentityRegistry *)identityRegistry;
- (void)sendMessage:(NSString *)arg0 target:(NSObject *)arg1 responseQueue:(NSObject<OS_dispatch_queue> *)arg2 responseHandler:(NSObject<OS_xpc_object> *)arg3;
- (HMDAWDRemoteSessionMetric *)metric;
- (char)clientMode;
- (void)_configureAsClient:(char)arg0 queue:(NSObject *)arg1 nonSecure:(char)arg2 completionHandler:(id /* block */)arg3;
- (void)setHapRemoteSession:(HAPRemoteSession *)arg0;
- (HAPRemoteSession *)hapRemoteSession;
- (id /* block */)stoppedNotificationHandler;
- (HMDNotificationRelay *)notificationRelay;
- (HMDSecureSessionNotifications *)sessionNotifications;
- (void)setStoppedNotificationHandler:(id /* block */)arg0;
- (HMDSecureSession *)initWithDestination:(NSString *)arg0 messageDispatcher:(HMDIDSMessageDispatcher *)arg1 sessionNotifications:(HMDSecureSessionNotifications *)arg2 identityRegistry:(HMDIdentityRegistry *)arg3 notificationRelay:(HMDNotificationRelay *)arg4 clientMode:(char)arg5 sessionID:(NSUUID *)arg6;
- (void)startAndInvokeOnQueue:(NSObject *)arg0 nonSecure:(char)arg1 completionHandler:(id /* block */)arg2;
- (void)setSessionStoppedNotificationHandler:(id /* block */)arg0;
- (id /* block */)sessionStoppedNotificationHandler;
- (void)handleSecureMessage:(NSString *)arg0;
- (void)setNotificationRelay:(HMDNotificationRelay *)arg0;
- (void)setClientMode:(char)arg0;
- (void)setSessionNotifications:(HMDSecureSessionNotifications *)arg0;

@end
