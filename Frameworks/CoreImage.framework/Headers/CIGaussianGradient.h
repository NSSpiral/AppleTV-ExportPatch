/* Runtime dump - CIGaussianGradient
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIGaussianGradient : CIFilter
{
    CIVector * inputCenter;
    CIColor * inputColor0;
    CIColor * inputColor1;
    NSNumber * inputRadius;
}

@property (retain, nonatomic) CIVector * inputCenter;
@property (retain, nonatomic) CIColor * inputColor0;
@property (retain, nonatomic) CIColor * inputColor1;
@property (retain, nonatomic) NSNumber * inputRadius;

+ (NSArray *)customAttributes;

- (void)setInputRadius:(NSNumber *)arg0;
- (NSNumber *)inputRadius;
- (CIKernel *)_kernel;
- (CIVector *)inputCenter;
- (void)setInputCenter:(CIVector *)arg0;
- (void)setInputColor0:(CIColor *)arg0;
- (void)setInputColor1:(CIColor *)arg0;
- (CIColor *)inputColor0;
- (CIColor *)inputColor1;
- (void)setDefaults;
- (CIImage *)outputImage;

@end
