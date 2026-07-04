/* Runtime dump - BLCannyEdgeAutoThres
 * Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLCannyEdgeAutoThres : NSObject
{
    int _cols;
    int _rows;
    float _sigma;
    char * _dataPointer;
    int * _smoothedImg;
    int * _deriv_x;
    int * _deriv_y;
    int * _magnitude;
    char * _nonMaxSup;
    float * _anglePointer;
}

- (void)CannyEdge:(char *)arg0 rows:(int)arg1 cols:(int)arg2 output:(char *)arg3 outputAngle:(float *)arg4;
- (void)gaussianSmooth;
- (void)derivative_x_y;
- (void)magnitude_x_y;
- (void)non_max_supp;
- (void)apply_hysteresis:(char *)arg0;
- (void)genGaussianKernel:(float *)arg0;
- (void)follow_edges:(char *)arg0 edgeMagPtr:(int *)arg1 lowVal:(int)arg2;

@end
