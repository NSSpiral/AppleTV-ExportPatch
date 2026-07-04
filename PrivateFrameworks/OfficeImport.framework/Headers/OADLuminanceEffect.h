/* Runtime dump - OADLuminanceEffect
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADLuminanceEffect : OADBlipEffect
{
    float mBrightness;
    float mContrast;
}

- (OADLuminanceEffect *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (OADLuminanceEffect *)copyWithZone:(struct _NSZone *)arg0;
- (void)setContrast:(float)arg0;
- (void)setBrightness:(float)arg0;
- (float)brightness;
- (float)contrast;

@end
