/* Runtime dump - SCRCPhotoEvaluatorResults
 * Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface SCRCPhotoEvaluatorResults : NSObject
{
    SCRCPhotoEvaluatorResult * _blurResult;
    SCRCPhotoEvaluatorResult * _colorResult;
    SCRCPhotoEvaluatorResultPeople * _peopleResult;
    SCRCPhotoEvaluatorResult * _luminanceResult;
}

@property (readonly, nonatomic) SCRCPhotoEvaluatorResult * blurResult;
@property (readonly, nonatomic) SCRCPhotoEvaluatorResult * colorResult;
@property (readonly, nonatomic) SCRCPhotoEvaluatorResultPeople * peopleResult;
@property (readonly, nonatomic) SCRCPhotoEvaluatorResult * luminanceResult;

- (void)dealloc;
- (SCRCPhotoEvaluatorResults *)initWithBlurResult:(SCRCPhotoEvaluatorResult *)arg0 colorResult:(SCRCPhotoEvaluatorResult *)arg1 peopleResult:(SCRCPhotoEvaluatorResultPeople *)arg2 luminanceResult:(SCRCPhotoEvaluatorResult *)arg3;
- (SCRCPhotoEvaluatorResult *)blurResult;
- (SCRCPhotoEvaluatorResult *)colorResult;
- (SCRCPhotoEvaluatorResultPeople *)peopleResult;
- (SCRCPhotoEvaluatorResult *)luminanceResult;

@end
