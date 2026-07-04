/* Runtime dump - GKDaemonProxy
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKDaemonProxy : NSObject <NSXPCConnectionDelegate, GKClientProtocol>
{
    int _hostPID;
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_semaphore> * _serviceSemaphore;
    NSDictionary * _serviceLookup;
    NSDictionary * _interfaceLookup;
    NSObject<OS_dispatch_queue> * _invocationQueue;
    NSObject<OS_dispatch_semaphore> * _concurrentRequestSemaphore;
    GKThreadsafeDictionary * _pendingRequests;
    <GKDaemonProxyDataUpdateDelegate> * _dataUpdateDelegate;
    <GKDaemonProxyNetworkActivityIndicatorDelegate> * _networkActivityIndicatorDelegate;
}

@property (nonatomic) <GKDaemonProxyDataUpdateDelegate> * dataUpdateDelegate;
@property (nonatomic) <GKDaemonProxyNetworkActivityIndicatorDelegate> * networkActivityIndicatorDelegate;
@property (nonatomic) NSXPCConnection * connection;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)gameServicePrivateProxy;
+ (NSObject *)gameStatServiceProxy;
+ (NSObject *)utilityServicePrivateProxy;
+ (NSObject *)profileServicePrivateProxy;
+ (NSObject *)friendServiceProxy;
+ (NSObject *)friendServicePrivateProxy;
+ (NSObject *)multiplayerServiceProxy;
+ (NSObject *)accountServiceProxy;
+ (NSObject *)analyticsServiceProxy;
+ (NSObject *)utilityServiceProxy;
+ (NSObject *)profileServiceProxy;
+ (NSObject *)turnBasedServiceProxy;
+ (NSObject *)turnBasedServicePrivateProxy;
+ (GKDaemonProxy *)daemonProxy;
+ (NSObject *)accountServicePrivateProxy;
+ (NSObject *)gameServiceProxy;
+ (NSObject *)gameStatServicePrivateProxy;
+ (NSObject *)challengeServiceProxy;
+ (NSObject *)challengeServicePrivateProxy;
+ (NSObject *)multiplayerServicePrivateProxy;
+ (NSObject *)bulletinServiceProxy;
+ (NSObject *)bulletinServicePrivateProxy;
+ (NSObject *)linkedAccountsServiceProxy;
+ (NSObject *)linkedAccountsServicePrivateProxy;
+ (NSObject *)analyticsServicePrivateProxy;

- (void)dealloc;
- (GKDaemonProxy *)init;
- (NSString *)methodSignatureForSelector:(SEL)arg0;
- (void)forwardInvocation:(NSInvocation *)arg0;
- (NSXPCConnection *)connection;
- (void)setConnection:(NSXPCConnection *)arg0;
- (void)connection:(NSXPCConnection *)arg0 handleInvocation:(NSInvocation *)arg1 isReply:(char)arg2;
- (void)setHostPID:(int)arg0;
- (NSString *)accountName;
- (void)refreshContentsForDataType:(SEL)arg0 userInfo:(unsigned int)arg1;
- (void)addInterface:(GKInterface *)arg0 toLookup:(BRCPathToItemLookup *)arg1;
- (void)_resetServiceLookup;
- (void)buildServiceLookup;
- (void)addService:(NSObject *)arg0 forProtocol:(NSObject *)arg1 toLookup:(BRCPathToItemLookup *)arg2;
- (void)resetServiceLookup;
- (void)buildInterfaceLookup;
- (void)getAuthenticatedPlayerIDWithHandler:(SEL)arg0;
- (void)getAccountNameWithHandler:(SEL)arg0;
- (void)beginNetworkActivity;
- (void)endNetworkActivity;
- (void)resetNetworkActivity;
- (void)receivedChallengeSelected:(SEL)arg0;
- (void)completedChallengeSelected:(SEL)arg0;
- (void)dispatchCompletedChallenge:(NSObject *)arg0;
- (void)challengeReceived:(SEL)arg0;
- (void)challengeCompleted:(SEL)arg0;
- (void)setBadgeCount:(SEL)arg0 forType:(unsigned int)arg1;
- (NSObject *)methodSignatureForProtocol:(NSObject *)arg0 selector:(SEL)arg1;
- (void)buildServiceLookupIfNeccessary;
- (NSString *)replyQueueForRequestSelector:(SEL)arg0;
- (void)_replyToDuplicatesForRequest:(NSURLRequest *)arg0 withInvocation:(NSObject *)arg1 queue:(NSObject *)arg2;
- (void)setPreferencesValues:(SEL)arg0;
- (void)setCurrentGame:(SEL)arg0 serverEnvironment:(int)arg1 reply:(int)arg2;
- (void)setLocalPlayer:(SEL)arg0 authenticated:(char)arg1 reply:(char)arg2;
- (void)respondedToNearbyInvite:(SEL)arg0;
- (void)scoreSelected:(SEL)arg0;
- (void)achievementSelected:(SEL)arg0;
- (void)setLogBits:(SEL)arg0;
- (NSObject *)authenticatedPlayerID;
- (void)getAccountURLsWithHandler:(id /* block */)arg0;
- (char)hasAuthenticatedAccount;
- (NSDictionary *)authenticatedPlayerInfo;
- (<GKDaemonProxyNetworkActivityIndicatorDelegate> *)networkActivityIndicatorDelegate;
- (void)setNetworkActivityIndicatorDelegate:(<GKDaemonProxyNetworkActivityIndicatorDelegate> *)arg0;
- (<GKDaemonProxyDataUpdateDelegate> *)dataUpdateDelegate;
- (void)setDataUpdateDelegate:(<GKDaemonProxyDataUpdateDelegate> *)arg0;

@end
