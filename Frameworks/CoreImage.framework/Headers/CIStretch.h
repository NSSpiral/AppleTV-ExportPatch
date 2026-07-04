/* Runtime dump - CIStretch
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIStretch : CIFilter
{
    CIImage * inputImage;
    CIVector * inputPoint;
    CIVector * inputSize;
}

@property (retain, nonatomic) CIImage * inputImage;
@property (retain, nonatomic) CIVector * inputPoint;
@property (retain, nonatomic) CIVector * inputSize;

+ (NSArray *)customAttributes;

- (CIImage *)inputImage;
- (void)setInputImage:(CIImage *)arg0;
- (CIKernel *)_kernel;
- (CIVector *)inputPoint;
- (void)setInputSize:(CIVector *)arg0;
- (CIVector *)inputSize;
- (struct CGRect)computeDOD:(id)arg0;
- (void)setDefaults;
- (void)setInputPoint:(CIVector *)arg0;
- (CIImage *)outputImage;

@end
