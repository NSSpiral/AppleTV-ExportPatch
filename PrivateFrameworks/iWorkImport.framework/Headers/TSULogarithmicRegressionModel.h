/* Runtime dump - TSULogarithmicRegressionModel
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSULogarithmicRegressionModel : TSURegressionModel
{
    double * mCoefficients;
    int mNumCoefficients;
    char mAffine;
    double mIntercept;
    double mRSquared;
}

- (TSULogarithmicRegressionModel *)initWithMappings:(int)arg0 xs:(double *)arg1 ys:(double *)arg2 xDimension:(int)arg3 makeAffine:(char)arg4 desiredIntercept:(double)arg5;
- (TSULogarithmicRegressionModel *)initAffineWithMappings:(int)arg0 xs:(double *)arg1 ys:(double *)arg2 xDimension:(int)arg3;
- (TSULogarithmicRegressionModel *)initNonAffineWithMappings:(int)arg0 xs:(double *)arg1 ys:(double *)arg2 xDimension:(int)arg3 desiredIntercept:(double)arg4;
- (int)regressionType;
- (int)numCoefficients;
- (double)coefficientAtIndex:(int)arg0;
- (double)rSquared;
- (double)estimateForX:(double *)arg0;
- (NSArray *)getEquationStringAndBuildSuperscriptRangesArray:(NSArray *)arg0;
- (void)dealloc;

@end
