/* Runtime dump - CAAnimationGroup
 * Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAAnimationGroup : CAAnimation

@property (copy) NSArray * animations;

- (NSString *)TSD_valueForKeyPath:(NSString *)arg0 atTime:(double)arg1 animationCache:(NSObject *)arg2;
- (NSCache *)TSDCAAnimationContextCache;
- (double)p_animationPercentByApplyingTimingFunctionForKeyPath:(NSString *)arg0 atTime:(double)arg1 contextCache:(NSObject *)arg2;
- (double)TSD_animationPercentByApplyingTimingFunctionForKeyPath:(NSString *)arg0 atTime:(double)arg1;
- (char)TSD_containsAnimationForKeyPath:(NSString *)arg0;
- (NSString *)TSD_animationForKeyPath:(NSString *)arg0 atTime:(double)arg1;
- (void)p_getValue:(id *)arg0 animation:(id *)arg1 animationPercent:(double *)arg2 forKeyPath:(NSString *)arg3 atTime:(double)arg4 animationCache:(NSObject *)arg5 contextCache:(NSObject *)arg6;
- (void)CA_prepareRenderValue;
- (unsigned int)_propertyFlagsForLayer:(id)arg0;
- (struct Animation *)_copyRenderAnimationForLayer:(struct Ref<CA::Render::Timing>)arg0;
- (void)setDefaultDuration:(double)arg0;
- (void)setAnimations:(NSArray *)arg0;
- (NSArray *)animations;
- (void)applyForTime:(double)arg0 presentationObject:(NSObject *)arg1 modelObject:(NSObject *)arg2;

@end
