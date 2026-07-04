/* Runtime dump - CIBurstActionClassifier
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIBurstActionClassifier : NSObject
{
    char hasBeenScaled;
    id testVector;
    float testAverageCameraTravelDistance;
    float testMaxRegistrationErrorIntegral;
    float testMaxPeakRegistrationError;
    float testMeanPeakRegistrationError;
    float testBeginningVsEndAEMatrixVsAverageAdjacentAEMatrix;
    float testInOutRatio;
    float testMaxInnerDistance;
    float testAverageRegistrationErrorSkewness;
    float testMinRegionOfInterestSize;
    float testMaxRegistrationErrorSkewness;
    struct __SVMParameters * _svmParameters;
}

@property float testMaxInnerDistance;
@property float testInOutRatio;
@property float testMaxPeakRegistrationError;
@property float testMeanPeakRegistrationError;
@property float testMinRegionOfInterestSize;
@property float testMaxRegistrationErrorSkewness;
@property float testMaxRegistrationErrorIntegral;
@property float testAverageCameraTravelDistance;
@property float testAverageRegistrationErrorSkewness;
@property float testBeginningVsEndAEMatrixVsAverageAdjacentAEMatrix;
@property struct __SVMParameters * svmParameters;

- (void)setSvmParameters:(struct __SVMParameters *)arg0;
- (struct __SVMParameters *)svmParameters;
- (double)computeKernelValueWithSupportVector:(struct CIBurstSupportVector *)arg0;
- (void)scaleVector;
- (float)predictResult;
- (char)isBurstAction;
- (float)testAverageCameraTravelDistance;
- (void)setTestAverageCameraTravelDistance:(float)arg0;
- (float)testMaxRegistrationErrorIntegral;
- (void)setTestMaxRegistrationErrorIntegral:(float)arg0;
- (float)testMaxPeakRegistrationError;
- (void)setTestMaxPeakRegistrationError:(float)arg0;
- (float)testMeanPeakRegistrationError;
- (void)setTestMeanPeakRegistrationError:(float)arg0;
- (float)testBeginningVsEndAEMatrixVsAverageAdjacentAEMatrix;
- (void)setTestBeginningVsEndAEMatrixVsAverageAdjacentAEMatrix:(float)arg0;
- (float)testInOutRatio;
- (void)setTestInOutRatio:(float)arg0;
- (float)testMaxInnerDistance;
- (void)setTestMaxInnerDistance:(float)arg0;
- (float)testAverageRegistrationErrorSkewness;
- (void)setTestAverageRegistrationErrorSkewness:(float)arg0;
- (float)testMinRegionOfInterestSize;
- (void)setTestMinRegionOfInterestSize:(float)arg0;
- (float)testMaxRegistrationErrorSkewness;
- (void)setTestMaxRegistrationErrorSkewness:(float)arg0;
- (CIBurstActionClassifier *)init;
- (CIBurstActionClassifier *)initWithVersion:(int)arg0;

@end
