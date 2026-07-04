/* Runtime dump - MSASAssetUploader
 * Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSASAssetUploader : MSASAssetTransferer
{
    char _didEncounterNetworkConditionError;
    int _state;
    NSMutableArray * _itemsInFlight;
    NSMutableDictionary * _assetCollectionsToItemInFlightMap;
    NSMutableDictionary * _assetToAssetCollectionMap;
    NSMutableArray * _finishedAssetCollections;
    NSMutableSet * _assetCollectionsWithAuthorizationError;
    NSMutableDictionary * _assetCollectionGUIDToRequestorContext;
}

@property (weak, nonatomic) <MSASAssetUploaderDelegate> * delegate;
@property (nonatomic) int state;
@property (retain, nonatomic) NSMutableArray * itemsInFlight;
@property (retain, nonatomic) NSMutableDictionary * assetCollectionsToItemInFlightMap;
@property (retain, nonatomic) NSMutableDictionary * assetToAssetCollectionMap;
@property (retain, nonatomic) NSMutableArray * finishedAssetCollections;
@property (retain, nonatomic) NSMutableSet * assetCollectionsWithAuthorizationError;
@property (nonatomic) char didEncounterNetworkConditionError;
@property (retain, nonatomic) NSMutableDictionary * assetCollectionGUIDToRequestorContext;

- (int)state;
- (void)setState:(int)arg0;
- (void).cxx_destruct;
- (void)workQueueRetryOutstandingActivities;
- (void)unregisterAssetCollections:(id)arg0;
- (void)cancelAssetCollections:(id)arg0;
- (void)registerAssetCollections:(id)arg0 completionBlock:(id /* block */)arg1;
- (void)unregisterAssetCollections:(id)arg0 completionBlock:(id /* block */)arg1;
- (void)MMCSEngine:(struct __MMCSEngine *)arg0 didMakeGetProgress:(float)arg1 state:(int)arg2 onAsset:(NSSet *)arg3;
- (void)MMCSEngine:(struct __MMCSEngine *)arg0 didFinishGettingAsset:(NSSet *)arg1 path:(NSString *)arg2 error:(NSError *)arg3;
- (void)MMCSEngine:(struct __MMCSEngine *)arg0 didMakePutProgress:(float)arg1 state:(int)arg2 onAsset:(NSSet *)arg3;
- (void)MMCSEngine:(struct __MMCSEngine *)arg0 didFinishPuttingAsset:(NSSet *)arg1 putReceipt:(id)arg2 error:(NSError *)arg3;
- (void)didFinishGettingAllAssets;
- (void)didFinishPuttingAllAssets;
- (void)MMCSEngine:(struct __MMCSEngine *)arg0 didCreateRequestorContext:(NSObject *)arg1 forAssets:(NSArray *)arg2;
- (void)workQueueUploadNextBatch;
- (void)workQueueGoIdle;
- (void)_workQueueStop;
- (void)workQueueStop;
- (void)workQueueShutDownCompletionBlock:(id /* block */)arg0;
- (void)setDidEncounterNetworkConditionError:(char)arg0;
- (NSError *)_orphanedAssetCollectionError;
- (void)workQueueDidFinishWithItem:(NSObject *)arg0 error:(NSError *)arg1;
- (void)workQueueRegisterAssets:(NSArray *)arg0 index:(unsigned int)arg1 completionBlock:(id /* block */)arg2;
- (void)workQueueRegisterAssetCollections:(id)arg0 index:(unsigned int)arg1 results:(NSArray *)arg2 completionBlock:(id /* block */)arg3;
- (void)workQueueCancelAssetCollections:(id)arg0;
- (void)workQueueStopTrackingItem:(NSObject *)arg0;
- (char)didEncounterNetworkConditionError;
- (NSObject *)_pathForPersonID:(NSObject *)arg0;
- (void)workQueueCancel;
- (NSMutableArray *)itemsInFlight;
- (void)setItemsInFlight:(NSMutableArray *)arg0;
- (NSMutableDictionary *)assetCollectionsToItemInFlightMap;
- (void)setAssetCollectionsToItemInFlightMap:(NSMutableDictionary *)arg0;
- (NSMutableDictionary *)assetToAssetCollectionMap;
- (void)setAssetToAssetCollectionMap:(NSMutableDictionary *)arg0;
- (NSMutableArray *)finishedAssetCollections;
- (void)setFinishedAssetCollections:(NSMutableArray *)arg0;
- (NSMutableSet *)assetCollectionsWithAuthorizationError;
- (void)setAssetCollectionsWithAuthorizationError:(NSMutableSet *)arg0;
- (NSMutableDictionary *)assetCollectionGUIDToRequestorContext;
- (void)setAssetCollectionGUIDToRequestorContext:(NSMutableDictionary *)arg0;

@end
