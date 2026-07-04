/* Runtime dump - UISelectionTapRecognizer
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UISelectionTapRecognizer : UITextTapRecognizer
{
    UIResponder<UITextInput> * _textView;
}

@property UIResponder<UITextInput> * textView;

- (void)setState:(int)arg0;
- (void)setTextView:(UIResponder<UITextInput> *)arg0;
- (UIResponder<UITextInput> *)textView;
- (char)isCloseToSelection;

@end
