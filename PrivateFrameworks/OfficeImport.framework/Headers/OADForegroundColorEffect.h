/* Runtime dump - OADForegroundColorEffect
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADForegroundColorEffect : OADBlipEffect
{
    OADColor * mForegroundColor;
}

- (void)dealloc;
- (OADForegroundColorEffect *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (OADForegroundColorEffect *)copyWithZone:(struct _NSZone *)arg0;
- (UIColor *)foregroundColor;
- (void)setForegroundColor:(UIColor *)arg0;
- (void)setStyleColor:(UIColor *)arg0;

@end
