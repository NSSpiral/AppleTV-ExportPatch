/* Runtime dump - UIStatusBarWindow
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStatusBarWindow : UIWindow
{
    UIStatusBar * _statusBar;
    int _orientation;
    UIStatusBarCorners * _topCorners;
    float _topCornersOffset;
    UIStatusBarCorners * _bottomCorners;
    char _cornersHidden;
}

+ (char)_isSystemWindow;
+ (char)isIncludedInClassicJail;
+ (struct CGRect)_defaultStatusBarSceneReferenceBounds;
+ (struct CGRect)_defaultStatusBarSceneBoundsForOrientation:(id)arg0;
+ (struct CGRect)_defaultStatusBarSceneBounds;
+ (struct CGRect)statusBarWindowFrame;

- (UIStatusBarWindow *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (NSObject *)hitTest:(struct CGPoint)arg0 withEvent:(Event *)arg1;
- (void)setStatusBar:(UIStatusBar *)arg0;
- (void)setOrientation:(int)arg0 animationParameters:(NSDictionary *)arg1;
- (struct CGRect)_sceneReferenceBounds;
- (int)orientation;
- (char)_shouldZoom;
- (char)_canActAsKeyWindowForScreen:(NSObject *)arg0;
- (struct CGRect)_sceneBounds;
- (void)_updateTransformLayerForClassicPresentation;
- (char)_disableGroupOpacity;
- (char)_isStatusBarWindow;
- (char)_disableViewScaling;
- (struct CGRect)statusBarWindowFrame;
- (void)_rotate;
- (void)setCornersHidden:(char)arg0 animationParameters:(NSDictionary *)arg1;
- (void)setTopCornerStyle:(int)arg0 topCornersOffset:(float)arg1 bottomCornerStyle:(int)arg2 animationParameters:(NSDictionary *)arg3;

@end
