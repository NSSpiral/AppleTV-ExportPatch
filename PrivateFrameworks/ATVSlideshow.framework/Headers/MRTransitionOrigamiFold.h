/* Runtime dump - MRTransitionOrigamiFold
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MRTransitionOrigamiFold : MRTransition
{
    MROrigamiAnimationPath * mBigSwing;
    MROrigamiAnimationPath * mSideSwing;
}

- (void)cleanup;
- (MRTransitionOrigamiFold *)initWithTransitionID:(NSString *)arg0;
- (void)renderAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (void)_setupSwingTimings;
- (void)_cleanupSwingTimings;

@end
