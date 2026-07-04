/* Runtime dump - HMDConnectionProxy
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDConnectionProxy : NSObject <HMDaemonConnection>
{
    char _entitledForAPIAccess;
    char _entitledForSPIAccess;
    char _entitledForBackgroundMode;
    char _ready;
    char _activated;
    NSXPCConnection * _xpcConnection;
    HMDProcessInfo * _processInfo;
    NSString * _clientName;
    HMMessageDispatcher * _recvDispatcher;
    NSMutableSet * _pendingRequests;
    NSObject<OS_dispatch_queue> * _workQueue;
    NSObject<OS_dispatch_group> * _activeMessageTracker;
    unsigned int _activeMessageCount;
    NSDictionary * _privateAccessEntitlement;
    HMDApplicationRegistry * _appRegistry;
}

@property (readonly, nonatomic) NSString * name;
@property (readonly, nonatomic) int clientPid;
@property (readonly, nonatomic) id remoteProxy;
@property (weak, nonatomic) NSXPCConnection * xpcConnection;
@property (readonly, nonatomic) NSSet * activeRequests;
@property (weak, nonatomic) HMDProcessInfo * processInfo;
@property (readonly, nonatomic) char authorizedForHomeDataAccess;
@property (readonly, nonatomic) char entitledForAPIAccess;
@property (readonly, nonatomic) char entitledForSPIAccess;
@property (readonly, nonatomic) char authorizedForLocationAccess;
@property (readonly, nonatomic) char entitledForBackgroundMode;
@property (readonly, nonatomic) NSString * applicationBundleIdentifier;
@property (readonly, nonatomic) NSString * companionAppBundleIdentifier;
@property (readonly, nonatomic) NSString * teamIdentifier;
@property (readonly, nonatomic) NSString * effectiveLocationBundleIdentifier;
@property (retain, nonatomic) NSString * clientName;
@property (retain, nonatomic) HMMessageDispatcher * recvDispatcher;
@property (retain, nonatomic) NSMutableSet * pendingRequests;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * workQueue;
@property (nonatomic) char ready;
@property (nonatomic) char activated;
@property (retain, nonatomic) NSObject<OS_dispatch_group> * activeMessageTracker;
@property (nonatomic) unsigned int activeMessageCount;
@property (retain, nonatomic) NSDictionary * privateAccessEntitlement;
@property (weak, nonatomic) HMDApplicationRegistry * appRegistry;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (NSString *)description;
- (NSString *)name;
- (HMDProcessInfo *)processInfo;
- (void)deactivate;
- (void)activate;
- (char)activated;
- (void)setActivated:(char)arg0;
- (void).cxx_destruct;
- (NSObject<OS_dispatch_queue> *)workQueue;
- (NSMutableSet *)pendingRequests;
- (void)setWorkQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (HMDApplicationRegistry *)appRegistry;
- (char)isAuthorizedForLocationAccess;
- (char)isEntitledForSPIAccess;
- (void)checkinWithName:(NSString *)arg0 handleMessageWithName:(NSString *)arg1 messageIdentifier:(NSUUID *)arg2 messagePayload:(NSDictionary *)arg3 target:(NSUUID *)arg4 responseHandler:(NSObject<OS_xpc_object> *)arg5;
- (void)recheckinWithName:(NSString *)arg0;
- (void)handleMessageWithName:(NSString *)arg0 messageIdentifier:(NSUUID *)arg1 messagePayload:(NSDictionary *)arg2 target:(NSUUID *)arg3;
- (void)handleMessageWithName:(NSString *)arg0 messageIdentifier:(NSUUID *)arg1 messagePayload:(NSDictionary *)arg2 target:(NSUUID *)arg3 responseHandler:(NSObject<OS_xpc_object> *)arg4;
- (NSObject<OS_dispatch_group> *)activeMessageTracker;
- (HMMessageDispatcher *)recvDispatcher;
- (HMDConnectionProxy *)initWithConnection:(NSURLConnection *)arg0 queue:(NSObject *)arg1 activeMessageTracker:(NSObject<OS_dispatch_group> *)arg2 recvDispatcher:(HMMessageDispatcher *)arg3 appRegistry:(HMDApplicationRegistry *)arg4;
- (char)shouldSendResponseForMessageIdentifier:(NSString *)arg0;
- (NSObject *)remoteProxy;
- (NSSet *)activeRequests;
- (void)setAppRegistry:(HMDApplicationRegistry *)arg0;
- (void)setActiveMessageTracker:(NSObject<OS_dispatch_group> *)arg0;
- (void)setRecvDispatcher:(HMMessageDispatcher *)arg0;
- (unsigned int)activeMessageCount;
- (void)setActiveMessageCount:(unsigned int)arg0;
- (NSString *)_displayName;
- (int)clientPid;
- (NSString *)clientName;
- (NSString *)companionAppBundleIdentifier;
- (NSString *)teamIdentifier;
- (NSDictionary *)privateAccessEntitlement;
- (void)setClientName:(NSString *)arg0;
- (void)_notifyOfNewIncomingClientMessage;
- (void)setReady:(char)arg0;
- (char)isAuthorizedForHomeDataAccess;
- (NSString *)applicationBundleIdentifier;
- (NSString *)effectiveLocationBundleIdentifier;
- (NSString *)extractTeamIdentifier;
- (void)setProcessInfo:(HMDProcessInfo *)arg0;
- (char)isEntitledForAPIAccess;
- (char)isEntitledForBackgroundMode;
- (void)setPendingRequests:(NSMutableSet *)arg0;
- (char)ready;
- (void)setPrivateAccessEntitlement:(NSDictionary *)arg0;
- (NSXPCConnection *)xpcConnection;
- (void)setXpcConnection:(NSXPCConnection *)arg0;

@end
