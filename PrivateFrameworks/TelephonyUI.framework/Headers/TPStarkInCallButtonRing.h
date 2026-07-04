/* Runtime dump - TPStarkInCallButtonRing
 * Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPStarkInCallButtonRing : UIView
{
    char _dimmed;
    char _selected;
    char _highlighted;
    char _toggledOn;
    UIColor * _fillColor;
}

@property (retain, nonatomic) UIColor * fillColor;
@property (nonatomic) char dimmed;
@property (nonatomic) char selected;
@property (nonatomic) char highlighted;
@property (nonatomic) char toggledOn;

- (void)drawRect:(struct CGRect)arg0;
- (struct CGSize)intrinsicContentSize;
- (void)setHighlighted:(char)arg0;
- (void)setSelected:(char)arg0;
- (void)setFillColor:(UIColor *)arg0;
- (UIColor *)fillColor;
- (char)highlighted;
- (char)selected;
- (void)setDimmed:(char)arg0;
- (char)dimmed;
- (char)toggledOn;
- (void)setToggledOn:(char)arg0;

@end
