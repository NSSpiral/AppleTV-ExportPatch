/* Runtime dump - PLUIImageViewController
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLUIImageViewController : UIViewController <PLVideoViewDelegate, PLImageLoadingQueueDelegate, PLPhotoTileViewControllerDelegate>
{
    PLManagedAsset * _photo;
    struct CGImage * _imageRef;
    UIImage * _image;
    struct CGRect _cropRect;
    PLCropOverlay * _cropOverlay;
    PLPhotoTileViewController * _imageTile;
    PLVideoView * _videoView;
    PLVideoRemaker * _remaker;
    NSURL * _videoURL;
    PLImageCache * _imageCache;
    PLImageLoadingQueue * _imageLoadingQueue;
    PLImageSource * _imageSource;
    int _previousStatusBarStyle;
    int _newStatusBarStyle;
    id _allowEditing;
    id _statusBarWasHidden;
    id _isVideo;
    id _isDisappearing;
    id _remaking;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)loadView;
- (void)viewWillAppear:(char)arg0;
- (void)viewDidAppear:(char)arg0;
- (void)viewWillDisappear:(char)arg0;
- (void)viewDidDisappear:(char)arg0;
- (int)_imagePickerStatusBarStyle;
- (void)_removedAsTopViewController;
- (PLUIImageViewController *)initWithImageData:(UIImage *)arg0 cropRect:(struct CGRect)arg1;
- (PLUIImageViewController *)initWithUIImage:(UIImage *)arg0 cropRect:(struct CGRect)arg1;
- (char)_displaysFullScreen;
- (void)setAllowsEditing:(char)arg0;
- (void)photoTileViewControllerCancelImageRequests:(PLPhotoTileViewController *)arg0;
- (void)photoTileViewControllerRequestsFullScreenImage:(PLPhotoTileViewController *)arg0;
- (void)photoTileViewController:(PLPhotoTileViewController *)arg0 didAppear:(char)arg1;
- (void)photoTileViewController:(PLPhotoTileViewController *)arg0 willAppear:(char)arg1;
- (void)photoTileViewController:(PLPhotoTileViewController *)arg0 didDisappear:(char)arg1;
- (void)photoTileViewControllerRequestsFullSizeImage:(PLPhotoTileViewController *)arg0;
- (void)photoTileViewControllerSingleTap:(PLPhotoTileViewController *)arg0;
- (void)photoTileViewControllerDoubleTap:(PLPhotoTileViewController *)arg0;
- (void)photoTileViewControllerWillBeginGesture:(PLPhotoTileViewController *)arg0;
- (void)photoTileViewControllerDidEndGesture:(PLPhotoTileViewController *)arg0;
- (char)photoTileViewControllerAllowsEditing:(PLPhotoTileViewController *)arg0;
- (float)videoViewScrubberYOrigin:(PLVideoView *)arg0 forOrientation:(int)arg1;
- (char)videoViewCanBeginPlayback:(PLVideoView *)arg0;
- (void)videoViewIsReadyToBeginPlayback:(PLVideoView *)arg0;
- (void)videoViewDidBeginPlayback:(PLVideoView *)arg0;
- (void)videoViewDidEndPlayback:(PLVideoView *)arg0 didFinish:(char)arg1;
- (char)videoViewCanCreateMetadata:(PLVideoView *)arg0;
- (char)photoTileViewControllerIsDisplayingLandscape:(id)arg0;
- (void)videoRemakerDidBeginRemaking:(id)arg0;
- (void)videoRemakerDidEndRemaking:(id)arg0 temporaryPath:(NSString *)arg1;
- (void)cropOverlayWasCancelled:(id)arg0;
- (void)cropOverlayWasOKed:(id)arg0;
- (void)cropOverlayPlay:(id)arg0;
- (void)cropOverlayPause:(id)arg0;
- (NSString *)useButtonTitle;
- (int)cropOverlayMode;
- (struct CGRect)_viewFrame;
- (struct CGRect)previewFrame;
- (Class)_viewClass;
- (unsigned int)_contentAutoresizingMask;
- (void)setupNavigationItem;
- (unsigned int)_tileAutoresizingMask;
- (char)clientIsWallpaper;
- (void)_updateGestureSettings;
- (void)_editabilityChanged:(NSNotification *)arg0;
- (char)wantsStatusBarVisible;
- (int)desiredStatusBarAnimation;
- (void)didChooseVideoAtURL:(NSURL *)arg0 options:(NSDictionary *)arg1;
- (void)_enableCropOverlayIfNecessary;
- (void)attachScrubberPalette;
- (NSString *)_trimMessage;
- (PLUIImageViewController *)initWithPhoto:(PLManagedAsset *)arg0;
- (PLUIImageViewController *)initWithImage:(struct CGImage *)arg0 cropRect:(struct CGRect)arg1;
- (PLUIImageViewController *)initWithVideoURL:(NSURL *)arg0;
- (PLCropOverlay *)cropOverlay;
- (void)setCropOverlayDone;
- (void)cropOverlay:(PLCropOverlay *)arg0 didFinishSaving:(id)arg1;
- (void)videoView:(PLVideoView *)arg0 scrubberWasCreated:(id)arg1 slalomRegionEditor:(PLSlalomRegionEditor *)arg2;
- (void)videoViewDidPausePlayback:(PLVideoView *)arg0 didFinish:(char)arg1;
- (int)imageFormat;
- (void)imageLoadingQueue:(PLImageLoadingQueue *)arg0 didLoadImage:(PLCachedImage *)arg1 forAsset:(PLManagedAsset *)arg2 fromSource:(PLImageSource *)arg3;

@end
