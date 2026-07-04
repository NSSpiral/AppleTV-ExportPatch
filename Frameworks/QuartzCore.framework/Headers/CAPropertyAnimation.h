/* Runtime dump - CAPropertyAnimation
 * Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAPropertyAnimation : CAAnimation

@property (copy) NSString * keyPath;
@property char additive;
@property char cumulative;
@property (retain) CAValueFunction * valueFunction;

+ (NSString *)animationWithKeyPath:(NSString *)arg0;

- (NSCache *)TSDCAAnimationContextCache;
- (char)TSD_containsAnimationForKeyPath:(NSString *)arg0;
- (NSString *)TSD_animationForKeyPath:(NSString *)arg0 atTime:(double)arg1;
- (double)p_animationPercentFromAnimationTime:(double)arg0 contextCache:(NSObject *)arg1;
- (id)p_adjustedResultWithValue:(id)arg0 contextCache:(NSObject *)arg1;
- (double)TSD_animationPercentFromAnimationTime:(double)arg0;
- (char)_setCARenderAnimation:(struct Animation *)arg0 layer:(CALayer *)arg1;
- (unsigned int)_propertyFlagsForLayer:(id)arg0;
- (char)additive;
- (char)cumulative;
- (void)setCumulative:(char)arg0;
- (char)isCumulative;
- (NSString *)keyPath;
- (void)setAdditive:(char)arg0;
- (void)setKeyPath:(NSString *)arg0;
- (char)isAdditive;
- (void)applyForTime:(double)arg0 presentationObject:(NSObject *)arg1 modelObject:(NSObject *)arg2;
- (CAValueFunction *)valueFunction;
- (void)setValueFunction:(CAValueFunction *)arg0;

@end
