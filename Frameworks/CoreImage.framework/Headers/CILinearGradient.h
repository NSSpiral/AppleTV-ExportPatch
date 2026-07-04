/* Runtime dump - CILinearGradient
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CILinearGradient : CIFilter
{
    CIVector * inputPoint0;
    CIVector * inputPoint1;
    CIColor * inputColor0;
    CIColor * inputColor1;
}

@property (retain, nonatomic) CIVector * inputPoint0;
@property (retain, nonatomic) CIVector * inputPoint1;
@property (retain, nonatomic) CIColor * inputColor0;
@property (retain, nonatomic) CIColor * inputColor1;

+ (NSArray *)customAttributes;

- (CIKernel *)_kernel;
- (void)setInputColor0:(CIColor *)arg0;
- (void)setInputColor1:(CIColor *)arg0;
- (CIColor *)inputColor0;
- (CIColor *)inputColor1;
- (void)setInputPoint0:(CIVector *)arg0;
- (void)setInputPoint1:(CIVector *)arg0;
- (CIVector *)inputPoint0;
- (CIVector *)inputPoint1;
- (void)setDefaults;
- (CIImage *)outputImage;

@end
