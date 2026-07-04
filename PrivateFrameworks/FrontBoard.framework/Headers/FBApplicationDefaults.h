/* Runtime dump - FBApplicationDefaults
 * Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBApplicationDefaults : NSObject
{
    int _interfaceOrientation;
    int _backgroundStyle;
    int _statusBarStyle;
    char _statusBarHidden;
    char _statusBarHiddenWhenVerticallyCompact;
}

@property (nonatomic) int interfaceOrientation;
@property (nonatomic) int statusBarStyle;
@property (nonatomic) int backgroundStyle;
@property (nonatomic) char statusBarHidden;
@property (nonatomic) char statusBarHiddenWhenVerticallyCompact;

- (FBApplicationDefaults *)init;
- (int)interfaceOrientation;
- (char)statusBarHidden;
- (int)statusBarStyle;
- (void)setStatusBarStyle:(int)arg0;
- (void)setStatusBarHidden:(char)arg0;
- (void)setInterfaceOrientation:(int)arg0;
- (void)setBackgroundStyle:(int)arg0;
- (int)backgroundStyle;
- (char)statusBarHiddenWhenVerticallyCompact;
- (void)setStatusBarHiddenWhenVerticallyCompact:(char)arg0;

@end
