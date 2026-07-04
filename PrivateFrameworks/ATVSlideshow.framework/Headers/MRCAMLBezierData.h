/* Runtime dump - MRCAMLBezierData
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MRCAMLBezierData : NSObject
{
    double ax;
    double bx;
    double cx;
    double ay;
    double by;
    double cy;
}

- (MRCAMLBezierData *)initWithControlPoints:(double *)arg0;
- (double)evaluatAtTime:(double)arg0;
- (MRCAMLBezierData *)initWithTimingFunction:(CAMediaTimingFunction *)arg0;
- (double)evaluate_inverseAtTime:(double)arg0;
- (double)sample_x:(double)arg0;
- (double)sample_x_derivative:(double)arg0;
- (double)sample_y:(double)arg0;
- (double)sample_y_derivative:(double)arg0;
- (double)solve_x:(double)arg0 epsilon:(double)arg1;
- (double)solve_y:(double)arg0 epsilon:(double)arg1;

@end
