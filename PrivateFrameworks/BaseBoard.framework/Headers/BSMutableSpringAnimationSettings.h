/* Runtime dump - BSMutableSpringAnimationSettings
 * Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSMutableSpringAnimationSettings : BSSpringAnimationSettings

@property (nonatomic) double delay;
@property (nonatomic) double frameInterval;
@property (retain, nonatomic) CAMediaTimingFunction * timingFunction;
@property (nonatomic) float mass;
@property (nonatomic) float stiffness;
@property (nonatomic) float damping;
@property (nonatomic) float epsilon;

- (void)setStiffness:(float)arg0;
- (void)setDamping:(float)arg0;
- (void)setMass:(float)arg0;
- (void)setDelay:(double)arg0;
- (BSMutableSpringAnimationSettings *)copyWithZone:(struct _NSZone *)arg0;
- (void)setFrameInterval:(double)arg0;
- (void)setTimingFunction:(CAMediaTimingFunction *)arg0;
- (void)setEpsilon:(float)arg0;

@end
