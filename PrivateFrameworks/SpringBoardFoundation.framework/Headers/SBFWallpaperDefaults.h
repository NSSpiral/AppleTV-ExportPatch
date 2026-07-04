/* Runtime dump - SBFWallpaperDefaults
 * Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFWallpaperDefaults : NSObject

+ (SBFWallpaperDefaults *)defaults;

- (NSString *)description;
- (char)supportsCroppingForVariant:(int)arg0;
- (struct CGRect)cropRectForVariant:(id)arg0;
- (float)parallaxFactorForVariant:(int)arg0;
- (float)zoomScaleForVariant:(int)arg0;
- (char)isPortraitForVariant:(int)arg0;
- (void)setWallpaperOptions:(NSDictionary *)arg0 forLocations:(int)arg1;
- (void)setCropRect:(struct CGRect)arg0 forLocations:(struct CGSize)arg1;
- (void)setParallaxFactor:(float)arg0 forLocations:(int)arg1;
- (char)magnifyEnabledForVariant:(int)arg0;
- (void)setMagnifyEnabled:(char)arg0 forLocations:(int)arg1;
- (void)setZoomScale:(float)arg0 forLocations:(int)arg1;
- (void)resetParallaxFactorDefaults;
- (void)resetZoomScaleDefaults;
- (void)resetCroppingDefaults;
- (void)resetMagnifyDefaults;
- (void)setSupportsCropping:(char)arg0 forLocations:(int)arg1;
- (void)setPortrait:(char)arg0 forLocations:(int)arg1;
- (void)setName:(NSString *)arg0 forLocations:(int)arg1;
- (void)resetDefaults;
- (void)resetPortraitDefaults;
- (void)resetNameDefaults;
- (id)nameForVariant:(int)arg0;

@end
