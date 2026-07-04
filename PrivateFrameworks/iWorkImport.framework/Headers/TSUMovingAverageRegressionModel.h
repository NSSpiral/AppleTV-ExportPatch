/* Runtime dump - TSUMovingAverageRegressionModel
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUMovingAverageRegressionModel : TSURegressionModel
{
    int mNumTrendPoint;
    double * mTrendXValues;
    double * mTrendYValues;
}

- (TSUMovingAverageRegressionModel *)initAffineWithMappings:(int)arg0 xs:(double *)arg1 ys:(double *)arg2 xDimension:(int)arg3;
- (TSUMovingAverageRegressionModel *)initNonAffineWithMappings:(int)arg0 xs:(double *)arg1 ys:(double *)arg2 xDimension:(int)arg3 desiredIntercept:(double)arg4;
- (int)regressionType;
- (int)numCoefficients;
- (double)coefficientAtIndex:(int)arg0;
- (double)rSquared;
- (double)estimateForX:(double *)arg0;
- (NSArray *)getEquationStringAndBuildSuperscriptRangesArray:(NSArray *)arg0;
- (int)numSuperscriptRanges;
- (struct _NSRange)superscriptRangeAtIndex:(int)arg0;
- (NSString *)equationString;
- (TSUMovingAverageRegressionModel *)initWithMappings:(int)arg0 xs:(double *)arg1 ys:(double *)arg2 numPeriod:(int)arg3;
- (int)numTrendPoint;
- (double)trendXValueAtIndex:(int)arg0;
- (double)trendYValueAtIndex:(int)arg0;
- (void)dealloc;

@end
