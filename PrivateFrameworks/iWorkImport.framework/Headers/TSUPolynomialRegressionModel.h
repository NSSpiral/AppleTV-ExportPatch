/* Runtime dump - TSUPolynomialRegressionModel
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUPolynomialRegressionModel : TSURegressionModel
{
    double * mCoefficients;
    int mNumCoefficients;
    char mAffine;
    double mIntercept;
    double mRSquared;
    int mNumSuperscriptRanges;
    NSMutableArray * mSuperscriptRangesArray;
}

- (int)regressionType;
- (int)numCoefficients;
- (double)coefficientAtIndex:(int)arg0;
- (double)rSquared;
- (double)estimateForX:(double *)arg0;
- (NSArray *)getEquationStringAndBuildSuperscriptRangesArray:(NSArray *)arg0;
- (int)numSuperscriptRanges;
- (struct _NSRange)superscriptRangeAtIndex:(int)arg0;
- (TSUPolynomialRegressionModel *)initWithMappings:(int)arg0 xs:(double *)arg1 ys:(double *)arg2 xOrder:(int)arg3 makeAffine:(char)arg4 desiredIntercept:(double)arg5;
- (double)estimateFor1DX:(double)arg0;
- (TSUPolynomialRegressionModel *)initAffineWithMappings:(int)arg0 xs:(double *)arg1 ys:(double *)arg2 xOrder:(int)arg3;
- (TSUPolynomialRegressionModel *)initNonAffineWithMappings:(int)arg0 xs:(double *)arg1 ys:(double *)arg2 xOrder:(int)arg3 desiredIntercept:(double)arg4;
- (void)dealloc;

@end
