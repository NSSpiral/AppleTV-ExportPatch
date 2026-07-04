/* Runtime dump - SCRCPhotoEvaluatorResultColor
 * Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface SCRCPhotoEvaluatorResultColor : SCRCPhotoEvaluatorResult
{
    float _redLevel;
    float _blueLevel;
    float _greenLevel;
}

@property (readonly, nonatomic) float redLevel;
@property (readonly, nonatomic) float blueLevel;
@property (readonly, nonatomic) float greenLevel;

- (NSObject *)humanReadableResult;
- (SCRCPhotoEvaluatorResultColor *)initWithRedLevel:(float)arg0 blueLevel:(float)arg1 greenLevel:(float)arg2;
- (float)redLevel;
- (float)blueLevel;
- (float)greenLevel;

@end
