/* Runtime dump - APSConnection
 * Image: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
 */

@interface APSConnection : NSObject
{
    CUTWeakReference * _delegateReference;
    NSObject<OS_dispatch_queue> * _ivarQueue;
    NSString * _environmentName;
    NSData * _publicToken;
    unsigned int _messageSize;
    unsigned int _largeMessageSize;
    NSString * _connectionPortName;
    unsigned int _connectionPort;
    NSArray * _enabledTopics;
    NSArray * _ignoredTopics;
    NSArray * _opportunisticTopics;
    char _enableCriticalReliability;
    char _enableStatusNotifications;
    char _isConnected;
    char _usesAppLaunchStats;
    NSMutableDictionary * _idsToOutgoingMessages;
    unsigned int _nextOutgoingMessageID;
    NSObject<OS_dispatch_queue> * _machQueue;
    NSObject<OS_dispatch_source> * _mach_source;
    NSObject<OS_xpc_object> * _connection;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    char _everHadDelegate;
    NSMutableArray * _queuedDelegateBlocks;
}

@property (readonly, retain, nonatomic) NSData * publicToken;
@property (nonatomic) unsigned int messageSize;
@property (nonatomic) unsigned int largeMessageSize;
@property (nonatomic) <APSConnectionDelegate> * delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * delegateQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * ivarQueue;
@property (nonatomic) char usesAppLaunchStats;

+ (void)_safelyCancelAndReleaseAfterBarrierConnection:(NSURLConnection *)arg0;
+ (void)_safelyCancelAndReleaseConnection:(NSURLConnection *)arg0;
+ (void)_blockingXPCCallWithArgumentBlock:(id /* block */)arg0 resultHandler:(/* block */ id)arg1;
+ (void)_setTokenState;
+ (char)isValidEnvironment:(NSDictionary *)arg0;
+ (void)requestCourierConnection;
+ (void)invalidateDeviceIdentity;
+ (NSObject *)connectionsDebuggingState;
+ (void)notifySafeToSendFilter;
+ (double)keepAliveIntervalForEnvironmentName:(NSString *)arg0;
+ (struct __SecIdentity *)copyIdentity;

- (void)_disconnect;
- (void)dealloc;
- (void)setDelegate:(<APSConnectionDelegate> *)arg0;
- (<APSConnectionDelegate> *)delegate;
- (void)_connectIfNecessary;
- (void)_connectIfNecessaryOnIvarQueue;
- (void)_disconnectOnIvarQueue;
- (void)_shutdownOnIvarQueue;
- (void)_shutdownFromDealloc;
- (void)setEnableStatusNotifications:(char)arg0;
- (void)_noteDisconnectedFromDaemonOnIvarQueue;
- (void)_deliverOutgoingMessageResultWithID:(unsigned int)arg0 error:(NSError *)arg1;
- (void)_addEnableCriticalReliabilityToXPCMessage:(NSString *)arg0;
- (void)_addEnableStatusNotificationsToXPCMessage:(NSString *)arg0;
- (void)_addUsesAppLaunchStatsToXPCMessage:(NSString *)arg0;
- (void)_setEnabledTopics:(id)arg0 ignoredTopics:(NSArray *)arg1 opportunisticTopics:(NSArray *)arg2 sendToDaemon:(char)arg3;
- (void)_setEnableCriticalReliability:(char)arg0 sendToDaemon:(char)arg1;
- (void)_setUsesAppLaunchStats:(char)arg0 sendToDaemon:(char)arg1;
- (void)_setEnableStatusNotifications:(char)arg0 sendToDaemon:(char)arg1;
- (void)setLargeMessageSize:(unsigned int)arg0;
- (void)_deliverDidReconnectOnIvarQueue;
- (void)_deliverPublicTokenOnIvarQueue:(NSObject *)arg0;
- (void)_deliverConnectionStatusChange:(char)arg0;
- (void)_cancelConnectionOnIvarQueue;
- (void)_handleEvent:(NSObject *)arg0 withHandler:(id /* block */)arg1;
- (void)_onIvarQueue_setEnabledTopics:(id)arg0 ignoredTopics:(NSArray *)arg1 opportunisticTopics:(NSArray *)arg2 sendToDaemon:(char)arg3;
- (NSOperationQueue *)_listForIdentifierOnIvarQueue:(unsigned int)arg0;
- (void)_sendOutgoingMessage:(NSString *)arg0 fake:(char)arg1;
- (void)_disconnectFromDealloc;
- (NSArray *)ignoredTopics;
- (NSArray *)opportunisticTopics;
- (void)moveTopic:(id)arg0 fromList:(unsigned int)arg1 toList:(unsigned int)arg2;
- (void)setUsesAppLaunchStats:(char)arg0;
- (char)usesAppLaunchStats;
- (void)_deliverMessage:(NSString *)arg0;
- (void)_deliverPublicToken:(NSString *)arg0;
- (void)_deliverConnectionStatusFromDealloc:(char)arg0;
- (void)_deliverToken:(NSString *)arg0 forTopic:(VCSessionMessageTopic *)arg1 identifier:(NSString *)arg2;
- (char)hasIdentity;
- (void)sendFakeMessage:(NSString *)arg0;
- (NSObject<OS_dispatch_queue> *)ivarQueue;
- (APSConnection *)initWithEnvironmentName:(NSString *)arg0;
- (void)removeFromRunLoop;
- (APSConnection *)initWithEnvironmentName:(NSString *)arg0 namedDelegatePort:(NSObject *)arg1 queue:(NSObject *)arg2;
- (void)setEnabledTopics:(NSArray *)arg0 ignoredTopics:(NSArray *)arg1 opportunisticTopics:(NSArray *)arg2;
- (void)shutdown;
- (NSData *)publicToken;
- (NSArray *)enabledTopics;
- (void)setEnabledTopics:(NSArray *)arg0;
- (void)requestTokenForTopic:(id)arg0 identifier:(NSString *)arg1;
- (void)invalidateTokenForTopic:(id)arg0 identifier:(NSString *)arg1;
- (void)scheduleInRunLoop:(NSObject *)arg0;
- (NSObject<OS_dispatch_queue> *)delegateQueue;
- (void)setEnableCriticalReliability:(char)arg0;
- (void)cancelOutgoingMessage:(NSString *)arg0;
- (void)sendOutgoingMessage:(NSString *)arg0;
- (unsigned int)largeMessageSize;
- (void)_cancelConnection;
- (APSConnection *)initWithEnvironmentName:(NSString *)arg0 queue:(NSObject *)arg1;
- (void)setEnabledTopics:(NSArray *)arg0 ignoredTopics:(NSArray *)arg1;
- (unsigned int)messageSize;
- (void)setMessageSize:(unsigned int)arg0;
- (void)_callDelegateOnIvarQueueWithBlock:(id /* block */)arg0;
- (char)isConnected;
- (APSConnection *)initWithEnvironmentName:(NSString *)arg0 namedDelegatePort:(NSObject *)arg1;

@end
