/* Runtime dump - CIWhitePointAdjust
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIWhitePointAdjust : CIFilter
{
    CIImage * inputImage;
    CIColor * inputColor;
}

@property (retain, nonatomic) CIImage * inputImage;
@property (retain, nonatomic) CIColor * inputColor;

+ (NSArray *)customAttributes;

- (CIImage *)inputImage;
- (void)setInputImage:(CIImage *)arg0;
- (char)_isIdentity;
- (CIKernel *)_kernel;
- (void)setInputColor:(CIColor *)arg0;
- (CIColor *)inputColor;
- (void)setDefaults;
- (CIImage *)outputImage;

@end
