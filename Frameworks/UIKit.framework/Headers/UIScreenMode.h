/* Runtime dump - UIScreenMode
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIScreenMode : NSObject
{
    id _mode;
    char _mainScreen;
}

@property (readonly, nonatomic) struct CGSize size;
@property (readonly, nonatomic) float pixelAspectRatio;
@property char _mainScreen;

+ (UIScreenMode *)_screenModeForDisplayMode:(id)arg0 mainScreen:(char)arg1;

- (struct CGSize)size;
- (NSString *)description;
- (char)_isNTSCOrPAL;
- (float)pixelAspectRatio;
- (int)_displayMode;
- (UIScreenMode *)initWithDisplayMode:(int)arg0 mainScreen:(char)arg1;
- (struct CGSize)_sizeWithLevel:(unsigned int)arg0;
- (char)_mainScreen;
- (void)set_mainScreen:(char)arg0;

@end
