/* Runtime dump - PLRelationshipOrderKeyManager
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLRelationshipOrderKeyManager : NSObject
{
    PLPhotoLibrary * _photoLibrary;
    PLPhotoLibrary * _locationsPhotoLibrary;
    NSMutableDictionary * _locationsCache;
    NSMutableDictionary * _enqueuedFolderAlbumsOrderValueUpdates;
    NSMutableDictionary * _enqueuedAlbumAssetsOrderValueUpdates;
    NSObject<OS_dispatch_queue> * _locationsCacheQueue;
    char _hasStashedLocationValues;
}

@property (readonly, nonatomic) char hasStashedLocationValues;

+ (PLRelationshipOrderKeyManager *)sharedManager;

- (void)dealloc;
- (PLRelationshipOrderKeyManager *)init;
- (PLPhotoLibrary *)photoLibrary;
- (void)updateAlbumAssetsUsingTransientOrdersByAlbumOID:(id)arg0 inLibrary:(NSObject *)arg1;
- (char)writeStashedLocationValuesInLibrary:(NSObject *)arg0 error:(id *)arg1;
- (unsigned int)findIndexForAlbumWithID:(int)arg0 newOrderValue:(long long)arg1 inFolderWithID:(int)arg2 hasOrderValueConflictWithAlbumID:(id *)arg3;
- (void)getConflictResolutionOrderValuesForRelationship:(id)arg0 onObjectWithID:(int)arg1 atIndex:(unsigned int)arg2 intoLower:(long long *)arg3 higher:(long long *)arg4;
- (void)stashFolderAlbumsLocationValue:(long long)arg0 forAlbumWithID:(int)arg1 inFolderWithID:(int)arg2 atIndex:(unsigned int)arg3;
- (void)updateAlbumCounts:(id)arg0 inLibrary:(NSObject *)arg1 completionHandler:(id /* block */)arg2;
- (void)migration_updateOrderValuesForAlbums:(id)arg0 managedObjectContext:(NSObject *)arg1;
- (void)migration_ensureValidOrderKey:(NSString *)arg0;
- (long long)migration_defaultOrderKeySpacing;
- (void)migration_fixupOrderKeys:(NSArray *)arg0 withSpacing:(long long)arg1;
- (void)_migration_updateOrderKeysForParent:(NSObject *)arg0 childToOrderKeyMap:(NSObject *)arg1;
- (void)_migration_updateOrderValuesForAlbum:(id)arg0 managedObjectContext:(NSObject *)arg1;
- (NSSet *)albumsAndOrderValuesForAsset:(NSSet *)arg0 inManagedObjectContext:(NSObject *)arg1;
- (id)parentFolderOrderValueForAlbum:(id)arg0 inManagedObjectContext:(NSObject *)arg1;
- (int)compareOrderKeyObject:(NSObject *)arg0 withObject:(NSObject *)arg1;
- (unsigned int)findIndexForAssetWithID:(int)arg0 newOrderValue:(long long)arg1 inAlbumWithID:(int)arg2 hasOrderValueConflictWithAssetID:(id *)arg3;
- (void)stashAlbumAssetsLocationValue:(long long)arg0 forAssetWithID:(int)arg1 inAlbumWithID:(int)arg2 atIndex:(unsigned int)arg3;
- (void)_updateOrderOfChildrenInParent:(NSObject *)arg0 usingTransientOrders:(id)arg1;
- (PLPhotoLibrary *)locationsPhotoLibrary;
- (NSString *)locationsManagedObjectContext;
- (NSCache *)_locationsCache;
- (id)_inq_orderingStateForRelationship:(id)arg0 onObjectWithID:(int)arg1;
- (NSMutableDictionary *)_enqueuedFolderAlbumsOrderValueUpdates;
- (void)_inq_stashLocationValue:(long long)arg0 forOrderedObjectWithID:(int)arg1 inSourceObjectID:(NSObject *)arg2 relationship:(OCXRelationship *)arg3 atIndex:(unsigned int)arg4 usingStashDictionary:(NSDictionary *)arg5;
- (NSMutableDictionary *)_enqueuedAlbumAssetsOrderValueUpdates;
- (void)_getAndResetEnqueuedOrderValueUpdatesForFolders:(id *)arg0 albums:(id *)arg1;
- (id)objectIDsAndOrderValuesForRelationship:(id)arg0 onObjectWithID:(int)arg1;
- (char)hasStashedLocationValues;

@end
