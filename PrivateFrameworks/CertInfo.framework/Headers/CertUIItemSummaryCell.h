/* Runtime dump - CertUIItemSummaryCell
 * Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

@interface CertUIItemSummaryCell : UITableViewCell
{
    UIImageView * _itemImageView;
    UIView * _itemTitleView;
    UILabel * _itemTitleLabel;
    UILabel * _itemSubtitleLabel;
}

@property (retain, nonatomic) UIImageView * itemImageView;
@property (retain, nonatomic) UIView * itemTitleView;
@property (retain, nonatomic) UILabel * itemTitleLabel;
@property (retain, nonatomic) UILabel * itemSubtitleLabel;

+ (float)titleOriginX;

- (CertUIItemSummaryCell *)initWithStyle:(int)arg0 reuseIdentifier:(NSString *)arg1;
- (void)setSelected:(char)arg0 animated:(char)arg1;
- (void).cxx_destruct;
- (void)_setupConstraints;
- (void)_setupCell;
- (NSObject *)_profileImageAppropriateForDevice;
- (UIImageView *)itemImageView;
- (UIView *)itemTitleView;
- (UILabel *)itemTitleLabel;
- (UILabel *)itemSubtitleLabel;
- (float)cellHeight;
- (void)setItemImageView:(UIImageView *)arg0;
- (void)setItemTitleView:(UIView *)arg0;
- (void)setItemTitleLabel:(UILabel *)arg0;
- (void)setItemSubtitleLabel:(UILabel *)arg0;

@end
