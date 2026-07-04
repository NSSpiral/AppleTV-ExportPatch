/* Runtime dump - UIStatusBarViewController
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStatusBarViewController : UIViewController
{
    char _iPhoneWS;
    UIWindow * _window;
    UIView * _statusBar;
    UIClassicStatusBarView * _statusBarBackgroundView;
    char _keyboardVisible;
}

@property (readonly, nonatomic) UIWindow * window;

+ (double)statusBarOrientationAnimationDurationFrom:(int)arg0 to:(int)arg1;

- (void)dealloc;
- (UIWindow *)window;
- (UIStatusBarViewController *)init;
- (void)setStatusBarStyle:(int)arg0 animationParameters:(NSDictionary *)arg1;
- (void)setStatusBarHidden:(char)arg0 animationParameters:(NSDictionary *)arg1;
- (void)setStatusBarOrientation:(int)arg0 animationParameters:(NSDictionary *)arg1;
- (void)loadView;
- (char)isClassicControlWindow:(NSObject *)arg0;
- (void)_updateStatusBarForRotationFromInterfaceOrientation:(int)arg0 toInterfaceOrientation:(int)arg1 style:(int)arg2 hidden:(char)arg3 slideUp:(char)arg4;
- (void)_changeStatusBarOrientationFrom:(int)arg0 toOrientation:(int)arg1;
- (void)_prepareForZoom:(char)arg0;
- (void)_zoom:(char)arg0 animated:(char)arg1;
- (void)_statusBarViewControllerKeyboardWillShow:(NSNotification *)arg0;
- (void)_statusBarViewControllerKeyboardDidHide:(NSNotification *)arg0;
- (void)_statusBarHideAnimationFinished:(id)arg0 finished:(char)arg1 hidden:(char)arg2;
- (void)_updateStatusBarGeometryForRotationFromInterfaceOrientation:(int)arg0 toInterfaceOrientation:(int)arg1 hidden:(char)arg2 slideUp:(char)arg3;
- (void)_changeStatusBarOrientationFinished:(id)arg0 finished:(char)arg1 context:(void *)arg2;
- (void)_finishStatusBarOrientationChange;
- (struct CGSize)_statusBarSizeForOrientation:(int)arg0;

@end
