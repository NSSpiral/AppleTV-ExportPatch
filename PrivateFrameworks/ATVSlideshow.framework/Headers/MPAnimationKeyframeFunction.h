/* Runtime dump - MPAnimationKeyframeFunction
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MPAnimationKeyframeFunction : MPAnimationKeyframe
{
    double _duration;
    NSString * _function;
    NSDictionary * _functionParameters;
    double _functionTimeOffset;
    double _functionTimeFactor;
    double _innerEaseInControl;
    double _innerEaseOutControl;
}

@property (nonatomic) double duration;
@property (copy, nonatomic) NSString * function;
@property (copy, nonatomic) NSDictionary * functionParameters;
@property (nonatomic) double functionTimeOffset;
@property (nonatomic) double functionTimeFactor;
@property (nonatomic) double innerEaseInControl;
@property (nonatomic) double innerEaseOutControl;

+ (MPAnimationKeyframeFunction *)keyframeFunctionWithFunction:(NSString *)arg0 atTime:(double)arg1 withDuration:(double)arg2;
+ (MPAnimationKeyframeFunction *)keyframeFunctionWithFunction:(NSString *)arg0 atTime:(double)arg1 offsetType:(unsigned int)arg2 withDuration:(double)arg3;

- (void)dealloc;
- (MPAnimationKeyframeFunction *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (double)duration;
- (void)setDuration:(double)arg0;
- (MPAnimationKeyframeFunction *)copyWithZone:(struct _NSZone *)arg0;
- (void)setFunctionTimeOffset:(double)arg0;
- (void)setFunctionTimeFactor:(double)arg0;
- (void)setInnerEaseInControl:(double)arg0;
- (void)setInnerEaseOutControl:(double)arg0;
- (MPAnimationKeyframeFunction *)initKeyframeFunctionWithFunction:(NSString *)arg0 atTime:(double)arg1 offsetType:(unsigned int)arg2 withDuration:(double)arg3;
- (void)setFunction:(NSString *)arg0;
- (void)setFunctionParameters:(NSDictionary *)arg0;
- (NSDictionary *)functionParameters;
- (double)functionTimeOffset;
- (double)functionTimeFactor;
- (double)innerEaseInControl;
- (double)innerEaseOutControl;
- (MCAnimationKeyframe *)keyframe;
- (NSString *)function;

@end
