/* Runtime dump - SBFProceduralWallpaperView
 * Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFProceduralWallpaperView : SBFWallpaperView <SBFProceduralWallpaperDelegate>
{
    <SBFProceduralWallpaper> * _proceduralWallpaper;
    NSDictionary * _options;
    NSTimer * _colorSampleTimer;
    UIImage * _blur;
    int _thermalNotificationToken;
    char _pausedForThermalReasons;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (char)_allowsParallax;
+ (char)_allowsRasterization;

- (char)_isVisible;
- (void)dealloc;
- (void)layoutSubviews;
- (void)invalidate;
- (NSDictionary *)options;
- (UIColor *)_computeAverageColor;
- (void)_handleVariantChange;
- (UIImage *)_blurredImage;
- (void)_handleVisibilityChange;
- (void)_startGeneratingBlurredImages;
- (void)_stopGeneratingBlurredImages;
- (void)prepareToAppear;
- (void)prepareToDisappear;
- (char)isDisplayingWallpaper:(id)arg0 forVariant:(int)arg1 options:(NSDictionary *)arg2;
- (void)setContinuousColorSamplingEnabled:(char)arg0;
- (void)setWallpaperAnimationEnabled:(char)arg0;
- (void)_updateAnimating;
- (void)_updateSampleTimer;
- (NSObject *)_newImageFromBlurSurface:(struct __IOSurface *)arg0 rect:(struct CGRect)arg1;
- (char)_shouldSampleContinuously;
- (void)_sample;
- (void)wallpaper:(SBFProceduralWallpaper *)arg0 didGenerateBlur:(struct __IOSurface *)arg1 forRect:(struct CGRect)arg2;
- (void)wallpaper:(SBFProceduralWallpaper *)arg0 didComputeAverageColor:(UIColor *)arg1 forRect:(struct CGRect)arg2;
- (SBFProceduralWallpaperView *)initWithFrame:(struct CGRect)arg0 proceduralWallpaper:(struct CGSize)arg1 options:(NSDictionary *)arg2 variant:(struct CGSize)arg3;

@end
