/* Runtime dump - CIColorPolynomial
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIColorPolynomial : CIFilter
{
    CIImage * inputImage;
    CIVector * inputRedCoefficients;
    CIVector * inputGreenCoefficients;
    CIVector * inputBlueCoefficients;
    CIVector * inputAlphaCoefficients;
}

@property (retain, nonatomic) CIImage * inputImage;
@property (retain, nonatomic) CIVector * inputRedCoefficients;
@property (retain, nonatomic) CIVector * inputGreenCoefficients;
@property (retain, nonatomic) CIVector * inputBlueCoefficients;
@property (retain, nonatomic) CIVector * inputAlphaCoefficients;

+ (NSArray *)customAttributes;

- (CIImage *)inputImage;
- (void)setInputImage:(CIImage *)arg0;
- (char)_isIdentity;
- (CIKernel *)_kernel;
- (void)setInputAlphaCoefficients:(CIVector *)arg0;
- (void)setInputBlueCoefficients:(CIVector *)arg0;
- (void)setInputGreenCoefficients:(CIVector *)arg0;
- (void)setInputRedCoefficients:(CIVector *)arg0;
- (CIVector *)inputRedCoefficients;
- (CIVector *)inputGreenCoefficients;
- (CIVector *)inputBlueCoefficients;
- (CIVector *)inputAlphaCoefficients;
- (void)setDefaults;
- (CIImage *)outputImage;

@end
