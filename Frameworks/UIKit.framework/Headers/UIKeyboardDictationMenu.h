/* Runtime dump - UIKeyboardDictationMenu
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardDictationMenu : UIKeyboardMenuView

+ (UIKeyboardDictationMenu *)sharedInstance;
+ (UIKeyboardDictationMenu *)activeInstance;

- (void)hide;
- (void)show;
- (UIKeyboardDictationMenu *)initWithFrame:(struct CGRect)arg0;
- (void)fadeWithDelay:(double)arg0;
- (void)fade;
- (char)usesTable;
- (struct CGSize)preferredSize;
- (char)usesDimmingView;
- (void)performShowAnimation;
- (char)centerPopUpOverKey;
- (void)cleanupForFadeOrHide;

@end
