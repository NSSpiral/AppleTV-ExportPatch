/* Runtime dump - CISimpleTile
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CISimpleTile : CIFilter
{
    CIImage * inputImage;
}

@property (retain, nonatomic) CIImage * inputImage;

+ (NSArray *)customAttributes;

- (CIImage *)inputImage;
- (void)setInputImage:(CIImage *)arg0;
- (CIKernel *)_kernel;
- (CIImage *)outputImage;

@end
