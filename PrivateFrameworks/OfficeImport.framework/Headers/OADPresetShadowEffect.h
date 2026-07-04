/* Runtime dump - OADPresetShadowEffect
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADPresetShadowEffect : OADShadowEffect
{
    int mPresetShadowType;
}

- (OADPresetShadowEffect *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (OADPresetShadowEffect *)copyWithZone:(struct _NSZone *)arg0;
- (void)setPresetShadowType:(int)arg0;
- (int)presetShadowType;
- (NSObject *)equivalentOuterShadowEffect;

@end
