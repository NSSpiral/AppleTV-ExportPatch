/* Runtime dump - OADShadowEffect
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADShadowEffect : OADEffect
{
    OADColor * mColor;
    float mBlurRadius;
    float mDistance;
    float mAngle;
}

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (float)blurRadius;
- (void)setBlurRadius:(float)arg0;
- (OADShadowEffect *)initWithType:(int)arg0;
- (UIColor *)color;
- (void)setColor:(UIColor *)arg0;
- (void)setAngle:(float)arg0;
- (float)angle;
- (void)setDistance:(float)arg0;
- (void)setStyleColor:(UIColor *)arg0;
- (OADShadowEffect *)initWithShadowEffect:(NSObject *)arg0 type:(int)arg1;
- (float)distance;

@end
