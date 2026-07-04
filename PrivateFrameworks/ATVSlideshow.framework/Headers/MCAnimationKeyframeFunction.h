/* Runtime dump - MCAnimationKeyframeFunction
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MCAnimationKeyframeFunction : MCAnimationKeyframe
{
    NSString * mFunction;
    NSDictionary * mFunctionParameters;
    float mInnerEaseInControl;
    float mInnerEaseOutControl;
    double mDuration;
    double mFunctionTimeOffset;
    double mFunctionTimeFactor;
}

@property (nonatomic) double duration;
@property (copy, nonatomic) NSString * function;
@property (retain, nonatomic) NSDictionary * functionParameters;
@property (nonatomic) double functionTimeOffset;
@property (nonatomic) double functionTimeFactor;
@property (nonatomic) float innerEaseInControl;
@property (nonatomic) float innerEaseOutControl;

+ (MCAnimationKeyframeFunction *)keyframeWithFunction:(NSString *)arg0 atTime:(double)arg1 offsetKind:(int)arg2 forDuration:(double)arg3;

- (MCAnimationKeyframeFunction *)init;
- (NSString *)description;
- (double)duration;
- (void)setDuration:(double)arg0;
- (void)setFunctionTimeOffset:(double)arg0;
- (void)setFunctionTimeFactor:(double)arg0;
- (void)setInnerEaseInControl:(float)arg0;
- (void)setInnerEaseOutControl:(float)arg0;
- (void)setFunction:(NSString *)arg0;
- (void)setFunctionParameters:(NSDictionary *)arg0;
- (NSDictionary *)functionParameters;
- (double)functionTimeOffset;
- (double)functionTimeFactor;
- (float)innerEaseInControl;
- (float)innerEaseOutControl;
- (void)demolish;
- (void)_copySelfToSnapshot:(NSObject *)arg0;
- (MCAnimationKeyframeFunction *)initWithImprint:(NSDictionary *)arg0;
- (NSString *)function;
- (NSDictionary *)imprint;

@end
