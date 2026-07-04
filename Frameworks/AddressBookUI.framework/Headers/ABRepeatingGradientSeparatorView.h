/* Runtime dump - ABRepeatingGradientSeparatorView
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABRepeatingGradientSeparatorView : UIView
{
    UIColor * _startColor;
    UIColor * _endColor;
    int _lineCount;
}

@property (retain, nonatomic) UIColor * startColor;
@property (retain, nonatomic) UIColor * endColor;
@property (nonatomic) int lineCount;
@property (readonly, nonatomic) NSArray * gradientColors;

- (void)setLineCount:(int)arg0;
- (void)_updateGradients;
- (ABRepeatingGradientSeparatorView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (NSArray *)gradientColors;
- (int)lineCount;
- (void)setStartColor:(UIColor *)arg0;
- (void)setEndColor:(UIColor *)arg0;
- (UIColor *)startColor;
- (UIColor *)endColor;

@end
