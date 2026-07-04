/* Runtime dump - PLChangeNotificationCenter
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLChangeNotificationCenter : NSObject
{
    char _isProcessingRemoteDidSave;
    int _cameraPreviewChangeListenerCount;
    NSNumber * _cameraPreviewChangedToken;
    NSMutableArray * _snapshots;
    struct changeList_s _changedAlbumLists;
    struct contentChanges_s _albumListsContent;
    struct changeList_s _changedAlbums;
    struct contentChanges_s _albumsContent;
    struct changeList_s _changedAssets;
    NSMutableSet * _assetsWithCloudCommentChanges;
    struct contentChanges_s _momentsContent;
    struct changeList_s _changedMoments;
    struct contentChanges_s _momentListsContent;
    struct changeList_s _changedMomentLists;
    struct changeList_s _changedCloudFeedEntries;
    PLManagedObjectContext * _moc;
    NSMutableArray * _enqueuedNotifications;
    NSMapTable * _changedInflightAssetsAlbumsToSnapshots;
    NSDictionary * _remoteNotificationData;
    char _isOverloaded;
    NSMutableSet * _overloadedObjects;
}

@property (readonly, retain, nonatomic) NSNotificationCenter * backingCenter;
@property (readonly, nonatomic) char _shouldForceFetchingAlbumsToReload;

+ (PLChangeNotificationCenter *)defaultCenter;
+ (void)getInsertedAssetCount:(unsigned int *)arg0 deletedAssetCount:(unsigned int *)arg1 updatedAssets:(NSSet *)arg2 fromContextDidChangeNotification:(NSNotification *)arg3;
+ (NSObject *)allManagedObjectKeysStrategy;
+ (void)forceFetchingAlbumReload;

- (void)addObserver:(NSObject *)arg0 selector:(SEL)arg1 name:(NSString *)arg2 object:(NSObject *)arg3;
- (void)dealloc;
- (PLChangeNotificationCenter *)init;
- (void)removeObserver:(NSObject *)arg0 name:(NSString *)arg1 object:(NSObject *)arg2;
- (NSString *)addObserverForName:(NSString *)arg0 object:(NSObject *)arg1 queue:(NSObject *)arg2 usingBlock:(id /* block */)arg3;
- (void)removeObserver:(NSObject *)arg0;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (void)postShouldReloadNotification;
- (void)processContextDidChangeNotification:(NSNotification *)arg0;
- (void)managedObjectContextWillBeOverloaded:(id)arg0 withNotificationData:(NSData *)arg1 usingObjectIDs:(char)arg2;
- (void)managedObjectContextWasOverloaded:(id)arg0 withNotificationData:(NSData *)arg1 usingObjectIDs:(char)arg2;
- (void)managedObjectContext:(NSObject *)arg0 willProcessRemoteContextSave:(id)arg1 usingObjectIDs:(char)arg2 isCoalescedEvent:(char)arg3;
- (void)managedObjectContext:(NSObject *)arg0 didProcessRemoteContextSave:(id)arg1 usingObjectIDs:(char)arg2;
- (void)processContextDidSaveNotification:(NSNotification *)arg0;
- (NSNotificationCenter *)backingCenter;
- (NSObject *)_takeSnapshotOfObject:(NSObject *)arg0;
- (void)_saveCurrentStateForAlbum:(id)arg0;
- (void)_splitContextDidChangeNotification:(NSNotification *)arg0;
- (void)_sendNotificationsForSplitChanges;
- (id)descriptionOfSplitChanges;
- (void)_enqueuePhotoLibraryNotifications;
- (void)_enqueueAlbumNotifications;
- (void)_enqueueMomentChangeNotifications;
- (void)_enqueueAlbumListNotifications;
- (void)_enqueueMomentListChangeNotifications;
- (void)_enqueueCloudCommentsNotifications;
- (void)_enqueueCloudFeedEntriesChangeNotifications;
- (void)_enqueueAssetChangeNotification;
- (void)_cleanupState;
- (void)_postEnqueuedNotifications;
- (void)_enqueueNotification:(NSNotification *)arg0 object:(NSObject *)arg1 userInfoWithObjects:(id *)arg2 forKeys:(NSArray *)arg3 count:(id *)arg4;
- (NSObject *)_snapshotForObject:(NSObject *)arg0;
- (void)_enqueueAssetContainerListChangeNotification:(NSNotification *)arg0;
- (void)_enqueueAlbumChangeNotification:(NSNotification *)arg0;
- (void)_enqueueInvitationRecordsChangeNotification:(NSNotification *)arg0;
- (void)enqueueNotification:(NSNotification *)arg0;
- (void)_enqueueAssetContainerChangeNotification:(NSNotification *)arg0;
- (char)_isInterestedInUpdatesOfObject:(NSObject *)arg0;
- (NSObject *)_takeSnapshotFromCommittedValuesOfObject:(NSObject *)arg0;
- (char)_shouldForceFetchingAlbumsToReload;
- (void)_evaluateContainersWithUpdatedContent;
- (void)_evaluateUpdatedAssets;
- (void)_enqueueNotification:(NSNotification *)arg0 object:(NSObject *)arg1 userInfo:(NSDictionary *)arg2;
- (NSObject *)_keysOfInterestForObject:(NSObject *)arg0;
- (NSObject *)_takeSnapshotOfObject:(NSObject *)arg0 useCommitedValues:(char)arg1;
- (void)_takeSnapshotsFromContext:(NSObject *)arg0 forRemoteContextSaveNotification:(NSNotification *)arg1 usingObjectIDs:(char)arg2;
- (void)_registerForCameraPreviewWellChanges;
- (void)_unregisterForCameraPreviewWellChanges;
- (void)addAssetContainerChangeObserver:(NSObject *)arg0 container:(NSObject *)arg1;
- (void)removeAssetContainerChangeObserver:(NSObject *)arg0 container:(NSObject *)arg1;
- (void)addAssetContainerListChangeObserver:(NSObject *)arg0 containerList:(<PLAssetContainerList> *)arg1;
- (void)removeAssetContainerListChangeObserver:(NSObject *)arg0 containerList:(<PLAssetContainerList> *)arg1;
- (void)addCloudCommentsChangeObserver:(NSObject *)arg0 asset:(NSSet *)arg1;
- (void)removeCloudCommentsChangeObserver:(NSObject *)arg0 asset:(NSSet *)arg1;
- (void)addInvitationRecordsObserver:(NSObject *)arg0;
- (void)removeInvitationRecordsObserver:(NSObject *)arg0;
- (void)addCloudFeedEntriesObserver:(NSObject *)arg0;
- (void)removeCloudFeedEntriesObserver:(NSObject *)arg0;
- (void)addAssetChangeObserver:(NSObject *)arg0;
- (void)removeAssetChangeObserver:(NSObject *)arg0;
- (void)addShouldReloadObserver:(NSObject *)arg0;
- (void)removeShouldReloadObserver:(NSObject *)arg0;
- (void)inflightAssetsAlbumWillChange:(NSDictionary *)arg0;
- (NSObject *)_orderedRelationshipsOfInterestForObject:(NSObject *)arg0;
- (NSObject *)_attributesOfInterestForObject:(NSObject *)arg0;
- (NSObject *)_toOneRelationshipsOfInterestForObject:(NSObject *)arg0;
- (void)enumerateIndexMappingCachesForObject:(NSObject *)arg0 withBlock:(id /* block */)arg1;
- (void)addCameraPreviewWellImageChangeObserver:(NSObject *)arg0;
- (void)removeCameraPreviewWellImageChangeObserver:(NSObject *)arg0;

@end
