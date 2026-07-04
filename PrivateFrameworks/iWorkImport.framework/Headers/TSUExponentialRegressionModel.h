/* Runtime dump - TSUExponentialRegressionModel
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUExponentialRegressionModel : TSURegressionModel
{
    double * mCoefficients;
    int mNumCoefficients;
    char mAffine;
    double mIntercept;
    double mRSquared;
    int mNumSuperscriptRanges;
    NSMutableArray * mSuperscriptRangesArray;
}

- (TSUExponentialRegressionModel *)initWithMappings:(int)arg0 xs:(double *)arg1 ys:(double *)arg2 xDimension:(int)arg3 makeAffine:(char)arg4 desiredIntercept:(double)arg5;
- (TSUExponentialRegressionModel *)initAffineWithMappings:(int)arg0 xs:(double *)arg1 ys:(double *)arg2 xDimension:(int)arg3;
- (TSUExponentialRegressionModel *)initNonAffineWithMappings:(int)arg0 xs:(double *)arg1 ys:(double *)arg2 xDimension:(int)arg3 desiredIntercept:(double)arg4;
- (int)regressionType;
- (int)numCoefficients;
- (double)coefficientAtIndex:(int)arg0;
- (double)rSquared;
- (double)estimateForX:(double *)arg0;
- (NSArray *)getEquationStringAndBuildSuperscriptRangesArray:(NSArray *)arg0;
- (int)numSuperscriptRanges;
- (struct _NSRange)superscriptRangeAtIndex:(int)arg0;
- (void)dealloc;

@end
