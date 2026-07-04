/* Runtime dump - MCAnimationKeyframeVector
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MCAnimationKeyframeVector : MCAnimationKeyframe
{
    struct ? mVector;
}

@property (nonatomic) struct ? vector;

+ (MCAnimationKeyframeVector *)keyframeWithVector:(struct ?)arg0 atTime:(double)arg1 offsetKind:(int)arg2;
+ (MCAnimationKeyframeVector *)keyframeWithVector:(struct ?)arg0 atTime:(double)arg1;

- (void)setVector:(struct ?)arg0;
- (struct ?)vector;
- (void)_copySelfToSnapshot:(NSObject *)arg0;
- (MCAnimationKeyframeVector *)initWithImprint:(NSDictionary *)arg0;
- (NSDictionary *)imprint;

@end
