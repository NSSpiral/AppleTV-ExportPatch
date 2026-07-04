/* Runtime dump - PLImageLoadingQueue
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLImageLoadingQueue : NSObject
{
    <PLImageLoadingQueueDelegate> * _delegate;
    PLImageCache * _cache;
    NSLock * _lock;
}

@property (nonatomic) <PLImageLoadingQueueDelegate> * delegate;

- (void)dealloc;
- (void)setDelegate:(<PLImageLoadingQueueDelegate> *)arg0;
- (<PLImageLoadingQueueDelegate> *)delegate;
- (void)stopLoading;
- (PLImageLoadingQueue *)initWithImageCache:(NSObject *)arg0;
- (void)pauseLoading;
- (void)resumeLoading;
- (id)loadImageSynchronously:(char)arg0 fromSource:(NSObject *)arg1 forAsset:(NSObject *)arg2 loadIfNeeded:(char)arg3;
- (id)loadImageSynchronously:(char)arg0 fromSource:(NSObject *)arg1 forAsset:(NSObject *)arg2;
- (id)loadImageSynchronously:(char)arg0 fromSource:(NSObject *)arg1 forAsset:(NSObject *)arg2 priority:(int)arg3;
- (id)loadImageSynchronously:(char)arg0 fromSource:(NSObject *)arg1 forAsset:(NSObject *)arg2 completion:(id /* block */)arg3;
- (id)loadImageSynchronously:(char)arg0 fromSource:(NSObject *)arg1 forAsset:(NSObject *)arg2 priority:(int)arg3 completion:(id /* block */)arg4;
- (void)cancelLoadFromSource:(NSObject *)arg0 forAsset:(NSObject *)arg1;
- (void)invalidateImageFromSource:(NSObject *)arg0 forAsset:(NSObject *)arg1;
- (void)imageIsAvailable:(id)arg0 forAsset:(NSObject *)arg1 fromSource:(NSObject *)arg2 completionBlocks:(id)arg3;

@end
