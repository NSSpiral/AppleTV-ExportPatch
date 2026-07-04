/* Runtime dump - CKDPushConnection
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPushConnection : NSObject <APSConnectionDelegate>
{
    char _darkWakeEnabled;
    NSString * _apsEnvironmentString;
    APSConnection * _apsConnection;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _tokensCache;
    NSMapTable * _callbacks;
    NSMutableSet * _enabledTopics;
    NSMutableDictionary * _topicsToWaitingAppContainerTuples;
    NSMutableSet * _topicsAwaitingPublicToken;
    NSMutableSet * _topicsAwaitingPrivateToken;
}

@property (retain, nonatomic) NSString * apsEnvironmentString;
@property (retain, nonatomic) APSConnection * apsConnection;
@property (nonatomic) char darkWakeEnabled;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * queue;
@property (retain, nonatomic) NSMutableDictionary * tokensCache;
@property (retain, nonatomic) NSMapTable * callbacks;
@property (retain, nonatomic) NSMutableSet * enabledTopics;
@property (retain, nonatomic) NSMutableDictionary * topicsToWaitingAppContainerTuples;
@property (retain, nonatomic) NSMutableSet * topicsAwaitingPublicToken;
@property (retain, nonatomic) NSMutableSet * topicsAwaitingPrivateToken;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (CKDPushConnection *)sharedConnectionForAPSEnvironmentString:(NSString *)arg0 darkWakeEnabled:(char)arg1;

- (void)dealloc;
- (void).cxx_destruct;
- (NSObject<OS_dispatch_queue> *)queue;
- (void)connection:(NSURLConnection *)arg0 didReceivePublicToken:(NSString *)arg1;
- (void)connection:(NSURLConnection *)arg0 didReceiveToken:(NSString *)arg1 forTopic:(VCSessionMessageTopic *)arg2 identifier:(NSString *)arg3;
- (void)connection:(NSURLConnection *)arg0 didChangeConnectedStatus:(char)arg1;
- (void)connectionDidReconnect:(id)arg0;
- (void)setQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (NSString *)apsEnvironmentString;
- (void)setAPSEnvironmentString:(NSString *)arg0;
- (void)setDarkWakeEnabled:(char)arg0;
- (char)darkWakeEnabled;
- (CKDPushConnection *)initWithEnvironment:(NSDictionary *)arg0 darkWakeEnabled:(char)arg1;
- (NSMutableDictionary *)topicsToWaitingAppContainerTuples;
- (void)_addWaitingAppContainerTuple:(id)arg0 forTopic:(VCSessionMessageTopic *)arg1;
- (APSConnection *)apsConnection;
- (NSMutableSet *)enabledTopics;
- (void)setEnabledTopics:(NSMutableSet *)arg0;
- (NSMutableDictionary *)tokensCache;
- (NSMutableSet *)topicsAwaitingPrivateToken;
- (NSMutableSet *)topicsAwaitingPublicToken;
- (id)_waitingAppContainerTuplesForTopic:(id)arg0;
- (void)_removeWaitingAppContainerTuplesForTopic:(id)arg0;
- (void)requestTokenForAppContainerTuple:(id)arg0 useAPSPublicToken:(char)arg1;
- (void)revokeTokenForAppContainerTuple:(id)arg0;
- (void)setApsConnection:(APSConnection *)arg0;
- (void)setTokensCache:(NSMutableDictionary *)arg0;
- (NSMapTable *)callbacks;
- (void)setCallbacks:(NSMapTable *)arg0;
- (void)setTopicsToWaitingAppContainerTuples:(NSMutableDictionary *)arg0;
- (void)setTopicsAwaitingPublicToken:(NSMutableSet *)arg0;
- (void)setTopicsAwaitingPrivateToken:(NSMutableSet *)arg0;

@end
