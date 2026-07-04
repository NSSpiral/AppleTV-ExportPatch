/* Runtime dump - PHCoreImageManager
 * Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHCoreImageManager : NSObject
{
    NSObject<OS_dispatch_queue> * _requestLookupTableIsolationQueue;
    NSObject<OS_dispatch_queue> * _preheatItemIsolationQueue;
    NSMapTable * _requestLookupTable;
    NSMapTable * _perDomainPreheatItemMapTables;
    NSMapTable * _perDomainCloudPreheatItemMapTables;
    NSMapTable * _perDomainMissedPreheatItemMapTables;
    NSMapTable * _perDomainHighPriorityRequestWaitGroups;
    NSObject<OS_dispatch_queue> * _CPLDownloadUpdateIsolationQueue;
    int _CPLDownloadUpdateNotifyToken;
    NSObject<OS_dispatch_queue> * _CPLDownloadFireAndForgetRequestQueue;
    NSMutableSet * _domainsWithPurgeScheduled;
    NSMutableSet * _cloudDomainsWithPurgeScheduled;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> * requestLookupTableIsolationQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * preheatItemIsolationQueue;
@property (retain, nonatomic) NSMapTable * requestLookupTable;
@property (retain, nonatomic) NSMapTable * perDomainPreheatItemMapTables;
@property (retain, nonatomic) NSMapTable * perDomainCloudPreheatItemMapTables;
@property (retain, nonatomic) NSMapTable * perDomainMissedPreheatItemMapTables;
@property (retain, nonatomic) NSMapTable * perDomainHighPriorityRequestWaitGroups;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * CPLDownloadUpdateIsolationQueue;
@property (nonatomic) int CPLDownloadUpdateNotifyToken;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * CPLDownloadFireAndForgetRequestQueue;
@property (retain, nonatomic) NSMutableSet * domainsWithPurgeScheduled;
@property (retain, nonatomic) NSMutableSet * cloudDomainsWithPurgeScheduled;

+ (char)_formatIsLessThanFullscreen:(int)arg0;
+ (NSString *)_descriptionForDomain:(NSString *)arg0;
+ (NSSet *)_debugFilenameForAsset:(NSSet *)arg0;
+ (struct CGSize)_aspectedSizeWithSize:(struct CGSize)arg0 maxDimension:(float)arg1;
+ (int)_fallbackLargestFormatForRequestVersion:(int)arg0;
+ (int)_bestFormatWithSize:(struct CGSize)arg0 contentMode:(int)arg1 options:(NSDictionary *)arg2 aspectRatio:(double)arg3 hasAdjustmentsHandler:(id /* block */)arg4 isTableFormat:(/* block */ id)arg5 desiredImagePixelSize:(char *)arg6;
+ (char)_isRetina;
+ (int)_standardDegradedFormatWithSize:(struct CGSize)arg0 contentMode:(int)arg1 options:(NSDictionary *)arg2 aspectRatio:(double)arg3 hasAdjustmentsHandler:(id /* block */)arg4 isTableFormat:(/* block */ id)arg5;
+ (int)_fastestDegradedFormatWithSize:(struct CGSize)arg0 contentMode:(int)arg1 options:(NSDictionary *)arg2 aspectRatio:(double)arg3 hasAdjustmentsHandler:(id /* block */)arg4 isTableFormat:(/* block */ id)arg5;
+ (struct CGImage *)_newResizedImageForImage:(struct CGImage *)arg0 withSize:(struct CGSize)arg1 normalizedCropRect:(struct CGRect)arg2 contentMode:(struct CGSize)arg3;
+ (int)_pickDegradedFormatWithSize:(struct CGSize)arg0 contentMode:(int)arg1 options:(NSDictionary *)arg2 aspectRatio:(double)arg3 hasAdjustmentsHandler:(id /* block */)arg4 isTableFormat:(/* block */ id)arg5;
+ (void)runBlockAsPrivilegedAsPhotosApp:(id)arg0;
+ (NSObject *)_dictionaryBySettingObject:(NSObject *)arg0 forKey:(NSString *)arg1 inDictionary:(NSDictionary *)arg2;
+ (struct CGSize)_sizeWithDimension:(float)arg0 aspectRatio:(double)arg1 preserveAspectRatio:(char)arg2;
+ (int)_wantedCloudPlaceholderKindForImageFormat:(int)arg0;
+ (PHCoreImageManager *)sharedInstance;

