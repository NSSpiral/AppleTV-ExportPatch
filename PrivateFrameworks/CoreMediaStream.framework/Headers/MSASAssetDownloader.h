/* Runtime dump - MSASAssetDownloader
 * Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSASAssetDownloader : MSASAssetTransferer
{
    char _didEncounterNetworkConditionError;
    char _isDownloadingThumbnails;
    char _isWaitingForFirstDownloadEvent;
    int _state;
    NSMutableArray * _itemsInFlight;
    NSMutableDictionary * _assetToItemInFlightMap;
    NSMutableArray * _finishedAssets;
    NSString * _currentFocusAlbumGUID;
    NSString * _currentFocusAssetCollectionGUID;
    NSString * _objectGUID;
    NSString * _downloadBatchPerfGUID;
}

@property (weak, nonatomic) <MSASAssetDownloaderDelegate> * delegate;
@property (nonatomic) int state;
@property (retain, nonatomic) NSMutableArray * itemsInFlight;
@property (retain, nonatomic) NSMutableDictionary * assetToItemInFlightMap;
@property (retain, nonatomic) NSMutableArray * finishedAssets;
@property (nonatomic) char didEncounterNetworkConditionError;
@property (nonatomic) char isDownloadingThumbnails;
@property (retain, nonatomic) NSString * currentFocusAlbumGUID;
@property (retain, nonatomic) NSString * currentFocusAssetCollectionGUID;
@property (nonatomic) char isWaitingForFirstDownloadEvent;
@property (retain, nonatomic) NSString * objectGUID;
@property (retain, nonatomic) NSString * downloadBatchPerfGUID;

- (int)state;
- (void)setState:(int)arg0;
- (void).cxx_destruct;
- (void)workQueueRetryOutstandingActivities;
- (void)unregisterAssets:(NSArray *)arg0;
- (void)didEnqueueAsset:(NSSet *)arg0 forAlbumGUID:(NSString *)arg1;
- (void)registerAssets:(NSArray *)arg0 completionBlock:(id /* block */)arg1;
- (void)MMCSEngine:(struct __MMCSEngine *)arg0 didMakeGetProgress:(float)arg1 state:(int)arg2 onAsset:(NSSet *)arg3;
- (void)MMCSEngine:(struct __MMCSEngine *)arg0 didFinishGettingAsset:(NSSet *)arg1 path:(NSString *)arg2 error:(NSError *)arg3;
- (void)MMCSEngine:(struct __MMCSEngine *)arg0 didMakePutProgress:(float)arg1 state:(int)arg2 onAsset:(NSSet *)arg3;
- (void)didFinishGettingAllAssets;
- (void)didFinishPuttingAllAssets;
- (void)MMCSEngine:(struct __MMCSEngine *)arg0 didCreateRequestorContext:(NSObject *)arg1 forAssets:(NSArray *)arg2;
- (void)workQueueStop;
- (void)workQueueShutDownCompletionBlock:(id /* block */)arg0;
- (void)setDidEncounterNetworkConditionError:(char)arg0;
- (char)didEncounterNetworkConditionError;
- (NSObject *)_pathForPersonID:(NSObject *)arg0;
- (void)workQueueCancel;
- (NSMutableArray *)itemsInFlight;
- (void)setItemsInFlight:(NSMutableArray *)arg0;
- (void)workQueueDownloadNextBatch;
- (void)_workQueueGoIdle;
- (void)setIsWaitingForFirstDownloadEvent:(char)arg0;
- (NSString *)workQueueObjectGUID;
- (NSString *)downloadBatchPerfGUID;
- (void)setCurrentFocusAssetCollectionGUID:(NSString *)arg0;
- (void)setCurrentFocusAlbumGUID:(NSString *)arg0;
- (void)setIsDownloadingThumbnails:(char)arg0;
- (void)setDownloadBatchPerfGUID:(NSString *)arg0;
- (void)workQueueRegisterAssets:(NSArray *)arg0 completionBlock:(id /* block */)arg1;
- (void)workQueueUnregisterAssets:(NSArray *)arg0;
- (void)_workQueueStopTrackingItem:(NSObject *)arg0;
- (void)_workQueueDidFinishWithItem:(NSObject *)arg0 error:(NSError *)arg1;
- (char)isWaitingForFirstDownloadEvent;
- (void)MMCSEngine:(struct __MMCSEngine *)arg0 didFinishPuttingAsset:(NSSet *)arg1 error:(NSError *)arg2;
- (NSError *)_orphanedAssetError;
- (NSMutableDictionary *)assetToItemInFlightMap;
- (void)setAssetToItemInFlightMap:(NSMutableDictionary *)arg0;
- (NSMutableArray *)finishedAssets;
- (void)setFinishedAssets:(NSMutableArray *)arg0;
- (char)isDownloadingThumbnails;
- (NSString *)currentFocusAlbumGUID;
- (NSString *)currentFocusAssetCollectionGUID;
- (NSString *)objectGUID;
- (void)setObjectGUID:(NSString *)arg0;

@end
