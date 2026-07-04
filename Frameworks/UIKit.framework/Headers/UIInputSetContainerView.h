/* Runtime dump - UIInputSetContainerView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIInputSetContainerView : UIInputSetHostView
{
    UIKBRenderConfig * _renderConfig;
    char _disableGeometryObserverNotifications;
}

+ (char)_shouldHitTestInputViewFirst;
+ (char)_notifyOnExplicitLayout;

- (UIInputSetContainerView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (char)_disableGeometryObserverNotification;
- (void)_setRenderConfig:(NSObject *)arg0;
- (int)textEffectsVisibilityLevel;
- (UIKBRenderConfig *)_inheritedRenderConfig;
- (struct CGRect)_accessoryViewFrame;
- (void)_setAccessoryViewFrame:(struct CGRect)arg0;
- (NSObject *)_inputWindowController;
- (void)performWithoutGeometryObserverNotifications:(id)arg0;

@end
