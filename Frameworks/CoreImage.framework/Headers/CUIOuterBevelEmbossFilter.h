/* Runtime dump - CUIOuterBevelEmbossFilter
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CUIOuterBevelEmbossFilter : CIFilter
{
    CIImage * inputImage;
    NSNumber * inputRadius;
    NSNumber * inputSize;
    NSNumber * inputSoften;
    NSNumber * inputAngle;
    CIColor * inputHighlightColor;
    CIColor * inputShadowColor;
}

@property (retain, nonatomic) CIImage * inputImage;
@property (retain, nonatomic) NSNumber * inputRadius;
@property (retain, nonatomic) NSNumber * inputSize;
@property (retain, nonatomic) NSNumber * inputSoften;
@property (retain, nonatomic) NSNumber * inputAngle;
@property (retain, nonatomic) CIColor * inputHighlightColor;
@property (retain, nonatomic) CIColor * inputShadowColor;

+ (NSArray *)customAttributes;

- (CIImage *)inputImage;
- (void)setInputImage:(CIImage *)arg0;
- (void)setInputRadius:(NSNumber *)arg0;
- (NSNumber *)inputRadius;
- (CIKernel *)_kernel;
- (NSNumber *)inputAngle;
- (void)setInputAngle:(NSNumber *)arg0;
- (id)_kernelC;
- (void)setInputSize:(NSNumber *)arg0;
- (NSNumber *)inputSize;
- (void)setInputSoften:(NSNumber *)arg0;
- (void)setInputHighlightColor:(CIColor *)arg0;
- (void)setInputShadowColor:(CIColor *)arg0;
- (NSNumber *)inputSoften;
- (CIColor *)inputHighlightColor;
- (CIColor *)inputShadowColor;
- (void)setDefaults;
- (CIImage *)outputImage;

@end
