/* Runtime dump - AXGradientLabel
 * Image: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
 */

@interface AXGradientLabel : UIView
{
    NSString * _text;
    UIFont * _font;
    UIImage * _gradient;
    struct CGColor * _patternColor;
}

@property (retain, nonatomic) NSString * text;
@property (retain, nonatomic) UIFont * font;
@property (retain, nonatomic) UIImage * gradient;

- (void)dealloc;
- (void)drawRect:(struct CGRect)arg0;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (void)setFont:(UIFont *)arg0;
- (NSString *)text;
- (void)setText:(NSString *)arg0;
- (struct CGColor *)_patternColor;
- (UIFont *)font;
- (void)setGradient:(UIImage *)arg0;
- (UIImage *)gradient;

@end
