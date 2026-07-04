/* Runtime dump - TSURegressionModel
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSURegressionModel : NSObject
{
    char mModelValid;
    int mErrorType;
}

- (id)formattedStringWithCoefficient:(double)arg0 locale:(NSObject *)arg1;
- (TSURegressionModel *)initAffineWithMappings:(int)arg0 xs:(double *)arg1 ys:(double *)arg2 xDimension:(int)arg3;
- (TSURegressionModel *)initNonAffineWithMappings:(int)arg0 xs:(double *)arg1 ys:(double *)arg2 xDimension:(int)arg3 desiredIntercept:(double)arg4;
- (int)regressionType;
- (int)numCoefficients;
- (double)coefficientAtIndex:(int)arg0;
- (double)rSquared;
- (double)estimateForX:(double *)arg0;
- (NSArray *)getEquationStringAndBuildSuperscriptRangesArray:(NSArray *)arg0;
- (int)errorType;
- (char)isModelValid;
- (int)numSuperscriptRanges;
- (struct _NSRange)superscriptRangeAtIndex:(int)arg0;
- (NSString *)equationString;

@end
