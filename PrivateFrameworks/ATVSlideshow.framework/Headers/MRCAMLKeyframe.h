/* Runtime dump - MRCAMLKeyframe
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MRCAMLKeyframe : NSObject <NSCopying>
{
    MRCAMLBezierData * spline;
    float value0;
    float value1;
    double time;
}

@property (retain, nonatomic) MRCAMLBezierData * spline;

- (void)dealloc;
- (MRCAMLKeyframe *)copyWithZone:(struct _NSZone *)arg0;
- (MRCAMLBezierData *)spline;
- (void)setSpline:(MRCAMLBezierData *)arg0;

@end
