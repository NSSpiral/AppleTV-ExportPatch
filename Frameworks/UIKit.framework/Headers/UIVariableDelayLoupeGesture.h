/* Runtime dump - UIVariableDelayLoupeGesture
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIVariableDelayLoupeGesture : UILongPressGestureRecognizer
{
    UIResponder<UITextInput> * _textView;
}

@property UIResponder<UITextInput> * textView;

- (void)invalidate;
- (void)setTextView:(UIResponder<UITextInput> *)arg0;
- (void)startTimer;
- (UIResponder<UITextInput> *)textView;
- (char)isCloseToCaret;

@end
