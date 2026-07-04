/* Runtime dump - CUIOuterGlowOrShadowFilter
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CUIOuterGlowOrShadowFilter : CIFilter
{
    CIImage * inputImage;
    CIVector * inputOffset;
    NSNumber * inputRange;
    NSNumber * inputRadius;
    NSNumber * inputSize;
    NSNumber * inputSpread;
    CIColor * inputColor;
}

@property (retain, nonatomic) CIImage * inputImage;
@property (retain, nonatomic) CIVector * inputOffset;
@property (retain, nonatomic) NSNumber * inputRange;
@property (retain, nonatomic) NSNumber * inputRadius;
@property (retain, nonatomic) NSNumber * inputSize;
@property (retain, nonatomic) NSNumber * inputSpread;
@property (retain, nonatomic) CIColor * inputColor;

+ (NSArray *)customAttributes;

- (CIImage *)inputImage;
- (void)setInputImage:(CIImage *)arg0;
- (void)setInputRadius:(NSNumber *)arg0;
- (NSNumber *)inputRadius;
- (CIKernel *)_kernel;
- (void)setInputColor:(CIColor *)arg0;
- (CIColor *)inputColor;
- (void)setInputSize:(NSNumber *)arg0;
- (NSNumber *)inputSize;
- (void)setInputOffset:(CIVector *)arg0;
- (void)setInputRange:(NSNumber *)arg0;
- (CIVector *)inputOffset;
- (NSNumber *)inputRange;
- (void)setInputSpread:(NSNumber *)arg0;
- (NSNumber *)inputSpread;
- (void)setDefaults;
- (CIImage *)outputImage;

@end
