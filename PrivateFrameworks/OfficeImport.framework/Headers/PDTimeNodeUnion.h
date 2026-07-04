/* Runtime dump - PDTimeNodeUnion
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PDTimeNodeUnion : NSObject
{
    PDAnimateTimeBehavior * mTimeBehavior;
    PDAnimateEffectBehavior * mEffectBehavior;
    PDAnimateMotionBehavior * mMotionBehavior;
    PDAnimateRotateBehavior * mRotateBehavior;
    PDAnimateScaleBehavior * mScaleBehavior;
    PDAnimateColorBehavior * mColorBehavior;
    PDAudioNode * mAudio;
    PDVideoNode * mVideo;
    PDParallelTimeNode * mParallelTimeNodeGroup;
    PDSequentialTimeNode * mSequentialTimeNodeGroup;
    PDSetBehavior * mSetBehavior;
    PDCmdBehavior * mCmdBehavior;
}

- (void)dealloc;
- (PDTimeNodeUnion *)init;
- (void)setVideo:(YTVideo *)arg0;
- (CABehavior *)behavior;
- (id)commonBehavior;
- (PDAnimateTimeBehavior *)timeBehavior;
- (void)setTimeBehavior:(PDAnimateTimeBehavior *)arg0;
- (PDAnimateEffectBehavior *)effectBehavior;
- (void)setEffectBehavior:(PDAnimateEffectBehavior *)arg0;
- (PDAnimateMotionBehavior *)motionBehavior;
- (void)setMotionBehavior:(PDAnimateMotionBehavior *)arg0;
- (PDAnimateRotateBehavior *)rotateBehavior;
- (void)setRotateBehavior:(PDAnimateRotateBehavior *)arg0;
- (PDAnimateScaleBehavior *)scaleBehavior;
- (void)setScaleBehavior:(PDAnimateScaleBehavior *)arg0;
- (PDAnimateColorBehavior *)colorBehavior;
- (void)setColorBehavior:(PDAnimateColorBehavior *)arg0;
- (IKAudioElement *)audio;
- (void)setAudio:(IKAudioElement *)arg0;
- (YTVideo *)video;
- (MCPlugParallel *)parallel;
- (void)setParallel:(MCPlugParallel *)arg0;
- (id)sequential;
- (void)setSequential:(id)arg0;
- (PDCmdBehavior *)cmdBehavior;
- (void)setCmdBehavior:(PDCmdBehavior *)arg0;
- (void)setBehavior:(CABehavior *)arg0;

@end
