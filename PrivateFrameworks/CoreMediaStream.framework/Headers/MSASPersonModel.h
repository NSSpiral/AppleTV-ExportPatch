/* Runtime dump - MSASPersonModel
 * Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSASPersonModel : MSASModelBase
{
    char _shouldDownloadEarliestPhotosFirst;
}

@property (nonatomic) char shouldDownloadEarliestPhotosFirst;

- (MSASPersonModel *)initWithPersonID:(NSString *)arg0;
- (char)shouldDownloadEarliestPhotosFirst;
- (void)setShouldDownloadEarliestPhotosFirst:(char)arg0;
- (void)enqueueCommandAtHeadOfQueue:(NSObject *)arg0 params:(NSMutableDictionary *)arg1 personID:(NSString *)arg2 albumGUID:(NSString *)arg3 assetCollectionGUID:(NSString *)arg4;
- (int)assetsInDownloadQueue;
- (int)itemsForDownloadCountFocusAlbumGUID:(NSString *)arg0 focusAssetCollectionGUID:(NSString *)arg1;
- (void)purgeCompletionBlock:(id /* block */)arg0;
- (id)commandAtHeadOfQueueOutParams:(id *)arg0 outCommandIdentifier:(long long *)arg1 outPersonID:(id *)arg2 outAlbumGUID:(id *)arg3 outAssetCollectionGUID:(id *)arg4;
- (void)removeCommandIdentifier:(long long)arg0;
- (NSString *)commandWithMinimumIdentifier:(long long)arg0 outParams:(id *)arg1 outCommandIdentifier:(long long *)arg2 outPersonID:(id *)arg3 outAlbumGUID:(id *)arg4 outAssetCollectionGUID:(id *)arg5;
- (id)itemsForUpload;
- (void)removeAssetCollectionsFromUploadQueue:(NSObject *)arg0;
- (NSString *)nextItemsForDownloadFocusAlbumGUID:(NSString *)arg0 focusAssetCollectionGUID:(NSString *)arg1 maxCount:(int)arg2;
- (void)removeAssetsFromDownloadQueue:(NSObject *)arg0;
- (void)requeuePendingAssetCollectionsWithAlbumGUID:(NSString *)arg0;
- (void)requeuePendingAssetCollectionGUID:(NSString *)arg0;
- (void)enqueueCommand:(NSObject *)arg0 params:(NSMutableDictionary *)arg1 personID:(NSString *)arg2 albumGUID:(NSString *)arg3 assetCollectionGUID:(NSString *)arg4;
- (long long)countOfEnqueuedCommands;
- (int)assetCollectionsInUploadQueue;
- (char)hasItemsForDownloadCountFocusAlbumGUID:(NSString *)arg0 focusAssetCollectionGUID:(NSString *)arg1;
- (void)setParams:(NSMutableDictionary *)arg0 forCommandWithIdentifier:(long long)arg1;
- (void)dbQueueRemoveCommandIdentifier:(long long)arg0;
- (void)dbQueueEnqueueCommand:(NSObject *)arg0 params:(NSMutableDictionary *)arg1 personID:(NSString *)arg2 albumGUID:(NSString *)arg3 assetCollectionGUID:(NSString *)arg4 sequenceNumber:(long long)arg5;
- (long long)countOfEnqueuedCommand:(NSObject *)arg0;
- (void)enqueueCommand:(NSObject *)arg0 params:(NSMutableDictionary *)arg1 personID:(NSString *)arg2 albumGUID:(NSString *)arg3 pendingOnAssetCollectionGUID:(NSString *)arg4;
- (void)addPendingAssetCollectionGUID:(NSString *)arg0 albumGUID:(NSString *)arg1;
- (void)enqueueAssetCollectionForUpload:(id)arg0 album:(MSASAlbum *)arg1;
- (void)enqueueAssetForDownload:(id)arg0 inAlbumWithGUID:(NSString *)arg1;
- (char)dbQueueUpgradeFromDatabaseVersion:(int)arg0 currentVersion:(int)arg1;
- (long long)dbQueueNextCommandSequenceNumber;
- (void)dbQueueEnqueueCommand:(NSObject *)arg0 params:(NSMutableDictionary *)arg1 personID:(NSString *)arg2 albumGUID:(NSString *)arg3 assetCollectionGUID:(NSString *)arg4;
- (long long)dbQueueSmallestCommandSequenceNumber;
- (char)dbQueueIsAssetCollectionWithGUIDPending:(id)arg0;
- (void)dbQueueRequeuePendingCommandsWithQueryStatement:(struct sqlite3_stmt *)arg0 deleteStatement:(struct sqlite3_stmt *)arg1;
- (NSString *)_commandWithMinimumIdentifier:(NSString *)arg0 outParams:(id *)arg1 outCommandIdentifier:(long long *)arg2 outPersonID:(id *)arg3 outAlbumGUID:(id *)arg4 outAssetCollectionGUID:(id *)arg5;
- (void)dbQueueRemoveAllEntriesFromTable:(id)arg0;
- (void)dbQueueRequeuePendingCommandsWithAssetCollectionGUID:(NSString *)arg0;
- (void)dbQueueRequeuePendingCommandsWithAlbumGUID:(NSString *)arg0;
- (char)dbQueueIsGUIDQueued:(id)arg0 inQueue:(NSObject *)arg1;
- (int)dbQueueAssetCountAlbumGUID:(NSString *)arg0 inQueue:(NSObject *)arg1;
- (NSString *)nextItemsForDownloadFocusAlbumGUID:(NSString *)arg0 focusAssetCollectionGUID:(NSString *)arg1 thumbnails:(char)arg2 maxCount:(int)arg3 isInflight:(char)arg4;
- (void)dbQueueSetErrorCount:(int)arg0 forGUID:(NSString *)arg1 inQueue:(NSObject *)arg2;
- (void)dbQueueRemoveGUID:(NSString *)arg0 fromQueue:(NSObject *)arg1;
- (NSString *)nextItemsForUploadAlbumGUID:(NSString *)arg0 maxPriority:(int)arg1 maxCount:(int)arg2;
- (void)dbQueueRemoveCommandAtHeadOfQueue;
- (char)isAssetCollectionWithGUIDPending:(id)arg0;
- (long long)nextMMCSItemID;
- (int)assetsInDownloadQueueAlbumGUID:(NSString *)arg0;
- (void)setErrorCount:(int)arg0 forAssetInDownloadQueue:(NSObject *)arg1;
- (void)setInFlightAssets:(NSArray *)arg0;
- (int)assetCollectionsInUploadQueueAlbumGUID:(NSString *)arg0;
- (NSNumber *)nextItemsForUploadMaxCount:(int)arg0;
- (void)setErrorCount:(int)arg0 forAssetCollectionInUploadQueue:(NSObject *)arg1;

@end
