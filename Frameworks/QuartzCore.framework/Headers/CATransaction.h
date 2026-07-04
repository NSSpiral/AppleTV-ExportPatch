/* Runtime dump - CATransaction
 * Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CATransaction : NSObject

+ (double)inputTime;
+ (void)activateBackground:(char)arg0;
+ (double)commitTime;
+ (void)setCommitTime:(double)arg0;
+ (CALayer *)_implicitAnimationForLayer:(id)arg0 keyPath:(NSString *)arg1;
+ (void)pushAnimator:(id)arg0;
+ (void)popAnimator;
+ (void)setCommitHandler:(id /* block */)arg0;
+ (char)animatesFromModelValues;
+ (void)setAnimatesFromModelValues:(char)arg0;
+ (void)assertInactive;
+ (CAMediaTimingFunction *)animationTimingFunction;
+ (NSString *)valueForKey:(NSMutableDictionary *)arg0;
+ (void)setValue:(NSObject *)arg0 forKey:(NSString *)arg1;
+ (id /* block */)completionBlock;
+ (void)setCompletionBlock:(id /* block */)arg0;
+ (void)flush;
+ (void)synchronize;
+ (void)setAnimationDuration:(double)arg0;
+ (void)lock;
+ (void)unlock;
+ (unsigned int)currentState;
+ (void)setInputTime:(double)arg0;
+ (char)disableActions;
+ (void)setDisableActions:(char)arg0;
+ (void)commit;
+ (double)animationDuration;
+ (void)begin;
+ (void)activate;
+ (void)setAnimationTimingFunction:(id)arg0;
+ (UIDynamicAnimator *)animator;

@end
