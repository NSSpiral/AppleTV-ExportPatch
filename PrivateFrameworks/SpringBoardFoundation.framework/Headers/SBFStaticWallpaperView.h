/* Runtime dump - SBFStaticWallpaperView
 * Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFStaticWallpaperView : SBFWallpaperView
{
    NSMutableSet * _mappedBackdropKeys;
    UIImage * _image;
    UIImage * _displayedImage;
    char _sampleAndDiplayedImageAreSame;
    SBFColorBoxes * _colorBoxes;
}

@property (retain, nonatomic) SBFColorBoxes * colorBoxes;

+ (char)_allowsParallax;
+ (char)_allowsRasterization;

- (void)dealloc;
- (void)setContentView:(UIView *)arg0;
- (void)setContentsRect:(struct CGRect)arg0;
- (float)_zoomScale;
- (void)settings:(NSDictionary *)arg0 changedValueForKey:(NSString *)arg1;
- (struct CGSize)_imageSize;
- (UIImage *)wallpaperImage;
- (UIColor *)_computeAverageColor;
- (unsigned int)_colorBoxSize;
- (SBFColorBoxes *)colorBoxes;
- (float)contrastInRect:(struct CGRect)arg0 contrastWithinBoxes:(struct CGSize)arg1 contrastBetweenBoxes:(id)arg2;
- (NSObject *)_averageColorInContentViewRect:(struct CGRect)arg0 smudgeRadius:(struct CGSize)arg1;
- (UIImage *)_blurredImage;
- (NSDictionary *)_imageForBackdropParameters:(struct ?)arg0 includeTint:(char)arg1;
- (UIImage *)_displayedImage;
- (void)setCropRect:(struct CGRect)arg0 zoomScale:(struct CGSize)arg1;
- (float)cropZoomScale;
- (float)contrastInRect:(struct CGRect)arg0;
- (char)isDisplayingWallpaper:(id)arg0 forVariant:(int)arg1 options:(NSDictionary *)arg2;
- (SBFStaticWallpaperView *)initWithFrame:(struct CGRect)arg0 wallpaperImage:(struct CGSize)arg1 variant:(struct CGSize)arg2;
- (void)_setSampleImage:(UIImage *)arg0;
- (NSObject *)_repeatingGradientImageWithSize:(struct CGSize)arg0 scale:(float)arg1;
- (id)_createColorBoxes;
- (void)setColorBoxes:(SBFColorBoxes *)arg0;
- (void)_setupSampleImage:(UIImage *)arg0 treated:(char)arg1;
- (void)_setupContentView;
- (void)_cacheImagesIfNeededTreated:(char)arg0;
- (id)_wallpaperImageForAnalysis;
- (SBFStaticWallpaperView *)initWithFrame:(struct CGRect)arg0 wallpaperImage:(struct CGSize)arg1 treatWallpaper:(id)arg2 variant:(struct CGSize)arg3;
- (void)_setupWallpaperImage:(UIImage *)arg0 treated:(char)arg1;
- (NSString *)_sampleImageKey;
- (NSString *)_displayedImageKey;
- (void)_removeMappedBlurs;
- (NSDictionary *)_mappedImageKeyForParameters:(struct ?)arg0 includingTint:(char)arg1;
- (NSDictionary *)_untintedImageForBackdropParameters:(struct ?)arg0;
- (void)_resetColorBoxes;

@end
