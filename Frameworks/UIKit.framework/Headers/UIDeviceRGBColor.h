/* Runtime dump - UIDeviceRGBColor
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDeviceRGBColor : UIColor
{
    float redComponent;
    float greenComponent;
    float blueComponent;
    float alphaComponent;
    struct CGColor * cachedColor;
    long cachedColorOnceToken;
}

- (void)dealloc;
- (struct CGColor *)CGColor;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (UIColor *)colorWithAlphaComponent:(float)arg0;
- (char)getWhite:(float *)arg0 alpha:(float *)arg1;
- (void)set;
- (UIDeviceRGBColor *)copyWithZone:(struct _NSZone *)arg0;
- (char)getRed:(float *)arg0 green:(float *)arg1 blue:(float *)arg2 alpha:(float *)arg3;
- (UIDeviceRGBColor *)initWithHue:(float)arg0 saturation:(float)arg1 brightness:(float)arg2 alpha:(float)arg3;
- (void)setFill;
- (UIDeviceRGBColor *)initWithRed:(float)arg0 green:(float)arg1 blue:(float)arg2 alpha:(float)arg3;
- (float)alphaComponent;
- (void)setStroke;
- (UIDeviceRGBColor *)initWithCGColor:(struct CGColor *)arg0;
- (NSString *)colorSpaceName;
- (struct CGColor *)_createCGColorWithAlpha:(float)arg0;
- (char)getHue:(float *)arg0 saturation:(float *)arg1 brightness:(float *)arg2 alpha:(float *)arg3;

@end
