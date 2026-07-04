/* Runtime dump - SBFBackdropWallpaperView
 * Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFBackdropWallpaperView : SBFWallpaperView
{
    SBFBackdropStatisticsProvider * _statisticsProvider;
    CABackdropLayer * _layer;
}

@property (nonatomic) char colorSamplingEnabled;

+ (char)_allowsParallax;

- (SBFBackdropWallpaperView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setColorSamplingEnabled:(char)arg0;
- (char)colorSamplingEnabled;
- (UIColor *)_computeAverageColor;

@end
