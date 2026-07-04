/* Runtime dump - CIColorPosterize
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIColorPosterize : CIFilter
{
    CIImage * inputImage;
    NSNumber * inputLevels;
}

@property (retain, nonatomic) CIImage * inputImage;
@property (retain, nonatomic) NSNumber * inputLevels;

+ (NSArray *)customAttributes;

- (CIImage *)inputImage;
- (void)setInputImage:(CIImage *)arg0;
- (char)_isIdentity;
- (CIKernel *)_kernel;
- (void)setInputLevels:(NSNumber *)arg0;
- (NSNumber *)inputLevels;
- (void)setDefaults;
- (CIImage *)outputImage;

@end
