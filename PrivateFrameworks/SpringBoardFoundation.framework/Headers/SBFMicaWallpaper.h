/* Runtime dump - SBFMicaWallpaper
 * Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFMicaWallpaper : SBFProceduralWallpaper
{
    NSBundle * _loadedBundle;
    _UICAPackageView * _packageView;
    UIView * _rootView;
}

+ (NSString *)identifier;
+ (NSDictionary *)presetWallpaperOptions;
+ (NSDictionary *)thumbnailImageForOptions:(NSDictionary *)arg0;

- (void)dealloc;
- (void)layoutSubviews;
- (void)setAnimating:(char)arg0;
- (void)setWallpaperOptions:(NSDictionary *)arg0;
- (void)_unloadView;
- (void)_loadView;

@end
