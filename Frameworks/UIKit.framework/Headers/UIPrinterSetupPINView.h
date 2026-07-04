/* Runtime dump - UIPrinterSetupPINView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPrinterSetupPINView : UIControl <UITextFieldDelegate>
{
    UILabel * _titleLabel;
    UILabel * _enterLabel;
    UIPasscodeField * _passcodeField;
    UITextField * _textEntryField;
    UILabel * _failedLabel;
    UIImageView * _failedBackground;
    int _failedAttemptCount;
}

@property (retain, nonatomic) UILabel * titleLabel;
@property (retain, nonatomic) UILabel * enterLabel;
@property (retain, nonatomic) UIPasscodeField * passcodeField;
@property (retain, nonatomic) UITextField * textEntryField;
@property (retain, nonatomic) UILabel * failedLabel;
@property (retain, nonatomic) UIImageView * failedBackground;
@property (nonatomic) int failedAttemptCount;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (UILabel *)titleLabel;
- (void)textDidChange:(char)arg0;
- (void)setTitleLabel:(UILabel *)arg0;
- (void)setEnterLabel:(UILabel *)arg0;
- (void)setPasscodeField:(UIPasscodeField *)arg0;
- (void)setTextEntryField:(UITextField *)arg0;
- (void)setFailedLabel:(UILabel *)arg0;
- (void)setFailedBackground:(UIImageView *)arg0;
- (UIPrinterSetupPINView *)initWithPrinterName:(NSString *)arg0;
- (void)startPINInput;
- (void)stopPINInput;
- (id)PIN;
- (void)showSuccess:(char)arg0;
- (UILabel *)enterLabel;
- (UIPasscodeField *)passcodeField;
- (UITextField *)textEntryField;
- (UILabel *)failedLabel;
- (UIImageView *)failedBackground;
- (int)failedAttemptCount;
- (void)setFailedAttemptCount:(int)arg0;

@end
