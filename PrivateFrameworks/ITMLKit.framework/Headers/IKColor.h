/* Runtime dump - IKColor
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKColor : NSObject <NSCopying>
{
    UIColor * _color;
    NSArray * _gradientColors;
    int _colorType;
    int _gradientType;
    int _gradientDirectionType;
}

@property (retain, nonatomic) UIColor * color;
@property (nonatomic) int colorType;
@property (copy, nonatomic) NSArray * gradientColors;
@property (nonatomic) int gradientDirectionType;
@property (nonatomic) int gradientType;

- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (IKColor *)copyWithZone:(struct _NSZone *)arg0;
- (UIColor *)color;
- (void)setColor:(UIColor *)arg0;
- (IKColor *)initWithColor:(UIColor *)arg0;
- (void)setGradientColors:(NSArray *)arg0;
- (void).cxx_destruct;
- (NSArray *)gradientColors;
- (void)setColorType:(int)arg0;
- (void)setGradientType:(int)arg0;
- (void)setGradientDirectionType:(int)arg0;
- (int)colorType;
- (int)gradientType;
- (int)gradientDirectionType;

@end
