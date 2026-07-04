/* Runtime dump - UIDocumentPasswordView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDocumentPasswordView : UIView <UITextFieldDelegate>
{
    UIImageView * _iconView;
    UIDocumentPasswordField * _passwordTextField;
    UILabel * _label;
    NSObject<UIDocumentPasswordViewDelegate> * passwordDelegate;
}

@property (nonatomic) NSObject<UIDocumentPasswordViewDelegate> * passwordDelegate;
@property (readonly, nonatomic) UITextField * passwordField;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)drawRect:(struct CGRect)arg0;
- (void)layoutSubviews;
- (char)_canDrawContent;
- (void)textFieldDidBeginEditing:(UITextField *)arg0;
- (void)textFieldDidEndEditing:(UITextField *)arg0;
- (UITextField *)passwordField;
- (UIDocumentPasswordView *)initWithDocumentName:(NSString *)arg0;
- (void)setPasswordDelegate:(NSObject<UIDocumentPasswordViewDelegate> *)arg0;
- (UIFont *)_labelFont;
- (UIColor *)_labelTextColor;
- (void)_passwordEntered:(id)arg0;
- (struct CGRect)_iconRectForContainerRect:(NSObject *)arg0;
- (float)_labelHorizontalOffset;
- (float)_textFieldWidth;
- (NSObject<UIDocumentPasswordViewDelegate> *)passwordDelegate;

@end
