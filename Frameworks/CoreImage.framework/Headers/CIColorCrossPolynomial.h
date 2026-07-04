/* Runtime dump - CIColorCrossPolynomial
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIColorCrossPolynomial : CIFilter
{
    CIImage * inputImage;
    CIVector * inputCoefficients;
    CIVector * inputRedCoefficients;
    CIVector * inputGreenCoefficients;
    CIVector * inputBlueCoefficients;
}

@property (retain, nonatomic) CIImage * inputImage;
@property (retain, nonatomic) CIVector * inputRedCoefficients;
@property (retain, nonatomic) CIVector * inputGreenCoefficients;
@property (retain, nonatomic) CIVector * inputBlueCoefficients;

+ (NSArray *)customAttributes;

- (CIImage *)inputImage;
- (void)setInputImage:(CIImage *)arg0;
- (char)_isIdentity;
- (CIKernel *)_kernel;
- (void)setInputBlueCoefficients:(CIVector *)arg0;
- (void)setInputGreenCoefficients:(CIVector *)arg0;
- (void)setInputRedCoefficients:(CIVector *)arg0;
- (CIVector *)inputRedCoefficients;
- (CIVector *)inputGreenCoefficients;
- (CIVector *)inputBlueCoefficients;
- (void)setDefaults;
- (CIImage *)outputImage;

@end
