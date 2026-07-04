/* Runtime dump - MCAnimationKeyframe2D
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MCAnimationKeyframe2D : MCAnimationKeyframe
{
    struct CGPoint mPoint;
    struct CGPoint mC1;
    struct CGPoint mC2;
}

@property (nonatomic) struct CGPoint point;
@property (nonatomic) struct CGPoint c1;
@property (nonatomic) struct CGPoint c2;

+ (NSObject *)keyframeWithPoint:(struct CGPoint)arg0 atTime:(double)arg1 offsetKind:(int)arg2;
+ (NSObject *)keyframeWithPoint:(struct CGPoint)arg0 atTime:(double)arg1;

- (NSString *)description;
- (struct CGPoint)point;
- (void)setPoint:(struct CGPoint)arg0;
- (void)_copySelfToSnapshot:(NSObject *)arg0;
- (MCAnimationKeyframe2D *)initWithImprint:(NSDictionary *)arg0;
- (void)setC2:(struct CGPoint)arg0;
- (void)setC1:(struct CGPoint)arg0;
- (struct CGPoint)c1;
- (struct CGPoint)c2;
- (NSDictionary *)imprint;

@end
