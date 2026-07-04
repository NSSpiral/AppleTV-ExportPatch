/* Runtime dump - SCRCPhotoEvaluatorResultLuminance
 * Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface SCRCPhotoEvaluatorResultLuminance : SCRCPhotoEvaluatorResult
{
    float _darknessLevel;
    float _brightnessLevel;
    float _averageLevel;
}

@property (readonly, nonatomic) float darknessLevel;
@property (readonly, nonatomic) float brightnessLevel;
@property (readonly, nonatomic) float averageLevel;

- (NSObject *)humanReadableResult;
- (SCRCPhotoEvaluatorResultLuminance *)initWithDarknessLevel:(float)arg0 brightnessLevel:(float)arg1 averageLevel:(float)arg2;
- (float)darknessLevel;
- (float)brightnessLevel;
- (float)averageLevel;

@end
