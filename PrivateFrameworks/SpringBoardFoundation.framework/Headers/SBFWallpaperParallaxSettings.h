/* Runtime dump - SBFWallpaperParallaxSettings
 * Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFWallpaperParallaxSettings : SBFParallaxSettings
{
    float _overhangX;
    float _overhangY;
    float _perspectiveTransform;
}

@property float overhangX;
@property float overhangY;
@property float perspectiveTransform;

+ (SBFWallpaperParallaxSettings *)settingsControllerModule;
+ (struct CGSize)bestWallpaperSizeForParallaxFactor:(float)arg0 portrait:(char)arg1;
+ (struct CGSize)minimumWallpaperSizeForCurrentDevice;
+ (struct CGSize)overhangSizeForCurrentDevice;
+ (struct CGSize)_requiredOverhangSizeForCurrentDevice;
+ (struct CGSize)bestWallpaperSizeForParallaxFactor:(float)arg0;

- (void)setDefaultValues;
- (float)perspectiveTransform;
- (void)setPerspectiveTransform:(float)arg0;
- (void)setOverhangX:(float)arg0;
- (void)setOverhangY:(float)arg0;
- (float)overhangX;
- (float)overhangY;

@end
