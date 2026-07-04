/* Runtime dump - CIColor
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIColor : NSObject <NSCoding, NSCopying>
{
    void * _priv;
    id _pad;
}

+ (CIColor *)colorWithSRGBRed:(float)arg0 green:(float)arg1 blue:(float)arg2 alpha:(float)arg3;
+ (CIColor *)colorWithSRGBRed:(float)arg0 green:(float)arg1 blue:(float)arg2;
+ (CIColor *)colorWithRed:(float)arg0 green:(float)arg1 blue:(float)arg2;
+ (NSString *)colorWithString:(NSString *)arg0;
+ (UIColor *)colorWithCGColor:(struct CGColor *)arg0;
+ (CIColor *)colorWithRed:(float)arg0 green:(float)arg1 blue:(float)arg2 alpha:(float)arg3;

- (CIColor *)initWithColor:(UIColor *)arg0;
- (struct CGColorSpace *)colorSpace;
- (void)dealloc;
- (CIColor *)initWithCoder:(NSCoder *)arg0;
- (struct CGColor *)CGColor;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (float)alpha;
- (unsigned long)numberOfComponents;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CIColor *)copyWithZone:(struct _NSZone *)arg0;
- (CIColor *)initWithRed:(float)arg0 green:(float)arg1 blue:(float)arg2 alpha:(float)arg3;
- (struct CGColor *)cgColor;
- (CIColor *)initWithString:(NSString *)arg0;
- (CIColor *)initWithCGColor:(struct CGColor *)arg0;
- (float)red;
- (float)green;
- (float)blue;
- (float *)components;
- (void)finalize;
- (NSDictionary *)stringRepresentation;

@end
