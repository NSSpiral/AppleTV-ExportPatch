/* Runtime dump - PLPhotoStreamsHelper
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPhotoStreamsHelper : NSObject
{
    char _appHasPolledOnceThisForegroundSession;
}

+ (PLPhotoStreamsHelper *)sharedPhotoStreamsHelper;
+ (char)photoStreamsEnabled;
+ (NSNumber *)iCloudServiceAccount;
+ (NSString *)publishBreadcrumbsPath;
+ (char)writeBreadcrumbContent:(NSObject *)arg0 forHashString:(NSString *)arg1;
+ (char)canInitiateDistributedPhotoStreamDeletionForAssetUUID:(id)arg0;

- (void)dealloc;
- (PLPhotoStreamsHelper *)init;
- (void)initiateDeletionOfPhotoStreamAssets:(NSArray *)arg0;
- (void)initiateDeletionOfOriginalAssets:(NSArray *)arg0;
- (void)clearCachedAccountState;
- (NSObject *)photoStreamsPublishStreamID;
- (void)savePhotoStreamMetadata:(NSDictionary *)arg0 forAsset:(NSObject *)arg1;
- (char)enqueueAssetForPSPublishing:(id)arg0 assetHash:(id)arg1 fullPath:(NSString *)arg2 fileSize:(NSObject *)arg3 type:(NSObject *)arg4 reenqueueCount:(NSObject *)arg5 publicGlobalUUID:(id *)arg6;
- (void)resetMstreamdStateForPersonID:(NSObject *)arg0;
- (void)cleanupPhotoStreamMetadataForAssetsWithUUIDs:(id)arg0 forStreamID:(NSObject *)arg1;
- (void)pollForNewSubscriptionContent;
- (char)shouldUploadVideos;
- (void)_appDidEnterBackground:(NSNotification *)arg0;
- (void)_accountStoreDidChange:(NSDictionary *)arg0;
- (void)_clearPhotoStreamAccountSettings;
- (NSObject *)imageLimitsByAssetType;
- (char)isValidUploadAsset:(NSSet *)arg0 type:(NSObject *)arg1 fileSize:(NSObject *)arg2;
- (int)_serverIntegerLimitForKey:(NSString *)arg0 debugDefaultKey:(NSString *)arg1;
- (NSString *)psHashAsString:(NSString *)arg0;
- (int)maxPixelSizeForDerivative;
- (id)pathToSavedMetadataForAssetHash:(id)arg0 streamID:(unsigned short)arg1 createIntermediateDirs:(char)arg2;
- (char)dequeueAssetsForPSPublishing:(id)arg0;
- (NSData *)psHashForData:(NSData *)arg0;
- (NSDate *)lastPhotoStreamUpdateDate;
- (char)removeBreadcrumbsForHashString:(NSString *)arg0;
- (void)writeWillEnqueueBreadcrumbForHash:(id)arg0 imagePath:(NSString *)arg1;
- (void)writeDidEnqueueBreadcrumbForHash:(id)arg0 imagePath:(NSString *)arg1;
- (void)writeDidPublishBreadcrumbforHash:(id)arg0 imagePath:(NSString *)arg1;
- (void)pollForNewSubscriptionContentOncePerAppForegroundSession;
- (char)shouldPublishScreenShots;
- (int)imageLimitForOwnStream;
- (int)imageLimitForFriendStream;
- (int)friendsLimit;
- (NSSet *)temporaryPathForRecentlyUploadedAsset:(NSSet *)arg0;
- (struct CGSize)derivedAssetSizeForMasterSizeWidth:(float)arg0 height:(float)arg1;
- (NSSet *)derivedAssetForMasterAsset:(NSSet *)arg0;
- (void)resetServerState;
- (id)pause_mstreamd;
- (void)resume_mstreamd:(id)arg0;
- (void)enumerateMasterHashesAndPublicGlobalUUIDsForAssets:(NSArray *)arg0 withBlock:(id /* block */)arg1;

@end
