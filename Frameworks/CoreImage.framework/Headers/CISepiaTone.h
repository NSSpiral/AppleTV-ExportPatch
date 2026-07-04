/* Runtime dump - CISepiaTone
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CISepiaTone : CIFilter
{
    CIImage * inputImage;
    NSNumber * inputIntensity;
}

@property (retain, nonatomic) CIImage * inputImage;
@property (retain, nonatomic) NSNumber * inputIntensity;

+ (NSArray *)customAttributes;

- (CIImage *)inputImage;
- (void)setInputImage:(CIImage *)arg0;
- (char)_isIdentity;
- (CIKernel *)_kernel;
- (void)setInputIntensity:(NSNumber *)arg0;
- (NSNumber *)inputIntensity;
- (void)setDefaults;
- (CIImage *)outputImage;

@end
