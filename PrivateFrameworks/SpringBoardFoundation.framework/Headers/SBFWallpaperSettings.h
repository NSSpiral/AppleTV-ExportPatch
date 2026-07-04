/* Runtime dump - SBFWallpaperSettings
 * Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFWallpaperSettings : _UISettings
{
    char _replaceBlurs;
    unsigned int _colorBoxSize;
    int _blurReplacementMode;
}

@property (nonatomic) unsigned int colorBoxSize;
@property (nonatomic) char replaceBlurs;
@property (nonatomic) int blurReplacementMode;

+ (SBFWallpaperSettings *)settingsControllerModule;

- (void)setDefaultValues;
- (void)setColorBoxSize:(unsigned int)arg0;
- (unsigned int)colorBoxSize;
- (char)replaceBlurs;
- (void)setReplaceBlurs:(char)arg0;
- (int)blurReplacementMode;
- (void)setBlurReplacementMode:(int)arg0;

@end
