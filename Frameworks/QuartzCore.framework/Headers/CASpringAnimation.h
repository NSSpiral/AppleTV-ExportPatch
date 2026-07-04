/* Runtime dump - CASpringAnimation
 * Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CASpringAnimation : CABasicAnimation

@property float mass;
@property float stiffness;
@property float damping;
@property float velocity;

+ (CASpringAnimation *)defaultValueForKey:(NSString *)arg0;

- (char)_setCARenderAnimation:(struct Animation *)arg0 layer:(CALayer *)arg1;
- (unsigned int)_propertyFlagsForLayer:(id)arg0;
- (struct Animation *)_copyRenderAnimationForLayer:(struct Ref<CA::Render::Timing>)arg0;
- (double)_timeFunction:(double)arg0;
- (float)stiffness;
- (double)durationForEpsilon:(double)arg0;
- (void)setVelocity:(float)arg0;
- (void)setStiffness:(float)arg0;
- (void)setDamping:(float)arg0;
- (void)setMass:(float)arg0;
- (float)_solveForInput:(float)arg0;
- (float)damping;
- (float)velocity;
- (float)mass;

@end
