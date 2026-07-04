/* Runtime dump - OADLinearShade
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADLinearShade : OADShade
{
    float mAngle;
    char mIsAngleOverridden;
    char mScaled;
    char mIsScaledOverridden;
}

+ (OADLinearShade *)defaultProperties;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (OADLinearShade *)copyWithZone:(struct _NSZone *)arg0;
- (char)scaled;
- (void)setScaled:(char)arg0;
- (void)setAngle:(float)arg0;
- (float)angle;
- (char)isAngleOverridden;
- (char)isScaledOverridden;
- (OADLinearShade *)initWithDefaults;

@end
