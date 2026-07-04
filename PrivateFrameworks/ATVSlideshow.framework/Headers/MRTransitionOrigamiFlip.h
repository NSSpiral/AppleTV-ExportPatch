/* Runtime dump - MRTransitionOrigamiFlip
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MRTransitionOrigamiFlip : MRTransition
{
    MROrigamiAnimationPath * mBigSwing;
    MROrigamiAnimationPath * mSideSwing;
}

- (void)cleanup;
- (MRTransitionOrigamiFlip *)initWithTransitionID:(NSString *)arg0;
- (void)renderAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (void)_setupSwingTimings;
- (void)_cleanupSwingTimings;

@end
