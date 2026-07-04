/* Runtime dump - UIStatusBarQuietModeItemView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStatusBarQuietModeItemView : UIStatusBarIndicatorItemView
{
    char _hideForAction;
    char _registeredForNotifications;
    char _inactive;
}

- (void)dealloc;
- (void)animationDidStop:(CAAnimation *)arg0 finished:(char)arg1;
- (void)setVisible:(char)arg0;
- (char)updateForNewData:(NSData *)arg0 actions:(int)arg1;
- (void)setVisible:(char)arg0 frame:(struct CGRect)arg1 duration:(struct CGSize)arg2;
- (void)_triggerAction:(NSObject *)arg0;
- (float)_visibleAlpha;

@end
