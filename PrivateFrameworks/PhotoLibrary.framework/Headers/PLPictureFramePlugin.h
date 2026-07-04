/* Runtime dump - PLPictureFramePlugin
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLPictureFramePlugin : PLSlideshowPlugin <PLImageLoadingQueueDelegate>
{
    PLImageCache * _imageCache;
    PLImageLoadingQueue * _imageLoadingQueue;
    PLImageSource * _imageSource;
    struct __CFArray * _imageIndexes;
    unsigned int _currentIndex;
    PLManagedAsset * _requestedImage;
    PLCachedImage * _nextImage;
    PLCroppedImageView * _currentImageView;
    PLCroppedImageView * _nextImageView;
    id _didLoadFirstImage;
    id _slideshowTimerDidFire;
    id _slideshowTimerIsScheduled;
    id _paused;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (PLPictureFramePlugin *)init;
- (void)slideshowViewDidDisappear;
- (void)stopSlideshow;
- (NSObject *)newSlideshowView;
- (void)slideshowViewWillAppear;
- (void)slideshowViewDidAppear;
- (void)pauseSlideshow;
- (void)setAlbumAssets:(NSArray *)arg0;
- (void)resumeSlideshow;
- (void)_requestNextImageSynchronously:(char)arg0;
- (struct CGRect)_contentBounds;
- (void)_scheduleSlideshowTimer;
- (void)_slideshowTimerFired;
- (long)_albumImageIndexForSlideIndex:(long)arg0;
- (UIImage *)_nextImage;
- (void)_didLoadImage:(UIImage *)arg0;
- (void)_displayFirstImage;
- (void)_transitionToNextImage;
- (void)_crossFadeAnimationDidStop:(id)arg0 finished:(id /* block */)arg1 context:(void *)arg2;
- (void)imageLoadingQueue:(PLImageLoadingQueue *)arg0 didLoadImage:(PLCachedImage *)arg1 forAsset:(PLManagedAsset *)arg2 fromSource:(PLImageSource *)arg3;

@end
