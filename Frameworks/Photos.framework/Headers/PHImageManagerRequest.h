/* Runtime dump - PHImageManagerRequest
 * Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHImageManagerRequest : NSObject
{
    char _cancelled;
    int _originalImageOrientation;
    char _CPLDownloadDegraded;
    char _isCloudSharedAsset;
    char _isPartOfBurst;
    NSString * _pathForAdjustmentFile;
    int _requestID;
    <_PLImageLoadingAsset> * _asset;
    id _domain;
    id _cancellationHandler;
    PLCPLDownloadContext * _CPLDownloadContext;
    NSObject<OS_dispatch_group> * _CPLDownloadWaitGroup;
    int _registrationRefCount;
    PHImageManagerRequest * _nextRequest;
    PLPreheatItem * _transientPreheatlItem;
    NSString * _assetUUID;
    int _cloudSharedAssetPlaceholderKind;
    NSString * _debugFilename;
}

@property (readonly, nonatomic) char isVideo;
@property (readonly, nonatomic) int requestID;
@property (readonly, nonatomic) <_PLImageLoadingAsset> * asset;
@property (readonly, nonatomic) id domain;
@property (copy) id cancellationHandler;
@property char CPLDownloadDegraded;
@property (retain) PLCPLDownloadContext * CPLDownloadContext;
@property (retain) NSObject<OS_dispatch_group> * CPLDownloadWaitGroup;
@property (readonly, nonatomic) int registrationRefCount;
@property (retain) PHImageManagerRequest * nextRequest;
@property (retain) PLPreheatItem * transientPreheatlItem;
@property (readonly, nonatomic) NSString * assetUUID;
@property (readonly, nonatomic) NSString * pathForAdjustmentFile;
@property (readonly, nonatomic) char isCloudSharedAsset;
@property (readonly, nonatomic) int cloudSharedAssetPlaceholderKind;
@property (readonly, nonatomic) char isPartOfBurst;
@property (readonly, nonatomic) NSString * debugFilename;

- (int)requestID;
- (PHImageManagerRequest *)nextRequest;
- (PHImageManagerRequest *)initRequestWithAsset:(<_PLImageLoadingAsset> *)arg0 domain:(NSString *)arg1;
- (void)cloneIDAndResultHandlerFromRequest:(NSURLRequest *)arg0;
- (BOOL)atomicIncrementRegistrationRefCountIfZero;
- (BOOL)atomicDecrementRegistrationRefCountIfOne;
- (int)incrementRegistrationRefCount;
- (int)decrementRegistrationRefCount;
- (void)clearResultHandler;
- (char)CPLDownloadDegraded;
- (void)setCPLDownloadDegraded:(char)arg0;
- (PLCPLDownloadContext *)CPLDownloadContext;
- (void)setCPLDownloadContext:(NSObject *)arg0;
- (NSObject<OS_dispatch_group> *)CPLDownloadWaitGroup;
- (void)setCPLDownloadWaitGroup:(NSObject *)arg0;
- (int)registrationRefCount;
- (void)setNextRequest:(PHImageManagerRequest *)arg0;
- (PLPreheatItem *)transientPreheatlItem;
- (void)setTransientPreheatlItem:(PLPreheatItem *)arg0;
- (PHImageManagerRequest *)init;
- (NSString *)domain;
- (char)isCancelled;
- (void)setCancelled:(char)arg0;
- (void)setCancellationHandler:(id /* block */)arg0;
- (id /* block */)cancellationHandler;
- (void).cxx_destruct;
- (<_PLImageLoadingAsset> *)asset;
- (char)isVideo;
- (char)isCloudSharedAsset;
- (NSString *)pathForAdjustmentFile;
- (int)originalImageOrientation;
- (NSString *)debugFilename;
- (char)isPartOfBurst;
- (int)cloudSharedAssetPlaceholderKind;
- (NSString *)assetUUID;

@end
