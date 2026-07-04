/* Runtime dump - CIVignetteEffect
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIVignetteEffect : CIFilter
{
    CIImage * inputImage;
    CIVector * inputCenter;
    NSNumber * inputRadius;
    NSNumber * inputIntensity;
    NSNumber * inputFalloff;
}

@property (retain, nonatomic) CIImage * inputImage;
@property (retain, nonatomic) CIVector * inputCenter;
@property (retain, nonatomic) NSNumber * inputRadius;
@property (retain, nonatomic) NSNumber * inputIntensity;
@property (retain, nonatomic) NSNumber * inputFalloff;

+ (NSArray *)customAttributes;

- (CIImage *)inputImage;
- (void)setInputImage:(CIImage *)arg0;
- (void)setInputRadius:(NSNumber *)arg0;
- (char)_isIdentity;
- (NSNumber *)inputRadius;
- (CIVector *)inputCenter;
- (void)setInputCenter:(CIVector *)arg0;
- (void)setInputIntensity:(NSNumber *)arg0;
- (NSNumber *)inputIntensity;
- (void)setInputFalloff:(NSNumber *)arg0;
- (CIKernel *)_poskernel;
- (CIKernel *)_negkernel;
- (NSNumber *)inputFalloff;
- (void)setDefaults;
- (CIImage *)outputImage;

@end
