/* Runtime dump - CIMaskToAlpha
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIMaskToAlpha : CIFilter
{
    CIImage * inputImage;
}

@property (retain, nonatomic) CIImage * inputImage;

+ (NSArray *)customAttributes;

- (CIImage *)inputImage;
- (void)setInputImage:(CIImage *)arg0;
- (CIKernel *)_kernel;
- (void)setDefaults;
- (CIImage *)outputImage;

@end
