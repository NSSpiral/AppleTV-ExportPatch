/* Runtime dump - MFComposeSubjectView
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFComposeSubjectView : MFComposeHeaderView <UITextFieldDelegate>
{
    id _delegateRespondsToTextChange;
    id _notifyButtonSelected;
    id _showNotifyButton;
    UITextField * _textField;
    UIButton * _notifyButton;
}

@property (readonly, nonatomic) UITextField * textField;
@property (readonly, nonatomic) UIButton * notifyButton;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)refreshPreferredContentSize;
- (void)notifyButtonClicked:(id)arg0;
- (void)updateNotifyButton;
- (void)setShowNotifyButton:(char)arg0;
- (char)isNotifyButtonSelected;
- (void)setNotifyButtonSelected:(char)arg0;
- (UIButton *)notifyButton;
- (MFComposeSubjectView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)setDelegate:(NSObject *)arg0;
- (void)layoutSubviews;
- (NSObject *)delegate;
- (char)becomeFirstResponder;
- (NSString *)text;
- (void)setText:(NSString *)arg0;
- (char)keyboardInput:(NSObject *)arg0 shouldInsertText:(NSString *)arg1 isMarkedText:(char)arg2;
- (char)endEditing:(char)arg0;
- (char)_canBecomeFirstResponder;
- (void)textChanged:(NSNotification *)arg0;
- (void)textFieldDidResignFirstResponder:(NSObject *)arg0;
- (UITextField *)textField;
- (void)textFieldDidBecomeFirstResponder:(NSObject *)arg0;

@end
