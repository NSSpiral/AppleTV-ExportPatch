/* Runtime dump - CertUIKeyValueView
 * Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

@interface CertUIKeyValueView : UIView
{
    float _preferredValueLabelOriginX;
    UILabel * _keyLabel;
    UILabel * _valueLabel;
    UIImageView * _verifiedImageView;
    UILabel * _verifiedLabel;
}

@property (nonatomic) float preferredValueLabelOriginX;
@property (retain, nonatomic) UILabel * keyLabel;
@property (retain, nonatomic) UILabel * valueLabel;
@property (retain, nonatomic) UIImageView * verifiedImageView;
@property (retain, nonatomic) UILabel * verifiedLabel;

+ (float)defaultPreferredValueLabelOriginX;

- (UILabel *)valueLabel;
- (CertUIKeyValueView *)initWithFrame:(struct CGRect)arg0;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (UIFont *)titleFont;
- (void).cxx_destruct;
- (UILabel *)keyLabel;
- (void)setKeyLabel:(UILabel *)arg0;
- (UIFont *)detailFont;
- (float)preferredValueLabelOriginX;
- (UILabel *)verifiedLabel;
- (UIImageView *)verifiedImageView;
- (UIColor *)verifiedColor;
- (UIFont *)verifiedFont;
- (void)setKey:(NSString *)arg0 value:(NSObject *)arg1;
- (void)setHighlightTextColor:(UIColor *)arg0;
- (void)setCheckmarkLabelText:(NSString *)arg0 checkmarkLabelColor:(UIColor *)arg1 showCheckmark:(char)arg2;
- (void)_createVerifiedComponentsIfNeeded;
- (void)setItemDetail:(CertUIItemDetail *)arg0;
- (void)setPreferredValueLabelOriginX:(float)arg0;
- (void)setVerifiedImageView:(UIImageView *)arg0;
- (void)setVerifiedLabel:(UILabel *)arg0;
- (void)setValueLabel:(UILabel *)arg0;

@end
