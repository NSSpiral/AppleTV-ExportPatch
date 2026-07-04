/* Runtime dump - PSUsageSizeHeader
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSUsageSizeHeader : UIView <PSHeaderFooterView>
{
    UILabel * _sizeLabel;
    UILabel * _titleLabel;
    float _height;
}

- (PSUsageSizeHeader *)initWithSpecifier:(PSPhoneNumberSpecifier *)arg0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setSize:(struct CGSize)arg0;
- (float)preferredHeightForWidth:(float)arg0;
- (void)setSizeLabelHidden:(char)arg0;

@end
