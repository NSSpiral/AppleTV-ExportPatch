/* Runtime dump - CIColorBalance
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIColorBalance : CIFilter
{
    CIImage * inputImage;
    CIColor * inputColor;
    NSNumber * inputStrength;
    NSNumber * inputWarmth;
    NSNumber * inputDamping;
}

@property (retain, nonatomic) CIImage * inputImage;
@property (retain, nonatomic) CIColor * inputColor;
@property (retain, nonatomic) NSNumber * inputStrength;
@property (retain, nonatomic) NSNumber * inputWarmth;
@property (retain, nonatomic) NSNumber * inputDamping;

+ (NSArray *)customAttributes;

- (CIImage *)inputImage;
- (void)setInputImage:(CIImage *)arg0;
- (CIKernel *)_kernel;
- (void)setInputColor:(CIColor *)arg0;
- (CIColor *)inputColor;
- (NSNumber *)inputStrength;
- (void)setInputStrength:(NSNumber *)arg0;
- (void)setInputWarmth:(NSNumber *)arg0;
- (NSNumber *)inputWarmth;
- (void)setInputDamping:(NSNumber *)arg0;
- (NSNumber *)inputDamping;
- (void)setDefaults;
- (CIImage *)outputImage;

@end
