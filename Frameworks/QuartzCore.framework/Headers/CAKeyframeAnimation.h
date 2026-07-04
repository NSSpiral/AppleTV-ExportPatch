/* Runtime dump - CAKeyframeAnimation
 * Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAKeyframeAnimation : CAPropertyAnimation

@property (copy) NSArray * values;
@property struct CGPath * path;
@property (copy) NSArray * keyTimes;
@property (copy) NSArray * timingFunctions;
@property (copy) NSString * calculationMode;
@property (copy) NSArray * tensionValues;
@property (copy) NSArray * continuityValues;
@property (copy) NSArray * biasValues;
@property (copy) NSString * rotationMode;

+ (NSString *)normalizedKeyframeAnimationWithKeyPath:(NSString *)arg0;

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
- (NSString *)rotationMode;
- (void)setRotationMode:(NSString *)arg0;
- (NSArray *)tensionValues;
- (void)setTensionValues:(NSArray *)arg0;
- (NSArray *)continuityValues;
- (void)setContinuityValues:(NSArray *)arg0;
- (NSArray *)biasValues;
- (void)setBiasValues:(NSArray *)arg0;
- (NSString *)calculationMode;
- (struct CGPath *)path;
- (void)setCalculationMode:(NSString *)arg0;
- (void)setValues:(NSArray *)arg0;
- (void)setKeyTimes:(NSArray *)arg0;
- (NSArray *)values;
- (NSArray *)keyTimes;
- (void)setPath:(struct CGPath *)arg0;
- (void)setTimingFunctions:(NSArray *)arg0;
- (void)applyForTime:(double)arg0 presentationObject:(NSObject *)arg1 modelObject:(NSObject *)arg2;
- (NSArray *)timingFunctions;

@end
