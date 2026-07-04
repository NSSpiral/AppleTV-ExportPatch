/* Runtime dump - OADSolidFill
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADSolidFill : OADFill
{
    OADColor * mColor;
    char mIsColorOverridden;
}

+ (OADSolidFill *)defaultProperties;
+ (OADSolidFill *)whiteFill;
+ (OADSolidFill *)blackFill;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (OADSolidFill *)copyWithZone:(struct _NSZone *)arg0;
- (UIColor *)color;
- (void)setColor:(UIColor *)arg0;
- (char)isColorOverridden;
- (void)setStyleColor:(UIColor *)arg0;
- (OADSolidFill *)initWithDefaults;

@end
