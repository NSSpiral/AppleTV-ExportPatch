/* Runtime dump - BRCNotificationManager
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCNotificationManager : NSObject <BRCModule>
{
    BRCAccountSession * _session;
    BRCClientRanksPersistedState * _state;
    NSHashTable * _pipes;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_queue> * _cacheQueue;
    BRNotificationQueue * _notifs;
    NSMutableDictionary * _transferCache;
    BRCXPCClient * _client;
    id _activeAliasQueries;
    char _isCancelled;
}

@property (readonly) char hasActiveAliasWatchers;
@property (readonly, nonatomic) BRCAccountSession * session;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (nonatomic) char isCancelled;

- (void)cancel;
- (void)suspend;
- (char)isCancelled;
- (void)resume;
- (void)close;
- (void).cxx_destruct;
- (BRCAccountSession *)session;
- (void)flushUpdates;
- (void)setIsCancelled:(char)arg0;
- (BRCNotificationManager *)initWithAccountSession:(NSObject *)arg0;
- (char)hasActiveAliasWatchers;
- (void)registerContainers:(id)arg0 forFlags:(unsigned int)arg1;
- (void)unregisterContainers:(id)arg0 forFlags:(unsigned int)arg1;
- (void)getPipeWithXPCReceiver:(NSObject *)arg0 client:(BRCXPCClient *)arg1 root:(NSObject *)arg2 reply:(id /* block */)arg3;
- (NSObject *)pipeWithReceiver:(NSObject *)arg0 root:(NSObject *)arg1;
- (void)queueUpdate:(NSDate *)arg0;
- (void)invalidatePipesWatchingContainerID:(NSObject *)arg0 completionBlock:(id /* block */)arg1;

@end
