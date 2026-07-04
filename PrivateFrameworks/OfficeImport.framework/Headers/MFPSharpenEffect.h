/* Runtime dump - MFPSharpenEffect
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface MFPSharpenEffect : MFPEffect
{
    float mAmount;
    float mRadius;
}

+ (NSString *)GUID;

- (MFPSharpenEffect *)initWithAmount:(float)arg0 radius:(float)arg1;

@end
