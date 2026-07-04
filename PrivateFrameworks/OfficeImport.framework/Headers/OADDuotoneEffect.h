/* Runtime dump - OADDuotoneEffect
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADDuotoneEffect : OADBlipEffect
{
    OADColor * mColor1;
    OADColor * mColor2;
    int mTransferMode1;
    int mTransferMode2;
}

- (void)dealloc;
- (OADDuotoneEffect *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (OADDuotoneEffect *)copyWithZone:(struct _NSZone *)arg0;
- (void)setColor1:(UIColor *)arg0;
- (void)setColor2:(UIColor *)arg0;
- (void)setTransferMode1:(int)arg0;
- (void)setTransferMode2:(int)arg0;
- (UIColor *)color1;
- (UIColor *)color2;
- (void)setStyleColor:(UIColor *)arg0;
- (int)transferMode1;
- (int)transferMode2;

@end
