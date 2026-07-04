/* Runtime dump - ICSColor
 * Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSColor : NSObject <NSCoding>
{
    unsigned char _red;
    unsigned char _green;
    unsigned char _blue;
}

+ (char)colorDetailsAreEffectivelyDifferentFirstColor:(UIColor *)arg0 secondColor:(UIColor *)arg1 firstSymbolicName:(NSString *)arg2 secondSymbolicName:(NSString *)arg3;
+ (ICSColor *)symbolicColorForLegacyRGB:(id)arg0;

- (ICSColor *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (unsigned char)red;
- (unsigned char)green;
- (unsigned char)blue;
- (ICSColor *)initWithRed:(unsigned char)arg0 green:(unsigned char)arg1 blue:(unsigned char)arg2;

@end
