/* Runtime dump - SCRCPhotoEvaluatorResultBlur
 * Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface SCRCPhotoEvaluatorResultBlur : SCRCPhotoEvaluatorResult
{
    float _blurLevel;
}

@property (readonly, nonatomic) float blurLevel;

- (NSObject *)humanReadableResult;
- (SCRCPhotoEvaluatorResultBlur *)initWithBlurLevel:(float)arg0;
- (float)blurLevel;

@end
