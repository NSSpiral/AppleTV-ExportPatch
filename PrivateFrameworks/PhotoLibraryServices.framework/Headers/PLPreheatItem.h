/* Runtime dump - PLPreheatItem
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPreheatItem : NSObject
{
    int _format;
    int _imageType;
    struct CGSize _optimalSourcePixelSize;
    NSString * _assetUUID;
    char _CPLPrefetching;
    NSObject<OS_dispatch_queue> * _CPLPrefetchingIsolationQueue;
    NSString * _CPLPrefetchingDoneToken;
    int _CPLNotifyRegistrationToken;
    char _CPLPrefetchingCancelled;
    NSObject<OS_dispatch_group> * _CPLPrefetchingWaitGroup;
    int _prefetchCount;
    char _didCompleteCPLPrefetchingWithSuccessOrError;
    char _CPLPrefetchingWasCancelled;
    int _bestFormat;
    NSString * _virtualCPLTaskIdentifier;
}

@property (readonly, nonatomic) int format;
@property (nonatomic) int bestFormat;
@property (readonly, nonatomic) int imageType;
@property (readonly, nonatomic) struct CGSize optimalSourcePixelSize;
@property (readonly, nonatomic) NSString * assetUUID;
@property (readonly, nonatomic) char CPLPrefetching;
@property (readonly, nonatomic) NSObject<OS_dispatch_group> * CPLPrefetchingWaitGroup;
@property (retain) NSString * virtualCPLTaskIdentifier;
@property char didCompleteCPLPrefetchingWithSuccessOrError;
@property char CPLPrefetchingWasCancelled;

- (void)dealloc;
- (NSString *)description;
- (char)isCancelled;
- (void)startPreheatRequestWithCompletionHandler:(id /* block */)arg0;
- (int)format;
- (NSString *)assetUUID;
- (struct CGSize)optimalSourcePixelSize;
- (UIImage *)cachedImage:(char *)arg0;
- (id)cachedImageIfAvailable:(char *)arg0;
- (char)addImageHandler:(id /* block */)arg0;
- (void)cancelPreheatRequestWithCompletionHandler:(id /* block */)arg0;
- (NSString *)virtualCPLTaskIdentifier;
- (void)setVirtualCPLTaskIdentifier:(NSString *)arg0;
- (char)CPLPrefetching;
- (PLPreheatItem *)initForCPLPrefetchingWithAssetUUID:(NSString *)arg0 format:(int)arg1;
- (int)incrementPrefetchCount;
- (int)decrementPrefetchCount;
- (void)resetPrefetchCount;
- (char)hasPrefetchCount;
- (int)bestFormat;
- (void)setBestFormat:(int)arg0;
- (int)imageType;
- (NSObject<OS_dispatch_group> *)CPLPrefetchingWaitGroup;
- (char)didCompleteCPLPrefetchingWithSuccessOrError;
- (void)setDidCompleteCPLPrefetchingWithSuccessOrError:(char)arg0;
- (char)CPLPrefetchingWasCancelled;
- (void)setCPLPrefetchingWasCancelled:(char)arg0;

@end
