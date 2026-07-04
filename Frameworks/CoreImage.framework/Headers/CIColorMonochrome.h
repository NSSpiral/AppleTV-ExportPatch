/* Runtime dump - CIColorMonochrome
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIColorMonochrome : CIFilter
{
    CIImage * inputImage;
    CIColor * inputColor;
    NSNumber * inputIntensity;
}

@property (retain, nonatomic) CIImage * inputImage;
@property (retain, nonatomic) CIColor * inputColor;
@property (retain, nonatomic) NSNumber * inputIntensity;

+ (NSArray *)customAttributes;

- (CIImage *)inputImage;
- (void)setInputImage:(CIImage *)arg0;
- (CIKernel *)_kernel;
- (void)setInputIntensity:(NSNumber *)arg0;
- (NSNumber *)inputIntensity;
- (void)setInputColor:(CIColor *)arg0;
- (CIColor *)inputColor;
- (void)setDefaults;
- (CIImage *)outputImage;

@end
