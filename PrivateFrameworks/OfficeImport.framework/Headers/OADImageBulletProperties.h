/* Runtime dump - OADImageBulletProperties
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADImageBulletProperties : OADBulletProperties
{
    OADBlipRef * mImage;
}

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (UIImage *)image;
- (OADImageBulletProperties *)initWithBlipRef:(OADBlipRef *)arg0;

@end
