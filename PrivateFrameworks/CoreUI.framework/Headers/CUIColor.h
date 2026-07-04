/* Runtime dump - CUIColor
 * Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIColor : NSObject <NSCopying>
{
    struct CGColor * _cgColor;
}

@property (readonly, nonatomic) struct CGColor * CGColor;

+ (UIColor *)colorWithCGColor:(struct CGColor *)arg0;
+ (UIColor *)colorWithCIColor:(UIColor *)arg0;

- (void)dealloc;
- (struct CGColor *)CGColor;
- (NSString *)description;
- (CUIColor *)copyWithZone:(struct _NSZone *)arg0;
- (CUIColor *)initWithCGColor:(struct CGColor *)arg0;
- (CUIColor *)initWithCIColor:(UIColor *)arg0;
- (NSObject *)colorUsingCGColorSpace:(struct CGColorSpace *)arg0;

@end
