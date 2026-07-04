/* Runtime dump - PLChangeNode
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLChangeNode : NSObject
{
    NSObject<OS_xpc_object> * _hubConnection;
    Class _changeHubClass;
    id _nodeUUID;
    int _notifyToken;
    NSObject<OS_dispatch_queue> * _isolationQueue;
    unsigned long long _lastKnownChangeHubEventIndex;
    char _isObservingOrderKeys;
    NSSet * _observedRelationships;
    NSMutableDictionary * _updatedOrderKeyObjectIDs;
}

+ (NSObject *)_descriptionForEvent:(NSObject *)arg0;
+ (NSObject *)localChangeEventFromChangeHubEvent:(NSObject *)arg0;
+ (PLChangeNode *)sharedNode;

- (void)dealloc;
- (PLChangeNode *)init;
- (void)setupHubConnection;
- (void)fetchNewEventsFromChangeHub;
- (void)connectManagedObjectContext:(NSObject *)arg0;
- (void)disconnectManagedObjectContext:(NSObject *)arg0;
- (void)processDelayedMomentChangesWithTransaction:(NSObject *)arg0;
- (void)_processCloudFeedUpdateDataFromChangeHubEvent:(NSObject *)arg0 transaction:(SBKTransaction *)arg1;
- (void)_processDelayedDupeAnalysisFromChangeHubEvent:(NSObject *)arg0 transaction:(SBKTransaction *)arg1;
- (void)_processDelayedAlbumCountUpdatesFromChangeHubEvent:(NSObject *)arg0 transaction:(SBKTransaction *)arg1;
- (void)_processDelayedAssetsForFileSystemPersistencyFromChangeHubEvent:(NSObject *)arg0 transaction:(SBKTransaction *)arg1;
- (void)_processDelayedSearchIndexUpdatesFromChangeHubEvent:(NSObject *)arg0 transaction:(SBKTransaction *)arg1;
- (void)_processDeletionsFromChangeHubEvent:(NSObject *)arg0 transaction:(SBKTransaction *)arg1;
- (void)distributeRemoteContextDidSaveEvent:(NSObject *)arg0 withGroup:(NSObject *)arg1 transaction:(SBKTransaction *)arg2;
- (void)persistentStoreDidUpdateOrderKeys:(NSArray *)arg0;
- (char)_inq_registerForStoreOrderKeyUpdateNotificationFromManagedObjectContext:(NSObject *)arg0;
- (void)sendChangeHubEventForDidSaveNotification:(NSNotification *)arg0;
- (NSArray *)getAndClearUpdatedOrderKeys;
- (NSNotification *)createXPCObjectFromDidSaveNotification:(NSNotification *)arg0 updatedAttributesByObjectID:(NSObject *)arg1 updatedRelationshipsByObjectID:(NSObject *)arg2 updatedOrderKeys:(NSArray *)arg3;
- (id)sendEventToChangeHub:(id)arg0 transaction:(SBKTransaction *)arg1;
- (void)processDelayedCloudFeedAlbumUpdates:(id)arg0 assetInserts:(id *)arg1 assetUpdates:(id *)arg2 commentInserts:(id *)arg3 invitationRecordUpdates:(id *)arg4 deletionEntries:(NSArray *)arg5 transaction:(SBKTransaction *)arg6;
- (void)processDelayedDupeAnalysisNormalInserts:(id)arg0 cloudInserts:(NSMutableSet *)arg1 transaction:(SBKTransaction *)arg2;
- (void)processDelayedAssetsForFileSystemPersistency:(id)arg0 transaction:(SBKTransaction *)arg1;
- (void)_processDelayedSearchIndexUpdates:(id)arg0 transaction:(SBKTransaction *)arg1;
- (void)_processDelayedAlbumCountUpdates:(id)arg0 transaction:(SBKTransaction *)arg1;
- (void)handleRemoteChangeHubRequest:(NSURLRequest *)arg0;
- (void)forceUserInterfaceReload;
- (void)processRemoteEvents:(id)arg0;
- (char)isEventOriginatingFromHere:(id)arg0;
- (void)distributeRemoteChangeHubEvent:(NSObject *)arg0 withGroup:(NSObject *)arg1 transaction:(SBKTransaction *)arg2;
- (void)printChangeStore;

@end
