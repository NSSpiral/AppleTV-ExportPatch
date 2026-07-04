/* Runtime dump - UICIColor
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UICIColor : UIColor
{
    CIColor * _ciColor;
    UIColor * _rgbColor;
}

- (void)dealloc;
- (struct CGColor *)CGColor;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (UIColor *)colorWithAlphaComponent:(float)arg0;
- (char)getWhite:(float *)arg0 alpha:(float *)arg1;
- (void)set;
- (UICIColor *)copyWithZone:(struct _NSZone *)arg0;
- (char)getRed:(float *)arg0 green:(float *)arg1 blue:(float *)arg2 alpha:(float *)arg3;
- (void)setFill;
- (void)setStroke;
- (UIColor *)_rgbColor;
- (UICIColor *)initWithCIColor:(UIColor *)arg0;
- (CIColor *)CIColor;

@end
