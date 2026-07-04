/* Runtime dump - UIPrinterSetupDisplayPINView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPrinterSetupDisplayPINView : UIView
{
    UILabel * _titleLabel;
    UIButton * _nextButton;
}

@property (retain, nonatomic) UILabel * titleLabel;
@property (retain, nonatomic) UIButton * nextButton;

- (UIPrinterSetupDisplayPINView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)layoutSubviews;
- (UILabel *)titleLabel;
- (void)setTitleLabel:(UILabel *)arg0;
- (void)setNextButton:(UIButton *)arg0;
- (void)setMessage:(NSString *)arg0 showButton:(char)arg1;
- (UIButton *)nextButton;

@end
