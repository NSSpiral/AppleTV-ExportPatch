/* Runtime dump - UIDictationiPhoneLayoutView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDictationiPhoneLayoutView : UIDictationView

- (UIDictationiPhoneLayoutView *)initWithFrame:(struct CGRect)arg0;
- (void)layoutSubviews;
- (void)setState:(int)arg0;
- (void)setRenderConfig:(UIKBRenderConfig *)arg0;
- (void)finishReturnToKeyboard;
- (char)isShowing;
- (void)returnToKeyboard;
- (id)doneButtonTitleForLightBackground:(char)arg0;

@end
