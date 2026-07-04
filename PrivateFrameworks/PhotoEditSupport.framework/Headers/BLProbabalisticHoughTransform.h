/* Runtime dump - BLProbabalisticHoughTransform
 * Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLProbabalisticHoughTransform : NSObject
{
    int _cols;
    int _rows;
    float _rho;
    float _theta;
    int _threshold;
    int _lineLength;
    int _lineGap;
    int _numGoodLines;
}

- (struct ? *)houghLinesProbabalistic:(float)arg0 rows:(int)arg1 cols:(int)arg2 numLines:(float)arg3;
- (void)leastSquareSmooth:(struct ? *)arg0;

@end
