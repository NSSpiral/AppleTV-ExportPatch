/* Runtime dump - MFPBrightnessContrastEffect
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface MFPBrightnessContrastEffect : MFPEffect
{
    int mBrightness;
    int mContrast;
}

+ (NSString *)GUID;

- (MFPBrightnessContrastEffect *)initWithBrightness:(int)arg0 contrast:(int)arg1;

@end
