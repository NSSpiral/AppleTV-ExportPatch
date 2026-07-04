/* Runtime dump - TPBottomSingleButtonBar
 * Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPBottomSingleButtonBar : TPBottomBar
{
    id _delegate;
    TPButton * _button;
}

+ (UIImage *)_backgroundImage;

- (TPButton *)button;
- (void)dealloc;
- (float)buttonWidth;
- (void)setButton:(TPButton *)arg0 andStyle:(char)arg1;

@end
