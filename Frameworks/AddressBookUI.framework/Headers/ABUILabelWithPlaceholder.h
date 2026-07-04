/* Runtime dump - ABUILabelWithPlaceholder
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABUILabelWithPlaceholder : UIView
{
    UILabel * _label;
    char _isPlaceholderActive;
    NSString * _placeholder;
    NSString * _actualText;
    UIColor * _actualTextColor;
}

@property (copy, nonatomic) NSString * text;
@property (copy, nonatomic) NSString * placeholder;
@property (retain, nonatomic) UIColor * textColor;
@property (nonatomic) UIColor * highlightedTextColor;
@property (nonatomic) UIColor * shadowColor;
@property (nonatomic) struct CGSize shadowOffset;
@property (nonatomic) UIFont * font;

- (void)_setActualTextColor:(UIColor *)arg0;
- (void)_setActualText:(NSString *)arg0;
- (float)labelLeftEdgeInset;
- (struct CGRect)_labelFrameForBounds:(id)arg0;
- (ABUILabelWithPlaceholder *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)setFrame:(struct CGRect)arg0;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (void)setTextColor:(UIColor *)arg0;
- (void)setFont:(UIFont *)arg0;
- (NSString *)text;
- (void)setText:(NSString *)arg0;
- (void)setShadowColor:(UIColor *)arg0;
- (void)setShadowOffset:(struct CGSize)arg0;
- (void)sizeToFit;
- (struct CGSize)shadowOffset;
- (UIColor *)shadowColor;
- (UIFont *)font;
- (UILabel *)label;
- (UIColor *)textColor;
- (void)setPlaceholder:(NSString *)arg0;
- (void)setHighlightedTextColor:(UIColor *)arg0;
- (UIColor *)highlightedTextColor;
- (NSString *)placeholder;

@end
