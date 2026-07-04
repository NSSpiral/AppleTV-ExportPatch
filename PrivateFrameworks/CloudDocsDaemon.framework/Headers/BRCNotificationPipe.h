/* Runtime dump - BRCNotificationPipe
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCNotificationPipe : NSObject <BRItemNotificationSending>
{
    BRCNotificationManager * _manager;
    int _watchKind;
    NSString * _watchNamePrefix;
    NSString * _watchForBundleID;
    NSMutableSet * _externalContainers;
    NSSet * _watchedContainers;
    NSSet * _watchedContainerIDs;
    unsigned int _watchedContainersFlags;
    <BRItemNotificationReceiving> * _receiver;
    BRNotificationQueue * _notifs;
    NSObject<OS_dispatch_queue> * _queue;
    BRCRelativePath * _root;
    id _boostReply;
    BRCXPCClient * _client;
    unsigned short _watchItemOptions;
    BRCItemID * _oldWatchedAncestorItemID;
    BRCItemID * _watchedAncestorItemID;
    NSNumber * _watchedAncestorFileObjectID;
    NSString * _watchedAncestorFilenameToItem;
    BRCNotificationGatherer * _gatherer;
    char _hasUpdatesInFlight;
    char _volumeIsCaseSensitive;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (NSString *)description;
- (void)invalidate;
- (void)close;
- (void).cxx_destruct;
- (BRCNotificationPipe *)initWithXPCReceiver:(NSObject *)arg0 client:(BRCXPCClient *)arg1 root:(BRCRelativePath *)arg2 manager:(BRCNotificationManager *)arg3;
- (BRCNotificationPipe *)initWithReceiver:(<BRItemNotificationReceiving> *)arg0 root:(BRCRelativePath *)arg1 manager:(BRCNotificationManager *)arg2;
- (void)addNotification:(NSNotification *)arg0 asDead:(char)arg1;
- (void)processUpdates:(id)arg0;
- (void)invalidateReceiverIfWatchingContainerID:(NSObject *)arg0;
- (void)addDequeueCallback:(id /* block */)arg0;
- (NSObject *)_initWithRoot:(BRCRelativePath *)arg0 manager:(BRCNotificationManager *)arg1;
- (void)_addIntraContainerUpdatesFromInterContainerUpdate:(NSDate *)arg0 toArray:(NSArray *)arg1;
- (int)_isInterestingUpdate:(NSDate *)arg0;
- (void)watchItemAtURL:(NSURL *)arg0 container:(NSObject *)arg1 lookup:(BRCPathToItemLookup *)arg2 options:(unsigned short)arg3 reply:(id /* block */)arg4;
- (void)_stopWatchingItems;
- (void)watchScopes:(unsigned short)arg0 trustedContainerIDs:(id)arg1 gatheringDone:(id)arg2;
- (void)watchItemInProcessAtURL:(NSURL *)arg0 options:(unsigned short)arg1 reply:(id /* block */)arg2;
- (void)watchScopes:(unsigned short)arg0 containerIDs:(NSArray *)arg1 gatheringDone:(id)arg2;
- (void)watchItemAtURL:(NSURL *)arg0 options:(unsigned short)arg1 reply:(id /* block */)arg2;
- (void)watchItemsNamesPrefixedBy:(id)arg0 inScopes:(unsigned short)arg1 containerIDs:(NSArray *)arg2 gatheringDone:(id)arg3;
- (void)watchScopes:(unsigned short)arg0 gatheringDone:(id)arg1;
- (void)boostPriority:(id)arg0;
- (void)_flush;

@end
