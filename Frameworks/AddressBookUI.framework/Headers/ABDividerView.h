/* Runtime dump - ABDividerView
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABDividerView : UIView
{
    char _isVertical;
    UIColor * _defaultColor;
    UIColor * _shadowColor;
    ABSteadfastLineView * _line;
    ABSteadfastLineView * _shadowLine;
    char _disappearsOnHighlight;
}

@property (nonatomic) char vertical;
@property (retain, nonatomic) UIColor * defaultColor;
@property (retain, nonatomic) UIColor * shadowColor;
@property (nonatomic) char disappearsOnHighlight;

- (char)disappearsOnHighlight;
- (void)setDisappearsOnHighlight:(char)arg0;
- (void)setDefaultColor:(UIColor *)arg0;
- (ABDividerView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (void)setShadowColor:(UIColor *)arg0;
- (void)setHighlighted:(char)arg0;
- (UIColor *)shadowColor;
- (char)isVertical;
- (void)setVertical:(char)arg0;
- (UIColor *)defaultColor;

@end
