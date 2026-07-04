/* Runtime dump - PLWallpaperImageViewController
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLWallpaperImageViewController : PLUIEditImageViewController <SBFLegibilitySettingsProviderDelegate>
{
    PLWallpaperNavigationItem * _navItem;
    int _wallpaperMode;
    NSArray * _navigationToolbarItems;
    char _saveWallpaperData;
    NSString * _wallpaperTitle;
    id _didSetImageMode;
    char _isWallpaperEdit;
    SBSUIWallpaperPreviewViewController * _wallpaperPreviewViewController;
    int _previewVariant;
    int _previewType;
}

@property (retain, nonatomic) SBSUIWallpaperPreviewViewController * wallpaperPreviewViewController;
@property (nonatomic) char saveWallpaperData;
@property (copy, nonatomic) NSString * wallpaperTitle;
@property (nonatomic) int previewVariant;
@property (nonatomic) int previewType;
@property (nonatomic) char isWallpaperEdit;

- (void)dealloc;
- (PLWallpaperImageViewController *)init;
- (UINavigationItem *)navigationItem;
- (char)prefersStatusBarHidden;
- (void)loadView;
- (char)shouldAutorotateToInterfaceOrientation:(int)arg0;
- (void)viewWillAppear:(char)arg0;
- (void)viewWillDisappear:(char)arg0;
- (void)viewDidDisappear:(char)arg0;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (PLWallpaperImageViewController *)initWithUIImage:(UIImage *)arg0;
- (void)photoTileViewControllerRequestsFullScreenImage:(PLPhotoTileViewController *)arg0;
- (void)cropOverlayWasCancelled:(id)arg0;
- (void)cropOverlayWasOKed:(id)arg0;
- (void)setImageAsHomeScreenClicked:(id)arg0;
- (void)setImageAsLockScreenClicked:(id)arg0;
- (void)setImageAsHomeScreenAndLockScreenClicked:(id)arg0;
- (void)motionToggledManually:(char)arg0;
- (char)uiipc_useTelephonyUI;
- (int)cropOverlayMode;
- (struct CGRect)_viewFrame;
- (unsigned int)_contentAutoresizingMask;
- (void)setupNavigationItem;
- (unsigned int)_tileAutoresizingMask;
- (char)clientIsWallpaper;
- (char)wantsStatusBarVisible;
- (int)desiredStatusBarAnimation;
- (SBSUIWallpaperPreviewViewController *)wallpaperPreviewViewController;
- (void)prepareForBackground:(id)arg0;
- (void)prepareForForeground:(id)arg0;
- (void)setPreviewVariant:(int)arg0;
- (void)setPreviewType:(int)arg0;
- (PLWallpaperImageViewController *)initWithWallpaperVariant:(int)arg0;
- (void)setWallpaperPreviewViewController:(SBSUIWallpaperPreviewViewController *)arg0;
- (void)_updatePreviewFrame:(NSObject *)arg0;
- (void)_updateTitles;
- (NSString *)wallpaperTitle;
- (void)_backgroundCropWallpaper;
- (void)_cropWallpaperFinished:(id)arg0;
- (char)saveWallpaperData;
- (void)setWallpaperSynchronouslyFromArgs:(id)arg0;
- (void)_savePhoto;
- (void)_displayWallpaperOptionsSheet;
- (void)providerLegibilitySettingsChanged:(NSNotification *)arg0;
- (void)setWallpaperFromArgs:(id)arg0;
- (void)_adjustScrollViewGeometry;
- (void)setupWallpaperPreview;
- (void)setSaveWallpaperData:(char)arg0;
- (void)setWallpaperTitle:(NSString *)arg0;
- (int)previewVariant;
- (int)previewType;
- (char)isWallpaperEdit;
- (void)setIsWallpaperEdit:(char)arg0;
- (int)imageFormat;

@end
