/* Runtime dump - MFPColorCurveEffect
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface MFPColorCurveEffect : MFPEffect
{
    int mAdjustment;
    int mChannel;
    int mAdjustValue;
}

+ (NSString *)GUID;

- (MFPColorCurveEffect *)initWithAdjustment:(int)arg0 channel:(int)arg1 adjustValue:(int)arg2;

@end
