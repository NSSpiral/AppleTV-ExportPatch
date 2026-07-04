/* Runtime dump - SBSUIWallpaperPreviewViewController
 * Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBSUIWallpaperPreviewViewController : UIViewController <SBFWallpaperViewLegibilityObserver, SBFLegibilitySettingsProvider>
{
    NSTimer * _dateTimer;
    <SBFLegibilitySettingsProviderDelegate> * _delegate;
    UIImage * _wallpaperImage;
    NSDictionary * _proceduralWallpaper;
    NSDictionary * _proceduralWallpaperOptions;
    char _colorSamplingEnabled;
    char _allowScrolling;
    SBFLockScreenSimpleDateFormatter * _dateFormatter;
    int _variant;
    NSString * _name;
    char _motionEnabled;
}

@property (readonly) UIImage * wallpaperImage;
@property (nonatomic) char motionEnabled;
@property (nonatomic) char colorSamplingEnabled;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (nonatomic) <SBFLegibilitySettingsProviderDelegate> * delegate;
@property (readonly, retain, nonatomic) _UILegibilitySettings * legibilitySettings;

- (void)dealloc;
- (void)setDelegate:(<SBFLegibilitySettingsProviderDelegate> *)arg0;
- (<SBFLegibilitySettingsProviderDelegate> *)delegate;
- (SBSUIWallpaperPreviewViewController *)initWithImage:(UIImage *)arg0;
- (SBSUIWallpaperPreviewViewController *)initWithNibName:(NSString *)arg0 bundle:(NSObject *)arg1;
- (void)loadView;
- (void)viewWillAppear:(char)arg0;
- (void)viewWillDisappear:(char)arg0;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (_UILegibilitySettings *)legibilitySettings;
- (void)setWallpaperForLocations:(int)arg0;
- (SBSUIWallpaperPreviewViewController *)initWithWallpaperVariant:(int)arg0;
- (char)motionEnabled;
- (void)setMotionEnabled:(char)arg0;
- (SBSUIWallpaperPreviewViewController *)initWithProceduralWallpaper:(NSDictionary *)arg0 options:(NSDictionary *)arg1;
- (SBSUIWallpaperPreviewViewController *)initWithImage:(UIImage *)arg0 name:(NSString *)arg1;
- (SBSUIWallpaperPreviewViewController *)initWithScrollableImage:(UIImage *)arg0;
- (UIImage *)wallpaperImage;
- (void)setColorSamplingEnabled:(char)arg0;
- (char)colorSamplingEnabled;
- (void)wallpaperView:(SBFWallpaperView *)arg0 legibilitySettingsDidChange:(NSDictionary *)arg1;
- (SBFWallpaperView *)_wallpaperView;
- (NSObject *)_wallpaperViewWithFrame:(struct CGRect)arg0;
- (SBFLockScreenDateView *)_dateView;
- (void)_updateDateView;
- (void)_stopDateTimer;
- (NSObject *)_backdropWallpaperView;
- (float)_parallaxFactor;
- (NSObject *)_proceduralWallpaperViewWithFrame:(struct CGRect)arg0 variant:(struct CGSize)arg1;
- (NSObject *)_wallpaperViewWithFrame:(struct CGRect)arg0 image:(struct CGSize)arg1 supportsCropping:(char)arg2 variant:(int)arg3;
- (NSObject *)_wallpaperViewWithFrame:(struct CGRect)arg0 variant:(struct CGSize)arg1 options:(NSDictionary *)arg2;
- (NSObject *)_previewView;
- (void)_startDateTimer;
- (SBSUIWallpaperPreviewViewController *)initWithColorSamplingEnabled:(char)arg0;

@end
