/* Runtime dump - UIKeyboardButton
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardButton : UIButton
{
    int _keyboardButtonStyle;
}

@property (readonly, nonatomic) int keyboardButtonStyle;

- (UIKeyboardButton *)initWithKeyboardButtonStyle:(int)arg0;
- (int)keyboardButtonStyle;

@end
