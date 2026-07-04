/* Runtime dump - CIFalseColor
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIFalseColor : CIFilter
{
    CIImage * inputImage;
    CIColor * inputColor0;
    CIColor * inputColor1;
}

@property (retain, nonatomic) CIImage * inputImage;
@property (retain, nonatomic) CIColor * inputColor0;
@property (retain, nonatomic) CIColor * inputColor1;

+ (NSArray *)customAttributes;

- (CIImage *)inputImage;
- (void)setInputImage:(CIImage *)arg0;
- (CIKernel *)_kernel;
- (void)setInputColor0:(CIColor *)arg0;
- (void)setInputColor1:(CIColor *)arg0;
- (CIColor *)inputColor0;
- (CIColor *)inputColor1;
- (void)setDefaults;
- (CIImage *)outputImage;

@end
