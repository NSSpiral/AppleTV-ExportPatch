/* Runtime dump - PLStaticWallpaperImageViewController
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLStaticWallpaperImageViewController : PLWallpaperImageViewController

@property (nonatomic) char colorSamplingEnabled;

- (void)viewWillAppear:(char)arg0;
- (PLStaticWallpaperImageViewController *)initWithUIImage:(UIImage *)arg0;
- (void)photoTileViewControllerDidEndGesture:(PLPhotoTileViewController *)arg0;
- (PLStaticWallpaperImageViewController *)initWithPhoto:(UIImage *)arg0;
- (void)setWallpaperForLocations:(int)arg0;
- (void)providerLegibilitySettingsChanged:(NSNotification *)arg0;
- (UIImage *)wallpaperImage;
- (void)setColorSamplingEnabled:(char)arg0;
- (char)colorSamplingEnabled;
- (PLStaticWallpaperImageViewController *)initWithUIImage:(UIImage *)arg0 name:(NSString *)arg1;

@end
