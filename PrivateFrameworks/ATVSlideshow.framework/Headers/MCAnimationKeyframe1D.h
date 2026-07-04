/* Runtime dump - MCAnimationKeyframe1D
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MCAnimationKeyframe1D : MCAnimationKeyframe
{
    float mValue;
}

@property (nonatomic) float value;

+ (MCAnimationKeyframe1D *)keyframeWithScalar:(float)arg0 atTime:(double)arg1 offsetKind:(int)arg2;
+ (MCAnimationKeyframe1D *)keyframeWithScalar:(float)arg0 atTime:(double)arg1;

- (NSString *)description;
- (float)value;
- (void)setValue:(float)arg0;
- (void)_copySelfToSnapshot:(NSObject *)arg0;
- (MCAnimationKeyframe1D *)initWithImprint:(NSDictionary *)arg0;
- (NSDictionary *)imprint;

@end
