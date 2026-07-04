/* Runtime dump - CIColorMap
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIColorMap : CIFilter
{
    CIImage * inputImage;
    CIImage * inputGradientImage;
    CIImage * cachedGradientImage;
}

@property (retain, nonatomic) CIImage * inputImage;
@property (retain, nonatomic) CIImage * inputGradientImage;
@property (retain, nonatomic) CIImage * cachedGradientImage;

+ (NSArray *)customAttributes;

- (CIImage *)inputImage;
- (void)setInputImage:(CIImage *)arg0;
- (CIKernel *)_kernel;
- (UIImage *)gradientImage;
- (void)setInputGradientImage:(CIImage *)arg0;
- (CIImage *)inputGradientImage;
- (CIImage *)cachedGradientImage;
- (void)setCachedGradientImage:(CIImage *)arg0;
- (void)dealloc;
- (CIImage *)outputImage;

@end
