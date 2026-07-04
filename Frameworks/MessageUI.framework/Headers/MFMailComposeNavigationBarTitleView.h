/* Runtime dump - MFMailComposeNavigationBarTitleView
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMailComposeNavigationBarTitleView : UIView
{
    UILabel * _titleLabel;
    UILabel * _subtitleLabel;
    unsigned int _style;
}

@property (copy, nonatomic) NSString * title;

- (void)setSubtitleText:(NSString *)arg0 withStyle:(unsigned int)arg1;
- (UIColor *)_subtitleTextColor;
- (float)_verticalOffsetForSubtitleWhenMini:(char)arg0;
- (MFMailComposeNavigationBarTitleView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setTitle:(NSString *)arg0;
- (NSString *)title;

@end
