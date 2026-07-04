/* Runtime dump - UIClassicController
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIClassicController : NSObject
{
    UIWindow * _window;
    UIView * _chromeView;
    UIStatusBarViewController * _statusBarViewController;
    UIZoomViewController * _zoomViewController;
    char _hidesClassicChrome;
    char _hidesStatusBarFiller;
}

+ (UIClassicController *)sharedClassicController;

- (void)dealloc;
- (void)_initializeStatusBarOrientation;
- (void)setStatusBarStyle:(int)arg0 animationParameters:(NSDictionary *)arg1;
- (void)setStatusBarHidden:(char)arg0 animationParameters:(NSDictionary *)arg1;
- (void)setStatusBarOrientation:(int)arg0 animationParameters:(NSDictionary *)arg1;
- (UIWindow *)_window;
- (void)_setupWindow;
- (char)isClassicControlWindow:(NSObject *)arg0;
- (void)setZoomed:(char)arg0 animated:(char)arg1;
- (char)_supportsZoom;
- (char)_shouldHideStatusBar;
- (char)isZoomed;
- (void)setZoomed:(char)arg0;
- (void)_classicChangeStatusBarOrientation:(id)arg0;
- (void)_classicChangeStatusBarOrientationFinished:(id)arg0 finished:(char)arg1 context:(NSObject *)arg2;
- (char)drawsStatusBarFiller;
- (void)setDrawsStatusBarFiller:(char)arg0;

@end
