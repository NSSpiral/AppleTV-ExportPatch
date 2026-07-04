/* Runtime dump - OADGradientFillStop
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADGradientFillStop : NSObject <NSCopying>
{
    OADColor * mColor;
    float mPosition;
}

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (OADGradientFillStop *)copyWithZone:(struct _NSZone *)arg0;
- (float)position;
- (UIColor *)color;
- (void)setStyleColor:(UIColor *)arg0;
- (OADGradientFillStop *)initWithColor:(UIColor *)arg0 position:(float)arg1;

@end
