/* Runtime dump - MFComposeMultiView
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFComposeMultiView : MFComposeHeaderView
{
    UILabel * _accountLabel;
    MFHeaderLabelView * _imageSizeHeaderLabelView;
    UILabel * _imageSizeLabel;
    UILabel * _placeholderImageSizeLabel;
    char _imageSizeShown;
    char _accountHasUnsafeDomain;
    char _accountAutoselected;
}

@property (nonatomic) char accountAutoselected;
@property (nonatomic) char accountHasUnsafeDomain;

- (void)refreshPreferredContentSize;
- (void)setImageSizeDescription:(NSString *)arg0;
- (void)setShowsImageSize:(char)arg0;
- (void)setAccountHasUnsafeDomain:(char)arg0;
- (void)setAccountAutoselected:(char)arg0;
- (char)accountHasUnsafeDomain;
- (UILabel *)accountLabel;
- (UILabel *)imageSizeLabel;
- (MFHeaderLabelView *)imageSizeHeaderLabelView;
- (UILabel *)placeholderImageSizeLabel;
- (char)isAccountAutoselected;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setAccountDescription:(NSString *)arg0;
- (UIColor *)labelColor;

@end
