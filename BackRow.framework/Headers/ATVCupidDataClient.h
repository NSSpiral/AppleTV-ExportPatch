/* Runtime dump - ATVCupidDataClient
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol ATVCupidMyPSAccessObjectDelegate;
@protocol ATVCupidSharedPSAccessObjectDelegate;

@class ATVCupidAOSynchronizer, ATVCupidAccessObject, ATVCupidMyPSAccessObject, ATVCupidSharedPSAccessObject, ATViCloudAccount;
@interface ATVCupidDataClient : ATVDataClient <ATVCupidMyPSAccessObjectDelegate, ATVCupidSharedPSAccessObjectDelegate>
{
    ATVCupidAOSynchronizer * _myPSAOSynchronizer;
    ATVCupidAOSynchronizer * _sharedPSAOSynchronizer;
}

@property (readonly, nonatomic) ATViCloudAccount * cupidAccount;
@property (retain, nonatomic) ATVCupidAOSynchronizer * myPSAOSynchronizer;
@property (retain, nonatomic) ATVCupidAOSynchronizer * sharedPSAOSynchronizer;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)assetsDidChangeForMyPSAccessObject:(ATVCupidMyPSAccessObject *)arg0;
- (void)sharedPSAccessObject:(ATVCupidSharedPSAccessObject *)arg0 albumsDidAddByAlsoAddingViewableAlbums:(char)arg1;
- (void)sharedPSAccessObject:(ATVCupidSharedPSAccessObject *)arg0 albumsDidRemoveForAlbumIDs:(NSArray *)arg1 byAlsoRemovingViewableAlbums:(char)arg2;
- (void)sharedPSAccessObject:(ATVCupidSharedPSAccessObject *)arg0 albumMetadataDidChangeForAlbumID:(NSString *)arg1;
- (void)sharedPSAccessObject:(ATVCupidSharedPSAccessObject *)arg0 subsribersDidChangeForAlbumID:(NSString *)arg1 subscriptionStatusDidChange:(char)arg2;
- (void)sharedPSAccessObject:(ATVCupidSharedPSAccessObject *)arg0 isAlbumUnviewedDidChangeForAlbumID:(NSString *)arg1;
- (void)sharedPSAccessObject:(ATVCupidSharedPSAccessObject *)arg0 assetsDidAddForAlbumID:(NSString *)arg1;
- (void)sharedPSAccessObject:(ATVCupidSharedPSAccessObject *)arg0 assetsDidRemoveForAssetIDs:(NSArray *)arg1 albumID:(NSString *)arg2;
- (void)sharedPSAccessObject:(ATVCupidSharedPSAccessObject *)arg0 isAssetUnviewedDidChangeForAssetID:(NSString *)arg1 albumID:(NSString *)arg2;
- (void)sharedPSAccessObject:(ATVCupidSharedPSAccessObject *)arg0 commentsDidChangeForAssetID:(NSString *)arg1 albumID:(NSString *)arg2 likeStatusDidChange:(char)arg3;
- (void)_accountActivityHandler:(id /* block */)arg0;
- (ATVCupidAOSynchronizer *)sharedPSAOSynchronizer;
- (void)_performConnection;
- (void)_onDisconnect;
- (void)_handleCollectionsQueryWithContext:(NSObject *)arg0;
- (void)_handleItemsQueryWithContext:(NSObject *)arg0;
- (void)_handleUpdateQueryWithContext:(NSObject *)arg0;
- (void)_handleDeleteQueryWithContext:(NSObject *)arg0;
- (void)_handleArtworkQueryWithContext:(NSObject *)arg0;
- (NSObject *)_sharedPhotoStreamItemForAssetID:(NSObject *)arg0 inAlbumWithAlbumID:(NSNumber *)arg1 accessObject:(ATVCupidAccessObject *)arg2;
- (void)_onConnect;
- (void)_setupMyPS;
- (void)_tearDownMyPS;
- (void)_setupSharedPS;
- (void)_tearDownSharedPS;
- (void)_collectSharedPhotoStreamsForCollectionID:(NSObject *)arg0 type:(NSObject *)arg1 includeItems:(char)arg2 inCollections:(id)arg3 queryContext:(NSObject *)arg4;
- (void)_collectRecentUpdatesStreamForCollectionID:(NSObject *)arg0 type:(NSObject *)arg1 includeItems:(char)arg2 inCollections:(id)arg3 queryContext:(NSObject *)arg4;
- (void)_collectMyPhotoStreamForCollectionID:(NSObject *)arg0 type:(NSObject *)arg1 includeItems:(char)arg2 inCollections:(id)arg3 queryContext:(NSObject *)arg4;
- (void)_collectSharedPhotoStreamItemsForCollectionID:(NSObject *)arg0 mediaType:(NSObject *)arg1 range:(struct ?)arg2 inItems:(NSArray *)arg3 queryContext:(NSObject *)arg4;
- (void)_collectRecentUpdatesItemsForCollectionID:(NSObject *)arg0 mediaType:(NSObject *)arg1 range:(struct ?)arg2 inItems:(NSArray *)arg3 queryContext:(NSObject *)arg4;
- (void)_collectMyPhotoStreamItemsForCollectionID:(NSObject *)arg0 mediaType:(NSObject *)arg1 range:(struct ?)arg2 inItems:(NSArray *)arg3 queryContext:(NSObject *)arg4;
- (void)_updateLikedForAssetID:(NSObject *)arg0 queryContext:(NSObject *)arg1;
- (void)_updateLastAccessedItemForAssetID:(NSObject *)arg0 queryContext:(NSObject *)arg1;
- (void)_updatePSCollectionTypeForCollectionID:(NSObject *)arg0 queryContext:(NSObject *)arg1;
- (void)_updateHasNewContentForCollectionID:(NSObject *)arg0 queryContext:(NSObject *)arg1;
- (ATVCupidAOSynchronizer *)myPSAOSynchronizer;
- (void)_iCloudPhotosSettingsDidChange:(NSDictionary *)arg0;
- (ATViCloudAccount *)cupidAccount;
- (void)setMyPSAOSynchronizer:(ATVCupidAOSynchronizer *)arg0;
- (void)setSharedPSAOSynchronizer:(ATVCupidAOSynchronizer *)arg0;
- (NSSet *)_myPhotoStreamItemForAsset:(NSSet *)arg0 accessObject:(ATVCupidAccessObject *)arg1;
- (NSSet *)_sharedPhotoStreamItemForAsset:(NSSet *)arg0 inAlbum:(MSASAlbum *)arg1 accessObject:(ATVCupidAccessObject *)arg2;
- (void)resolveMediaURLForItem:(NSObject *)arg0 completionHandler:(id /* block */)arg1;
- (void)dealloc;
- (ATVCupidDataClient *)init;
- (void).cxx_destruct;
- (void)concreteDataClientConnect;
- (void)concreteDataClientDisconnect;
- (char)supportsProperty:(NSObject *)arg0;
- (char)canProcessQueryConcurrently:(id)arg0;
- (char)processQueryAsync:(id)arg0;
- (void)executeQuery:(NSObject *)arg0 withCompletionQueue:(NSObject<OS_dispatch_queue> *)arg1 completionHandler:(id /* block */)arg2;

@end
