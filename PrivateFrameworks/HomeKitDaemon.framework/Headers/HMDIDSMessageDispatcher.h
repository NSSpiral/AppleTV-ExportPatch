/* Runtime dump - HMDIDSMessageDispatcher
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDIDSMessageDispatcher : HMMessageDispatcher
{
    HMMessageDispatcher * _recvDispatcher;
    NSMutableDictionary * _remoteGateways;
    HMDMessageFilterChain * _msgFilterChain;
    HMDAdminEnforcementMessageFilter * _adminMsgFilter;
    NSMutableDictionary * _activeClientSecureSessions;
    NSMutableDictionary * _activeServerSecureSessions;
    HMDIdentityRegistry * _identityRegistry;
    HMDNotificationRelay * _notificationRelay;
    HMMessageDispatcher * _notificationDispatcher;
    HMDIDSMessageTransport * _idsProxyTransport;
    HMDHomeManager * _homeManager;
    NSMutableDictionary * _currentHomeConfigurations;
    HMDSecureSessionNotifications * _sessionNotifications;
}

@property (readonly, nonatomic) char accountActive;
@property (readonly, nonatomic) NSArray * residentDevices;
@property (readonly, nonatomic) NSArray * transientDevices;
@property (readonly, nonatomic) NSArray * pairedWatchDevices;
@property (readonly, nonatomic) NSArray * reachableCompanionDevices;
@property (readonly, nonatomic) NSArray * reachableWatchDevices;
@property (retain, nonatomic) HMMessageDispatcher * recvDispatcher;
@property (retain, nonatomic) NSMutableDictionary * remoteGateways;
@property (retain, nonatomic) HMDMessageFilterChain * msgFilterChain;
@property (retain, nonatomic) HMDAdminEnforcementMessageFilter * adminMsgFilter;
@property (retain, nonatomic) NSMutableDictionary * activeClientSecureSessions;
@property (retain, nonatomic) NSMutableDictionary * activeServerSecureSessions;
@property (retain, nonatomic) HMDIdentityRegistry * identityRegistry;
@property (retain, nonatomic) HMDNotificationRelay * notificationRelay;
@property (retain, nonatomic) HMMessageDispatcher * notificationDispatcher;
@property (weak, nonatomic) HMDIDSMessageTransport * idsProxyTransport;
@property (weak, nonatomic) HMDHomeManager * homeManager;
@property (retain, nonatomic) NSMutableDictionary * currentHomeConfigurations;
@property (retain, nonatomic) HMDSecureSessionNotifications * sessionNotifications;

+ (char)isWhitelistedLocalMessage:(NSString *)arg0;

- (void).cxx_destruct;
- (HMDHomeManager *)homeManager;
- (void)deregisterReceiver:(NSObject *)arg0;
- (void)sendMessage:(NSString *)arg0 target:(NSObject *)arg1;
- (void)sendMessage:(NSString *)arg0 target:(NSObject *)arg1 andInvokeCompletionHandler:(id /* block */)arg2;
- (void)registerForMessage:(NSString *)arg0 receiver:(NSObject *)arg1 messageHandler:(NSObject<MBConnectionHandler> *)arg2;
- (void)setMsgFilterChain:(HMDMessageFilterChain *)arg0;
- (void)setIdentityRegistry:(HMDIdentityRegistry *)arg0;
- (void)setIdsProxyTransport:(HMDIDSMessageTransport *)arg0;
- (HMDIDSMessageTransport *)idsProxyTransport;
- (HMDMessageFilterChain *)msgFilterChain;
- (HMDIdentityRegistry *)identityRegistry;
- (HMDIDSMessageDispatcher *)initWithIDSTransport:(id)arg0 idsProxyTransport:(HMDIDSMessageTransport *)arg1 messageFilterChain:(HMDMessageFilterChain *)arg2 identityRegistry:(HMDIdentityRegistry *)arg3 notificationRelayDispatcher:(HMMessageDispatcher *)arg4;
- (void)configureNotificationDispatcher:(id)arg0;
- (void)setHomeManager:(HMDHomeManager *)arg0;
- (void)configureHomeManager:(NSObject *)arg0;
- (NSArray *)residentDevices;
- (void)sendSecureMessage:(NSString *)arg0 target:(NSObject *)arg1 userID:(NSObject *)arg2 destination:(NSObject *)arg3 responseQueue:(NSObject<OS_dispatch_queue> *)arg4 responseHandler:(NSObject<OS_xpc_object> *)arg5;
- (void)sendMessage:(NSString *)arg0 target:(NSObject *)arg1 completionQueue:(NSObject<OS_dispatch_queue> *)arg2 deliveryCompletionHandler:(id /* block */)arg3;
- (void)dispatchMessage:(NSString *)arg0 target:(NSObject *)arg1;
- (void)sendMessage:(NSString *)arg0 target:(NSObject *)arg1 destination:(NSObject *)arg2 responseQueue:(NSObject<OS_dispatch_queue> *)arg3 responseHandler:(NSObject<OS_xpc_object> *)arg4;
- (void)electDeviceForUser:(id)arg0 destination:(NSObject *)arg1 deviceCapabilities:(NSArray *)arg2 responseTimeout:(double)arg3 responseQueue:(NSObject<OS_dispatch_queue> *)arg4 responseHandler:(NSObject<OS_xpc_object> *)arg5;
- (HMMessageDispatcher *)recvDispatcher;
- (void)deregisterForMessage:(NSString *)arg0 receiver:(NSObject *)arg1;
- (void)sendMessage:(NSString *)arg0 target:(NSObject *)arg1 responseQueue:(NSObject<OS_dispatch_queue> *)arg2 responseHandler:(NSObject<OS_xpc_object> *)arg3;
- (void)setRecvDispatcher:(HMMessageDispatcher *)arg0;
- (HMDNotificationRelay *)notificationRelay;
- (HMDSecureSessionNotifications *)sessionNotifications;
- (void)sendMessage:(NSString *)arg0 target:(NSObject *)arg1 destination:(NSObject *)arg2;
- (void)setNotificationRelay:(HMDNotificationRelay *)arg0;
- (void)setSessionNotifications:(HMDSecureSessionNotifications *)arg0;
- (char)isAccountActive;
- (NSArray *)transientDevices;
- (NSMutableDictionary *)currentHomeConfigurations;
- (HMDAdminEnforcementMessageFilter *)adminMsgFilter;
- (NSMutableDictionary *)remoteGateways;
- (NSArray *)_pairedWatchDevices;
- (NSArray *)pairedWatchDevices;
- (id)_pairedCompanionDevices;
- (NSArray *)_reachableCompanionDevices;
- (NSArray *)reachableCompanionDevices;
- (NSArray *)_reachableWatchDevices;
- (NSArray *)reachableWatchDevices;
- (void)sendMessage:(NSString *)arg0 target:(NSObject *)arg1 destination:(NSObject *)arg2 responseTimeout:(double)arg3 responseQueue:(NSObject<OS_dispatch_queue> *)arg4 responseHandler:(NSObject<OS_xpc_object> *)arg5;
- (void)_sendMessage:(NSString *)arg0 target:(NSObject *)arg1 destination:(NSObject *)arg2 responseTimeout:(double)arg3 responseQueue:(NSObject<OS_dispatch_queue> *)arg4 responseHandler:(NSObject<OS_xpc_object> *)arg5;
- (char)_watchCompanionCommunication:(id)arg0;
- (void)_sendSecureMessage:(NSString *)arg0 target:(NSObject *)arg1 destination:(NSObject *)arg2 responseQueue:(NSObject<OS_dispatch_queue> *)arg3 responseHandler:(NSObject<OS_xpc_object> *)arg4;
- (void)_setRemoteAccessPeer:(NSObject *)arg0 forHome:(HMHome *)arg1 sendNotification:(char)arg2;
- (void)setNotificationDispatcher:(HMMessageDispatcher *)arg0;
- (void)_handleElectDeviceForUserResponse:(NSURLResponse *)arg0 error:(NSError *)arg1 responseQueue:(NSObject<OS_dispatch_queue> *)arg2 completion:(id /* block */)arg3;
- (NSMutableDictionary *)activeClientSecureSessions;
- (char)_checkTransportProtocol;
- (char)_checkAuthorizationForMessage:(NSString *)arg0 errorReason:(id *)arg1;
- (char)_handleInternalIDSMessage:(NSString *)arg0 fromID:(NSString *)arg1;
- (char)_haveAllCapabilities:(id)arg0;
- (id)prepareAnswerForRequestedCapabilities:(id)arg0;
- (void)_handleSecureClientMessage:(NSString *)arg0 fromID:(NSString *)arg1;
- (void)_handleSecureServerMessage:(NSString *)arg0 fromID:(NSString *)arg1;
- (void)_handleElectDeviceForIDSSession:(NSObject *)arg0;
- (NSMutableDictionary *)activeServerSecureSessions;
- (void)updateHome:(id)arg0 configurationVersion:(int)arg1;
- (void)removeHome:(HMHome *)arg0;
- (void)updateLocalAdministratorName;
- (void)redispatchMessage:(NSString *)arg0 target:(NSObject *)arg1 responseQueue:(NSObject<OS_dispatch_queue> *)arg2 toResidentForHomeWithUUID:(id)arg3;
- (id)pairedCompanionDevices;
- (void)setRemoteAccessPeer:(NSObject *)arg0 forHome:(HMHome *)arg1;
- (void)disableRemoteSessionForAddresses:(id)arg0;
- (void)setRemoteGateways:(NSMutableDictionary *)arg0;
- (void)setAdminMsgFilter:(HMDAdminEnforcementMessageFilter *)arg0;
- (void)setActiveClientSecureSessions:(NSMutableDictionary *)arg0;
- (void)setActiveServerSecureSessions:(NSMutableDictionary *)arg0;
- (HMMessageDispatcher *)notificationDispatcher;
- (void)setCurrentHomeConfigurations:(NSMutableDictionary *)arg0;

@end
