/* Runtime dump - OADColorChangeEffect
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADColorChangeEffect : OADBlipEffect
{
    OADColor * mFromColor;
    OADColor * mToColor;
}

- (void)dealloc;
- (OADColorChangeEffect *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (OADColorChangeEffect *)copyWithZone:(struct _NSZone *)arg0;
- (void)setFromColor:(UIColor *)arg0;
- (void)setToColor:(UIColor *)arg0;
- (UIColor *)fromColor;
- (UIColor *)toColor;
- (void)setStyleColor:(UIColor *)arg0;

@end
