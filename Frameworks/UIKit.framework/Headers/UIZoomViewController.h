/* Runtime dump - UIZoomViewController
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIZoomViewController : UIViewController
{
    UIWindow * _window;
    UIButton * _zoomButton;
}

@property (readonly, nonatomic) UIWindow * window;

- (void)dealloc;
- (UIWindow *)window;
- (UIZoomViewController *)init;
- (UIScreen *)screen;
- (void)loadView;
- (char)isClassicControlWindow:(NSObject *)arg0;
- (void)_setupPositioningAndRotationForInterfaceOrientation:(int)arg0 offscreen:(char)arg1;
- (void)_zoomOrientationChange:(NSDictionary *)arg0;
- (void)_applicationDidFinishLaunching:(NSNotification *)arg0;
- (void)_suspendAnimationStarted:(id)arg0;
- (void)_updateZoomButtonTitle;
- (NSString *)_zoomText:(char)arg0;
- (void)_changeZoom:(id)arg0;
- (void)_zoomOrientationAnimationFinished:(id)arg0 finished:(char)arg1 context:(void *)arg2;
- (void)_getRotationContentSettings:(struct ? *)arg0 forWindow:(NSObject *)arg1;

@end
