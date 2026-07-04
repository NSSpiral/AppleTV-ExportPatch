/* Runtime dump - MPAnimationKeyframe2D
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MPAnimationKeyframe2D : MPAnimationKeyframe
{
    struct CGPoint _point;
}

@property (nonatomic) struct CGPoint point;

+ (NSObject *)keyframe2DWithPoint:(struct CGPoint)arg0 atTime:(double)arg1;
+ (NSObject *)keyframe2DWithPoint:(struct CGPoint)arg0 atTime:(double)arg1 offsetType:(unsigned int)arg2;

- (MPAnimationKeyframe2D *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (MPAnimationKeyframe2D *)copyWithZone:(struct _NSZone *)arg0;
- (struct CGPoint)point;
- (void)setPoint:(struct CGPoint)arg0;
- (MPAnimationKeyframe2D *)initKeyframe2DWithPoint:(struct CGPoint)arg0 atTime:(double)arg1 offsetType:(unsigned int)arg2;
- (MCAnimationKeyframe *)keyframe;

@end
