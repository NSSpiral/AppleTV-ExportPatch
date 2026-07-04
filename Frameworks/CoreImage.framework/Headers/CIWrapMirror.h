/* Runtime dump - CIWrapMirror
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIWrapMirror : CIFilter
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
