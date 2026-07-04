/* Runtime dump - CABasicAnimation
 * Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CABasicAnimation : CAPropertyAnimation

@property char roundsToInteger;
@property float startAngle;
@property float endAngle;
@property (retain) id fromValue;
@property (retain) id toValue;
@property (retain) id byValue;

+ (NSString *)normalizedAnimationWithKeyPath:(NSString *)arg0 fromValue:(NSValue *)arg1 toValue:(NSValue *)arg2;

- (id)TSD_valueAtTime:(double)arg0 initialValue:(long long)arg1;
- (NSCache *)TSDCAAnimationContextCache;
- (void)p_getValue:(id *)arg0 animationPercent:(double *)arg1 atTime:(double)arg2 initialValue:(long long)arg3 contextCache:(NSObject *)arg4;
- (id)p_valueAtTime:(double)arg0 initialValue:(long long)arg1 contextCache:(NSObject *)arg2;
- (double)p_animationPercentByApplyingTimingFunctionForKeyPath:(NSString *)arg0 atTime:(double)arg1 contextCache:(NSObject *)arg2;
- (double)TSD_animationPercentByApplyingTimingFunctionForKeyPath:(NSString *)arg0 atTime:(double)arg1;
- (NSObject *)p_interpolatedValueFrom:(NSObject *)arg0 to:(NSObject *)arg1 percent:(float)arg2 contextCache:(NSObject *)arg3;
- (void)CA_prepareRenderValue;
- (char)_setCARenderAnimation:(struct Animation *)arg0 layer:(CALayer *)arg1;
- (struct Animation *)_copyRenderAnimationForLayer:(struct Ref<CA::Render::Timing>)arg0;
- (char)roundsToInteger;
- (float)endAngle;
- (double)_timeFunction:(double)arg0;
- (void)setEndAngle:(float)arg0;
- (void)setByValue:(NSValue *)arg0;
- (NSValue *)byValue;
- (NSValue *)fromValue;
- (void)setFromValue:(NSValue *)arg0;
- (void)setToValue:(NSValue *)arg0;
- (NSValue *)toValue;
- (void)setRoundsToInteger:(char)arg0;
- (void)setStartAngle:(float)arg0;
- (float)startAngle;
- (void)applyForTime:(double)arg0 presentationObject:(NSObject *)arg1 modelObject:(NSObject *)arg2;

@end
