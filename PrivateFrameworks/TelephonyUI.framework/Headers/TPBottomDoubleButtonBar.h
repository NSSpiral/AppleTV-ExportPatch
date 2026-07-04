/* Runtime dump - TPBottomDoubleButtonBar
 * Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPBottomDoubleButtonBar : TPBottomSingleButtonBar
{
    TPButton * _button2;
}

- (void)dealloc;
- (void)layoutSubviews;
- (TPBottomDoubleButtonBar *)initWithFrame:(struct CGRect)arg0 style:(struct CGSize)arg1;
- (void)setButton:(TPButton *)arg0 andStyle:(char)arg1;
- (void)_layoutButtons;
- (float)_buttonWidth;
- (void)setButton2:(TPButton *)arg0 andStyle:(char)arg1;
- (TPButton *)button2;

@end
