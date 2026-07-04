/* Runtime dump - CIUnpremultiply
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIUnpremultiply : CIFilter
{
    CIImage * inputImage;
}

@property (retain, nonatomic) CIImage * inputImage;

+ (NSArray *)customAttributes;

- (CIImage *)inputImage;
- (void)setInputImage:(CIImage *)arg0;
- (CIImage *)outputImage;

@end