- (void)_updateCPLDownloadStatesUponNotification;
- (void)setCPLDownloadUpdateNotifyToken:(int)arg0;
- (NSObject<OS_dispatch_queue> *)requestLookupTableIsolationQueue;
- (NSMapTable *)requestLookupTable;
- (NSObject<OS_dispatch_queue> *)CPLDownloadUpdateIsolationQueue;
- (int)CPLDownloadUpdateNotifyToken;
- (NSMapTable *)perDomainHighPriorityRequestWaitGroups;
- (NSMapTable *)perDomainCloudPreheatItemMapTables;
- (NSMapTable *)perDomainPreheatItemMapTables;
- (NSString *)_preheatItemMapTableWithFormat:(int)arg0 CPLPrefetching:(char)arg1 domain:(NSString *)arg2 createIfNeeded:(char)arg3;
- (NSString *)_preheatItemSourceWithFormat:(int)arg0;
- (NSMapTable *)perDomainMissedPreheatItemMapTables;
- (NSMutableSet *)cloudDomainsWithPurgeScheduled;
- (NSMutableSet *)domainsWithPurgeScheduled;
- (void)_cancelAndFlushPreheatItemsForAssets:(NSArray *)arg0 CPLPrefetching:(char)arg1 domain:(NSString *)arg2 operation:(int)arg3 passingTestHandler:(id /* block */)arg4 didCancelHandler:(/* block */ id)arg5;
- (void)_schedulePurgeForCPLPrefetching:(char)arg0 domain:(NSString *)arg1 onMainQueue:(char)arg2 didCancelHandler:(id /* block */)arg3;
- (NSSet *)_preheatItemWithAsset:(NSSet *)arg0 format:(int)arg1 CPLPrefetching:(char)arg2 domain:(NSString *)arg3;
- (void)_cancelAndFlushPreheatWithAsset:(NSSet *)arg0 preheatItem:(NSObject *)arg1 domain:(NSString *)arg2 operation:(int)arg3 didCancelHandler:(id /* block */)arg4;
- (UIImage *)_resizeUIImage:(UIImage *)arg0 withRequest:(NSURLRequest *)arg1;
- (void)_fetchAnySizeImageAsNon5551BytesPossiblyThruAssetsdAndCPLWithRequest:(NSURLRequest *)arg0 library:(NSObject *)arg1 format:(int)arg2 optimalSourcePixelSize:(struct CGSize)arg3 wantsProperties:(char)arg4 networkAccessAllowed:(char)arg5 networkAccessForced:(char)arg6 trackCPLDownload:(char)arg7 sync:(char)arg8 completionHandler:(id /* block */)arg9;
- (void)_fireAndForgetCPLDownloadWithRequest:(NSURLRequest *)arg0 format:(int)arg1;
- (NSURLRequest *)_setupCPLDownloadWaitGroupForRequest:(NSURLRequest *)arg0 withTimeout:(unsigned long long)arg1;
- (void)_clearCPLDownloadWaitGroupForRequest:(NSURLRequest *)arg0;
- (void)_fetchAnySizeImageAsNon5551BytesWithRequest:(NSURLRequest *)arg0 library:(NSObject *)arg1 format:(int)arg2 bestFormat:(int)arg3 optimalSourcePixelSize:(struct CGSize)arg4 sync:(char)arg5 fireAndForgetCPLDownload:(char)arg6 completionHandler:(id /* block */)arg7;
- (void)_asyncGenerateLiveRenderedImageWithRequest:(NSURLRequest *)arg0 library:(NSObject *)arg1 format:(int)arg2 desiredImagePixelSize:(struct CGSize)arg3 completionHandler:(id /* block */)arg4;
- (NSSet *)_originalPreheatlItemCreateTransientWithAsset:(NSSet *)arg0 optimalSourcePixelSize:(struct CGSize)arg1 options:(unsigned int)arg2 domain:(NSString *)arg3;
- (NSURLRequest *)_fastFetchAdjustmentDataWithRequest:(NSURLRequest *)arg0;
- (void)_registerRequest:(NSURLRequest *)arg0;
- (void)_unregisterRequest:(NSURLRequest *)arg0;
- (void)_fetchAdjustmentDataThruAssetsdAndCPLHandlerWithRequest:(NSURLRequest *)arg0 networkAccessAllowed:(char)arg1 trackCPLDownload:(char)arg2 completionHandler:(id /* block */)arg3;
- (void)_fetchPreheatableAnySizeImageAsNon5551BytesWithRequest:(NSURLRequest *)arg0 library:(NSObject *)arg1 format:(int)arg2 bestFormat:(int)arg3 preheatItem:(NSObject *)arg4 optimalSourcePixelSize:(struct CGSize)arg5 sync:(char)arg6 fireAndForgetCPLDownload:(char)arg7 completionHandler:(id /* block */)arg8;
- (void)_fetchAnySizeImageAs5551BytesWithRequest:(NSURLRequest *)arg0 format:(int)arg1 bestFormat:(int)arg2 sync:(char)arg3 fireAndForgetCPLDownload:(char)arg4 completionHandler:(id /* block */)arg5;
- (char)_asyncFetchCloudSharedAnySizeImageAsNon5551BytesIfNecessaryWithRequest:(NSURLRequest *)arg0 library:(NSObject *)arg1 format:(int)arg2 bestFormat:(int)arg3 optimalSourcePixelSize:(struct CGSize)arg4 sync:(char)arg5 completionHandler:(id /* block */)arg6;
- (NSSet *)_preheatItemCreateIfNeededWithAsset:(NSSet *)arg0 format:(int)arg1 optimalSourcePixelSize:(struct CGSize)arg2 options:(unsigned int)arg3 CPLPrefetching:(char)arg4 outDidExist:(char *)arg5 domain:(NSString *)arg6;
- (NSString *)_highPriorityRequestWaitGroupWithDomain:(NSString *)arg0;
- (char)_recordMissedPreheatItemForAsset:(NSSet *)arg0 format:(int)arg1 domain:(NSString *)arg2;
- (char)_deleteMissedPreheatItemForAsset:(NSSet *)arg0 format:(int)arg1 domain:(NSString *)arg2;
- (void)_cancelAndFlushPreheatWithAsset:(NSSet *)arg0 format:(int)arg1 CPLPrefetching:(char)arg2 domain:(NSString *)arg3 operation:(int)arg4 outPreheatItem:(id *)arg5 didCancelHandler:(id /* block */)arg6;
- (void)_processImageRequest:(NSURLRequest *)arg0 sync:(char)arg1;
- (void)_cancelAsynchronousRequestWithID:(int)arg0;
- (void)setRequestLookupTableIsolationQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (NSObject<OS_dispatch_queue> *)preheatItemIsolationQueue;
- (void)setPreheatItemIsolationQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)setRequestLookupTable:(NSMapTable *)arg0;
- (void)setPerDomainPreheatItemMapTables:(NSMapTable *)arg0;
- (void)setPerDomainCloudPreheatItemMapTables:(NSMapTable *)arg0;
- (void)setPerDomainMissedPreheatItemMapTables:(NSMapTable *)arg0;
- (void)setPerDomainHighPriorityRequestWaitGroups:(NSMapTable *)arg0;
- (void)setCPLDownloadUpdateIsolationQueue:(NSObject *)arg0;
- (NSObject<OS_dispatch_queue> *)CPLDownloadFireAndForgetRequestQueue;
- (void)setCPLDownloadFireAndForgetRequestQueue:(NSObject *)arg0;
- (void)setDomainsWithPurgeScheduled:(NSMutableSet *)arg0;
- (void)setCloudDomainsWithPurgeScheduled:(NSMutableSet *)arg0;
- (void)dealloc;
- (PHCoreImageManager *)init;
- (NSString *)description;
- (void).cxx_destruct;

@end
