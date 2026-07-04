/* Runtime dump - UICGColor
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UICGColor : UIColor
{
    struct CGColor * cachedColor;
}

- (void)dealloc;
- (struct CGColor *)CGColor;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (UIColor *)colorWithAlphaComponent:(float)arg0;
- (char)getWhite:(float *)arg0 alpha:(float *)arg1;
- (void)set;
- (UICGColor *)copyWithZone:(struct _NSZone *)arg0;
- (char)getRed:(float *)arg0 green:(float *)arg1 blue:(float *)arg2 alpha:(float *)arg3;
- (void)setFill;
- (float)alphaComponent;
- (void)setStroke;
- (UICGColor *)initWithCGColor:(struct CGColor *)arg0;
- (NSString *)colorSpaceName;
- (char)isPatternColor;

@end
