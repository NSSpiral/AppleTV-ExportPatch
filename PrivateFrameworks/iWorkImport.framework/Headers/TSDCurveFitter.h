/* Runtime dump - TSDCurveFitter
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDCurveFitter : NSObject
{
    double mErrorDistance;
    int mErrorIterations;
}

@property (nonatomic) double errorDistance;
@property (nonatomic) int errorIterations;

+ (TSDCurveFitter *)curveFitter;

- (NSArray *)bezierPathFittingPointArray:(struct ? *)arg0 count:(int)arg1;
- (void)setErrorDistance:(double)arg0;
- (void)setErrorIterations:(int)arg0;
- (void)fitCurveToPointArray:(struct ? *)arg0 count:(int)arg1 bezierCallback:(/* block */ id *)arg2 context:(void *)arg3;
- (void)fitCurveToPoints:(id)arg0 bezierCallback:(/* block */ id *)arg1 context:(void *)arg2;
- (id)bezierPathFittingPoints:(id)arg0;
- (double)errorDistance;
- (int)errorIterations;
- (TSDCurveFitter *)init;

@end
