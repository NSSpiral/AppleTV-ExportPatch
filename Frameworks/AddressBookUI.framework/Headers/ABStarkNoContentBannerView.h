/* Runtime dump - ABStarkNoContentBannerView
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABStarkNoContentBannerView : UIView
{
    UILabel * _titleLabel;
    UILabel * _subtitleLabel;
}

@property (retain, nonatomic) NSString * titleString;
@property (retain, nonatomic) NSString * subtitleString;
@property (retain) UILabel * titleLabel;
@property (retain) UILabel * subtitleLabel;

- (void)setTitleString:(NSString *)arg0;
- (NSString *)titleString;
- (ABStarkNoContentBannerView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (UILabel *)titleLabel;
- (NSString *)subtitleString;
- (UILabel *)subtitleLabel;
- (void)setTitleLabel:(UILabel *)arg0;
- (void)setSubtitleLabel:(UILabel *)arg0;
- (void)setSubtitleString:(NSString *)arg0;

@end
