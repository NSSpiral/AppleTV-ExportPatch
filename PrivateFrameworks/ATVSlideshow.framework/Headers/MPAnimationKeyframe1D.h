/* Runtime dump - MPAnimationKeyframe1D
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MPAnimationKeyframe1D : MPAnimationKeyframe
{
    float _scalar;
}

@property (nonatomic) float scalar;

+ (MPAnimationKeyframe1D *)keyframe1DWithScalar:(float)arg0 atTime:(double)arg1;
+ (MPAnimationKeyframe1D *)keyframe1DWithScalar:(float)arg0 atTime:(double)arg1 offsetType:(unsigned int)arg2;

- (MPAnimationKeyframe1D *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (MPAnimationKeyframe1D *)copyWithZone:(struct _NSZone *)arg0;
- (MPAnimationKeyframe1D *)initKeyframe1DWithScalar:(float)arg0 atTime:(double)arg1 offsetType:(unsigned int)arg2;
- (void)setScalar:(float)arg0;
- (float)scalar;
- (MCAnimationKeyframe *)keyframe;

@end
