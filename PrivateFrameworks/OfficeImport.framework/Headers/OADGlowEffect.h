/* Runtime dump - OADGlowEffect
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADGlowEffect : OADEffect
{
    OADColor * mColor;
    float mRadius;
}

- (void)dealloc;
- (OADGlowEffect *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (OADGlowEffect *)copyWithZone:(struct _NSZone *)arg0;
- (UIColor *)color;
- (void)setColor:(UIColor *)arg0;
- (float)radius;
- (void)setRadius:(float)arg0;

@end
