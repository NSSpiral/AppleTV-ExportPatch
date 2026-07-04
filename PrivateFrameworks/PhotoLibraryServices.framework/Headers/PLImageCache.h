/* Runtime dump - PLImageCache
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLImageCache : NSObject
{
    PLImageLoadingThread * _loader;
    PLImageCacheList * _cacheList;
}

- (void)dealloc;
- (PLImageCache *)init;
- (NSObject *)_cachedImageFromSource:(NSObject *)arg0 asset:(NSSet *)arg1;
- (ATVRadioStationImageLoader *)_imageLoader;
- (void)_uncacheImage:(UIImage *)arg0;
- (NSObject *)cachedImageFromSource:(NSObject *)arg0 forAsset:(NSObject *)arg1 loadIfNeeded:(char)arg2 synchronously:(char)arg3 priority:(int)arg4 forImageLoadingQueue:(NSObject *)arg5;
- (void)invalidateCachedImageForSource:(NSObject *)arg0 asset:(NSSet *)arg1;
- (void)_addImageToCache:(NSObject *)arg0;
- (NSOperationQueue *)newImageLoadingQueue;
- (void)removeImageLoadingQueue:(NSObject *)arg0;
- (void)cancelLoadFromSource:(NSObject *)arg0 asset:(NSSet *)arg1 imageLoadingQueue:(PLImageLoadingQueue *)arg2;
- (NSObject *)cachedImageFromSource:(NSObject *)arg0 asset:(NSSet *)arg1 loadIfNeeded:(char)arg2 synchronously:(char)arg3 priority:(int)arg4 forImageLoadingQueue:(NSObject *)arg5 completion:(id /* block */)arg6;
- (id)newCachedImageWithImageContents:(void *)arg0 orientation:(int)arg1 metadata:(NSDictionary *)arg2 fromSource:(NSObject *)arg3 asset:(NSSet *)arg4;
- (void)pauseLoading;
- (void)resumeLoading;

@end
