/* Runtime dump - CIVignette
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIVignette : CIFilter
{
    CIImage * inputImage;
    NSNumber * inputIntensity;
    NSNumber * inputRadius;
}

@property (retain, nonatomic) CIImage * inputImage;
@property (retain, nonatomic) NSNumber * inputIntensity;
@property (retain, nonatomic) NSNumber * inputRadius;

+ (NSArray *)customAttributes;

- (CIImage *)inputImage;
- (void)setInputImage:(CIImage *)arg0;
- (void)setInputRadius:(NSNumber *)arg0;
- (char)_isIdentity;
- (NSNumber *)inputRadius;
- (CIKernel *)_kernel;
- (void)setInputIntensity:(NSNumber *)arg0;
- (NSNumber *)inputIntensity;
- (void)setDefaults;
- (CIImage *)outputImage;

@end
