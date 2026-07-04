/* Runtime dump - CUIShapeEffectBlur1
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CUIShapeEffectBlur1 : CIFilter
{
    CIImage * inputImage;
    CIImage * inputFill;
    CIVector * inputOffset;
    NSNumber * inputRadius;
    CIColor * inputGlowColorInner;
    CIColor * inputGlowColorOuter;
    CIColor * inputShadowColorInner;
    CIColor * inputShadowColorOuter;
    NSNumber * inputShadowBlurInner;
    NSNumber * inputShadowBlurOuter;
}

@property (retain, nonatomic) CIImage * inputImage;
@property (retain, nonatomic) CIImage * inputFill;
@property (retain, nonatomic) CIVector * inputOffset;
@property (retain, nonatomic) NSNumber * inputRadius;
@property (retain, nonatomic) CIColor * inputGlowColorInner;
@property (retain, nonatomic) CIColor * inputGlowColorOuter;
@property (retain, nonatomic) CIColor * inputShadowColorInner;
@property (retain, nonatomic) CIColor * inputShadowColorOuter;
@property (retain, nonatomic) NSNumber * inputShadowBlurInner;
@property (retain, nonatomic) NSNumber * inputShadowBlurOuter;

+ (NSArray *)customAttributes;

- (CIImage *)inputImage;
- (void)setInputImage:(CIImage *)arg0;
- (void)setInputRadius:(NSNumber *)arg0;
- (NSNumber *)inputRadius;
- (CIKernel *)_kernel;
- (void)setInputOffset:(CIVector *)arg0;
- (CIVector *)inputOffset;
- (void)setInputShadowColorOuter:(CIColor *)arg0;
- (void)setInputShadowColorInner:(CIColor *)arg0;
- (void)setInputGlowColorOuter:(CIColor *)arg0;
- (void)setInputGlowColorInner:(CIColor *)arg0;
- (void)setInputShadowBlurOuter:(NSNumber *)arg0;
- (void)setInputShadowBlurInner:(NSNumber *)arg0;
- (CIImage *)inputFill;
- (void)setInputFill:(CIImage *)arg0;
- (CIColor *)inputGlowColorInner;
- (CIColor *)inputGlowColorOuter;
- (CIColor *)inputShadowColorInner;
- (CIColor *)inputShadowColorOuter;
- (NSNumber *)inputShadowBlurInner;
- (NSNumber *)inputShadowBlurOuter;
- (void)setDefaults;
- (CIImage *)outputImage;

@end
