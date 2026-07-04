/* Runtime dump - MRAnimationPathPhysics
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MRAnimationPathPhysics : MCAnimationPathPhysics
{
    float mBaseValue;
    float mDeltaValue;
    float mVelocity;
    double mTime;
}

@property (nonatomic) float baseValue;
@property (nonatomic) float velocity;

- (void)setVelocity:(float)arg0;
- (float)velocity;
- (MRAnimationPathPhysics *)initWithMCAnimationPath:(NSString *)arg0;
- (void)setBaseValue:(float)arg0;
- (float)computeValueForTime:(double)arg0 withContext:(NSObject *)arg1;
- (float)baseValue;

@end
