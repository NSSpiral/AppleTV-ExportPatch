/* Runtime dump - SBFBackdropStatisticsProvider
 * Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFBackdropStatisticsProvider : NSObject
{
    SBFWallpaperView * _wallpaperView;
}

@property SBFWallpaperView * wallpaperView;

- (void)backdropLayerStatisticsDidChange:(NSDictionary *)arg0;
- (SBFWallpaperView *)wallpaperView;
- (void)setWallpaperView:(SBFWallpaperView *)arg0;

@end
