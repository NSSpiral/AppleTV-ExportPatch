/* Runtime dump - FMFTitleView
 * Image: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
 */

@interface FMFTitleView : UIView
{
    UILabel * _titleLabel;
    UILabel * _subtitleLabel;
    FMFLocation * _location;
}

@property (retain, nonatomic) UILabel * titleLabel;
@property (retain, nonatomic) UILabel * subtitleLabel;
@property (retain, nonatomic) FMFLocation * location;

- (FMFTitleView *)initWithFrame:(struct CGRect)arg0;
- (UILabel *)titleLabel;
- (UILabel *)subtitleLabel;
- (FMFLocation *)location;
- (void)setTitleLabel:(UILabel *)arg0;
- (void)setSubtitleLabel:(UILabel *)arg0;
- (void).cxx_destruct;
- (void)_updateLabels:(id)arg0;
- (void)updateLocation:(NSObject *)arg0;
- (void)setLocation:(FMFLocation *)arg0;

@end
