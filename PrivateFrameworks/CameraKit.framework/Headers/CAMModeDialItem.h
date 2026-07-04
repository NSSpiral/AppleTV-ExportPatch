/* Runtime dump - CAMModeDialItem
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMModeDialItem : UIView
{
    char _selected;
    NSString * _title;
    UIFont * _font;
    UILabel * __titleLabel;
    UILabel * __selectedTitleLabel;
}

@property (nonatomic) char selected;
@property (copy, nonatomic) NSString * title;
@property (retain, nonatomic) UIFont * font;
@property (readonly, nonatomic) UILabel * _titleLabel;
@property (readonly, nonatomic) UILabel * _selectedTitleLabel;

- (CAMModeDialItem *)initWithFrame:(struct CGRect)arg0;
- (CAMModeDialItem *)initWithCoder:(NSCoder *)arg0;
- (void)layoutSubviews;
- (void)setTitle:(NSString *)arg0;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (NSString *)title;
- (void)setFont:(UIFont *)arg0;
- (void)tintColorDidChange;
- (UIFont *)font;
- (void)setSelected:(char)arg0 animated:(char)arg1;
- (char)isSelected;
- (void)setSelected:(char)arg0;
- (UILabel *)_titleLabel;
- (void).cxx_destruct;
- (void)_commonCAMModeDialItemInitialization;
- (UILabel *)_selectedTitleLabel;

@end
