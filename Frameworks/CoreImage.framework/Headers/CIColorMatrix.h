/* Runtime dump - CIColorMatrix
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIColorMatrix : CIFilter
{
    CIImage * inputImage;
    CIVector * inputRVector;
    CIVector * inputGVector;
    CIVector * inputBVector;
    CIVector * inputAVector;
    CIVector * inputBiasVector;
}

@property (retain, nonatomic) CIImage * inputImage;
@property (retain, nonatomic) CIVector * inputRVector;
@property (retain, nonatomic) CIVector * inputGVector;
@property (retain, nonatomic) CIVector * inputBVector;
@property (retain, nonatomic) CIVector * inputAVector;
@property (retain, nonatomic) CIVector * inputBiasVector;

+ (NSArray *)customAttributes;

- (CIImage *)inputImage;
- (void)setInputImage:(CIImage *)arg0;
- (void)setInputRVector:(CIVector *)arg0;
- (void)setInputGVector:(CIVector *)arg0;
- (void)setInputBVector:(CIVector *)arg0;
- (void)setInputAVector:(CIVector *)arg0;
- (void)setInputBiasVector:(CIVector *)arg0;
- (CIVector *)inputRVector;
- (CIVector *)inputGVector;
- (CIVector *)inputBVector;
- (CIVector *)inputAVector;
- (CIVector *)inputBiasVector;
- (void)setDefaults;
- (CIImage *)outputImage;

@end
