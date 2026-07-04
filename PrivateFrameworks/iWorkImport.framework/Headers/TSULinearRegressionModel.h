/* Runtime dump - TSULinearRegressionModel
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSULinearRegressionModel : TSURegressionModel
{
    double * mCoefficients;
    int mNumCoefficients;
    char mAffine;
    double mIntercept;
    double * mCoefficientsStandardErrors;
    double mRSquared;
    double mStandardError;
    double mFStatistic;
    double mDegreesFreedom;
    double mRegressionSumSquares;
    double mErrorSumSquares;
}

- (TSULinearRegressionModel *)initWithMappings:(int)arg0 xs:(double *)arg1 ys:(double *)arg2 xDimension:(int)arg3 makeAffine:(char)arg4 desiredIntercept:(double)arg5;
- (TSULinearRegressionModel *)initAffineWithMappings:(int)arg0 xs:(double *)arg1 ys:(double *)arg2 xDimension:(int)arg3;
- (TSULinearRegressionModel *)initNonAffineWithMappings:(int)arg0 xs:(double *)arg1 ys:(double *)arg2 xDimension:(int)arg3 desiredIntercept:(double)arg4;
- (int)regressionType;
- (int)numCoefficients;
- (double)coefficientAtIndex:(int)arg0;
- (double)coefficientStandardErrorAtIndex:(int)arg0;
- (double)rSquared;
- (double)fStatistic;
- (double)degreesFreedom;
- (double)regressionSumSquares;
- (double)errorSumSquares;
- (double)estimateForX:(double *)arg0;
- (NSArray *)getEquationStringAndBuildSuperscriptRangesArray:(NSArray *)arg0;
- (double)standardError;
- (void)dealloc;

@end
