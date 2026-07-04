/* Runtime dump - CAMButtonLabel
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMButtonLabel : UIView
{
    char _useLegibilityView;
    UILabel * __label;
    _UILegibilityView * __legibilityView;
    struct CGSize _contentSize;
}

@property (copy, nonatomic) NSString * text;
@property (retain, nonatomic) UIColor * textColor;
@property (nonatomic) int textAlignment;
@property (readonly, nonatomic) struct CGSize contentSize;
@property (nonatomic) char useLegibilityView;
@property (readonly, retain, nonatomic) UILabel * _label;
@property (readonly, retain, nonatomic) _UILegibilityView * _legibilityView;

- (CAMButtonLabel *)initWithFrame:(struct CGRect)arg0;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (void)setTextAlignment:(int)arg0;
- (struct CGSize)contentSize;
- (void)setTextColor:(UIColor *)arg0;
- (NSString *)text;
- (void)setText:(NSString *)arg0;
- (struct CGSize)intrinsicContentSize;
- (UIColor *)textColor;
- (int)textAlignment;
- (void)setHighlightedTextColor:(UIColor *)arg0;
- (UIColor *)highlightedTextColor;
- (void).cxx_destruct;
- (void)updateToContentSize:(NSObject *)arg0;
- (void)_updateAttributedText;
- (void)_updateInternalContentSize;
- (void)_createLegibilityView;
- (void)_updateViewAlphas;
- (char)isUsingLegibilityView;
- (void)setUseLegibilityView:(char)arg0;
- (UILabel *)_label;
- (_UILegibilityView *)_legibilityView;

@end
