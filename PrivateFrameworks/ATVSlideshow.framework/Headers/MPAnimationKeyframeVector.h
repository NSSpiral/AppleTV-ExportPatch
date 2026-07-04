/* Runtime dump - MPAnimationKeyframeVector
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MPAnimationKeyframeVector : MPAnimationKeyframe
{
    MPVector * _vector;
}

@property (copy, nonatomic) MPVector * vector;

+ (MPAnimationKeyframeVector *)keyframeVectorWithVector:(MPVector *)arg0 atTime:(double)arg1;
+ (MPAnimationKeyframeVector *)keyframeVectorWithVector:(MPVector *)arg0 atTime:(double)arg1 offsetType:(unsigned int)arg2;

- (void)dealloc;
- (MPAnimationKeyframeVector *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (MPAnimationKeyframeVector *)copyWithZone:(struct _NSZone *)arg0;
- (void)setVector:(MPVector *)arg0;
- (MPVector *)vector;
- (MPAnimationKeyframeVector *)initKeyframeVectorWithVector:(MPVector *)arg0 atTime:(double)arg1 offsetType:(unsigned int)arg2;
- (MCAnimationKeyframe *)keyframe;

@end
