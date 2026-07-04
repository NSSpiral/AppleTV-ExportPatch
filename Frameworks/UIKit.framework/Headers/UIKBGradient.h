/* Runtime dump - UIKBGradient
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBGradient : NSObject <NSCopying>
{
    NSString * _gradientName;
    NSString * _flatColorName;
    NSString * _startColorName;
    NSString * _endColorName;
    NSArray * _colors;
    float _middleLocation;
    float _opacity;
    char _horizontal;
    char _usesRGBColors;
    char _didQueryRGBColors;
}

@property (nonatomic) float opacity;
@property (nonatomic) char horizontal;
@property (readonly, nonatomic) char usesRGBColors;

+ (UIColor *)gradientWithFlatColor:(UIColor *)arg0;
+ (UIKBGradient *)gradientWith3Colors:(id)arg0 middleLocation:(float)arg1;
+ (UIColor *)gradientWithStartColor:(UIColor *)arg0 endColor:(UIColor *)arg1;
+ (NSString *)gradientWithName:(NSString *)arg0;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (UIKBGradient *)copyWithZone:(struct _NSZone *)arg0;
- (float)opacity;
- (void)setOpacity:(float)arg0;
- (void)setHorizontal:(char)arg0;
- (UIKBGradient *)initWithName:(NSString *)arg0;
- (char)horizontal;
- (struct CGGradient *)CGGradient;
- (UIKBGradient *)initWithFlatColor:(UIColor *)arg0;
- (UIKBGradient *)initWithStartColor:(UIColor *)arg0 endColor:(UIColor *)arg1;
- (UIKBGradient *)initWith3Colors:(SASettingSetInvertColors *)arg0 middleLocation:(float)arg1;
- (char)usesRGBColors;

@end
