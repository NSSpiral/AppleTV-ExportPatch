/* Runtime dump - CIBloom
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIBloom : CIFilter
{
    CIImage * inputImage;
    NSNumber * inputRadius;
    NSNumber * inputIntensity;
}

@property (retain, nonatomic) CIImage * inputImage;
@property (retain, nonatomic) NSNumber * inputRadius;
@property (retain, nonatomic) NSNumber * inputIntensity;

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
