/* Runtime dump - IDSDaemonController
 * Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface IDSDaemonController : NSObject <IDSDaemonProtocol>
{
    id _delegate;
    IMRemoteObject<IDSDaemonProtocol> * _remoteObject;
    IMLocalObject * _localObject;
    IDSDaemonListener * _daemonListener;
    NSProtocolChecker * _protocol;
    NSString * _listenerID;
    NSObject<OS_dispatch_queue> * _ivarQueue;
    NSObject<OS_dispatch_group> * _daemonConnectedGroup;
    NSObject<OS_dispatch_queue> * _remoteMessageQueue;
    unsigned int _connectionID;
    NSMutableDictionary * _listenerServices;
    NSSet * _services;
    NSSet * _cachedServices;
    NSMutableDictionary * _listenerCommands;
    NSSet * _commands;
    NSSet * _cachedCommands;
    NSMutableDictionary * _listenerCapabilities;
    unsigned int _cachedCapabilities;
    unsigned int _lastUpdateCaps;
    char _hasCheckedForDaemon;
    char _preventReconnect;
    char _acquiringDaemonConnection;
    char _autoReconnect;
    char _hasBeenSuspended;
    int _curXPCMessagePriority;
    NSMutableSet * _notificationServices;
}

@property (readonly, nonatomic) NSString * listenerID;
@property (readonly, nonatomic) IDSDaemonListener * listener;
@property (nonatomic) int curXPCMessagePriority;
@property char _autoReconnect;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * _remoteMessageQueue;
@property (nonatomic) id delegate;
@property (readonly, nonatomic) char isConnecting;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (IDSDaemonController *)sharedInstance;
+ (void)_blockUntilSendQueueIsEmpty;
+ (char)_applicationWillTerminate;
+ (void)_setApplicationWillTerminate;

- (NSString *)listenerID;
- (void)dealloc;
- (void)setDelegate:(NSObject *)arg0;
- (IDSDaemonController *)init;
- (NSObject *)delegate;
- (NSString *)methodSignatureForSelector:(SEL)arg0;
- (void)forwardInvocation:(NSInvocation *)arg0;
- (IDSDaemonListener *)listener;
- (NSSet *)services;
- (NSSet *)commands;
- (unsigned int)capabilities;
- (void)_performBlock:(id /* block */)arg0 wait:(/* block */ id)arg1;
- (void)_setAutoReconnect:(char)arg0;
- (void)_localObjectCleanup;
- (void)_remoteObjectCleanup;
- (void)_noteDisconnected;
- (char)remoteObjectExists;
- (void)remoteObjectDiedNotification:(NSNotification *)arg0;
- (void)localObjectDiedNotification:(NSNotification *)arg0;
- (void)_setServices:(UpdateAndReportServices *)arg0 commands:(NSSet *)arg1 capabilities:(unsigned int)arg2;
- (void)_performBlock:(id /* block */)arg0;
- (void)_blockUntilSendQueueIsEmpty;
- (char)localObjectExists;
- (char)_autoReconnect;
- (void)_disconnectFromDaemonWithForce:(char)arg0;
- (char)_makeConnectionWithLaunch:(char)arg0 completionBlock:(id /* block */)arg1;
- (void)_connectToDaemonWithLaunch:(char)arg0 services:(NSSet *)arg1 commands:(NSSet *)arg2 capabilities:(unsigned int)arg3;
- (char)connectToDaemonWithLaunch:(char)arg0;
- (char)_setServices:(UpdateAndReportServices *)arg0;
- (char)_setCommands:(SASendCommands *)arg0;
- (char)_setCapabilities:(unsigned int)arg0;
- (char)connectToDaemonWithLaunch:(char)arg0 services:(NSSet *)arg1 commands:(NSSet *)arg2 capabilities:(unsigned int)arg3;
- (void)disconnectFromDaemon;
- (char)hasListenerForID:(NSObject *)arg0;
- (char)setServices:(NSSet *)arg0 forListenerID:(NSObject *)arg1;
- (char)setCommands:(NSSet *)arg0 forListenerID:(NSObject *)arg1;
- (void)_listenerSetUpdated;
- (char)addListenerID:(NSObject *)arg0 services:(NSSet *)arg1 commands:(NSSet *)arg2;
- (NSObject *)servicesForListenerID:(NSObject *)arg0;
- (NSObject *)commandsForListenerID:(NSObject *)arg0;
- (unsigned int)capabilitiesForListenerID:(NSObject *)arg0;
- (char)connectToDaemon;
- (void)_handleDaemonException:(NSException *)arg0;
- (void)addedDelegateForService:(NSObject *)arg0;
- (char)addListenerID:(NSObject *)arg0 services:(NSSet *)arg1;
- (char)removeListenerID:(NSObject *)arg0;
- (char)setCapabilities:(unsigned int)arg0 forListenerID:(NSObject *)arg1;
- (void)blockUntilConnected;
- (void)_noteSetupComplete;
- (void)_agentDidLaunchNotification:(NSNotification *)arg0;
- (void)sendXPCObject:(NSObject *)arg0 objectContext:(TSPObjectContext *)arg1;
- (NSObject<OS_dispatch_queue> *)_remoteMessageQueue;
- (void)systemApplicationDidEnterBackground;
- (void)systemApplicationWillEnterForeground;
- (void)systemApplicationDidSuspend;
- (void)systemApplicationDidResume;
- (int)curXPCMessagePriority;
- (void)setCurXPCMessagePriority:(int)arg0;
- (IMLocalObject *)localObject;
- (char)isConnecting;
- (char)isConnected;

@end
