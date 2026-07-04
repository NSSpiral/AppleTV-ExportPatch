/* Runtime dump - UIDictationSplitLayoutView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDictationSplitLayoutView : UIDictationView

- (UIDictationSplitLayoutView *)initWithFrame:(struct CGRect)arg0;
- (void)layoutSubviews;
- (void)setState:(int)arg0;
- (void)setRenderConfig:(UIKBRenderConfig *)arg0;
- (void)finishReturnToKeyboard;
- (char)isShowing;
- (void)returnToKeyboard;
- (char)drawsOwnBackground;

@end
