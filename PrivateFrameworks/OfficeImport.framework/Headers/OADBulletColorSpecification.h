/* Runtime dump - OADBulletColorSpecification
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADBulletColorSpecification : OADBulletColor
{
    OADColor * mColor;
}

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (UIColor *)color;
- (OADBulletColorSpecification *)initWithBulletColor:(UIColor *)arg0;

@end
