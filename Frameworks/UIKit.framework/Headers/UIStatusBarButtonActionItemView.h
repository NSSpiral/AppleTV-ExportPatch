/* Runtime dump - UIStatusBarButtonActionItemView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStatusBarButtonActionItemView : UIStatusBarItemView
{
    UIButton * _button;
    UIButton * _externalButton;
}

- (void)dealloc;
- (char)pointInside:(struct CGPoint)arg0 withEvent:(Event *)arg1;
- (void)layoutSubviews;
- (int)buttonType;
- (float)updateContentsAndWidth;
- (void)_pressButton:(id)arg0;
- (char)usesAdvancedActions;
- (void)_doubleTapButton:(id)arg0;
- (void)_pressAndHoldButton:(id)arg0;
- (id)_createButton;
- (void)_triggerButtonWithAction:(int)arg0;

@end
