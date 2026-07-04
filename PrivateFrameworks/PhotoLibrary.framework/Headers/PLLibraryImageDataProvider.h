/* Runtime dump - PLLibraryImageDataProvider
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLLibraryImageDataProvider : NSObject
{
    PLImageCache * _imageCache;
    PLImageLoadingQueue * _imageLoadingQueue;
    NSMutableDictionary * _imageSources;
}

- (void)dealloc;
- (PLLibraryImageDataProvider *)init;
- (NSString *)_imageSourceForFormat:(int)arg0;
- (id)loadImageSynchronously:(char)arg0 forAsset:(NSObject *)arg1 format:(int)arg2 priority:(int)arg3 completion:(id /* block */)arg4;
- (void)cancelLoadForAsset:(NSSet *)arg0;
- (void)cancelLoadForAsset:(NSSet *)arg0 format:(int)arg1;
- (void)invalidateCachedImagesForAsset:(NSSet *)arg0;
- (void)invalidateCachedImagesForAsset:(NSSet *)arg0 format:(int)arg1;
- (void)pauseLoading;
- (void)resumeLoading;

@end
