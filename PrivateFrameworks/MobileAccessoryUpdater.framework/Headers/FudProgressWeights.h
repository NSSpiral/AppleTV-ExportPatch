/* Runtime dump - FudProgressWeights
 * Image: /System/Library/PrivateFrameworks/MobileAccessoryUpdater.framework/MobileAccessoryUpdater
 */

@interface FudProgressWeights : NSObject
{
    float prepareWeight;
    float applyWeight;
    float finishWeight;
}

@property float prepareWeight;
@property float applyWeight;
@property float finishWeight;

- (NSString *)description;
- (FudProgressWeights *)initWithPrepareWeight:(float)arg0 applyWeight:(float)arg1 finishWeight:(float)arg2;
- (double)calculateOverallProgressWithStepProgress:(double)arg0 step:(int)arg1;
- (float)prepareWeight;
- (void)setPrepareWeight:(float)arg0;
- (float)applyWeight;
- (void)setApplyWeight:(float)arg0;
- (float)finishWeight;
- (void)setFinishWeight:(float)arg0;

@end
