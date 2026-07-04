/* Runtime dump - MFComposeFromView
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFComposeFromView : MFComposeHeaderView
{
    UILabel * _accountLabel;
    UIView * _background;
    char _accountHasUnsafeDomain;
}

@property (nonatomic) char accountHasUnsafeDomain;

- (void)setAccountLabel:(UILabel *)arg0;
- (void)setLabelHighlighted:(char)arg0;
- (struct CGRect)accountLabelRect;
- (void)setAccountHasUnsafeDomain:(char)arg0;
- (NSString *)_accountLabel;
- (void)_setBackgroundVisible:(char)arg0 animated:(char)arg1;
- (char)accountHasUnsafeDomain;
- (MFComposeFromView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)touchesBegan:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesEnded:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesCancelled:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)tintColorDidChange;

@end
