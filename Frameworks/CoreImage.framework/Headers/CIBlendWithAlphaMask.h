/* Runtime dump - CIBlendWithAlphaMask
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIBlendWithAlphaMask : CIFilter
{
    CIImage * inputImage;
    CIImage * inputBackgroundImage;
    CIImage * inputMaskImage;
}

@property (retain, nonatomic) CIImage * inputImage;
@property (retain, nonatomic) CIImage * inputBackgroundImage;
@property (retain, nonatomic) CIImage * inputMaskImage;

+ (NSArray *)customAttributes;

- (CIImage *)inputImage;
- (void)setInputImage:(CIImage *)arg0;
- (CIKernel *)_kernel;
- (CIImage *)inputBackgroundImage;
- (void)setInputBackgroundImage:(CIImage *)arg0;
- (id)_kernelNoF;
- (id)_kernelNoB;
- (CIImage *)inputMaskImage;
- (void)setInputMaskImage:(CIImage *)arg0;
- (CIImage *)outputImage;

@end
