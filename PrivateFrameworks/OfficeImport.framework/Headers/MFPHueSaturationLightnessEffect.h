/* Runtime dump - MFPHueSaturationLightnessEffect
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface MFPHueSaturationLightnessEffect : MFPEffect
{
    int mHueChange;
    int mSaturationChange;
    int mLightnessChange;
}

+ (NSString *)GUID;

- (MFPHueSaturationLightnessEffect *)initWithHueChange:(int)arg0 saturationChange:(int)arg1 lightnessChange:(int)arg2;

@end
