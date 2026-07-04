/* Runtime dump - CISmartBlackAndWhite
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CISmartBlackAndWhite : CIFilter
{
    CIImage * inputImage;
    NSNumber * inputStrength;
    NSNumber * inputNeutralGamma;
    NSNumber * inputTone;
    NSNumber * inputHue;
    NSNumber * inputGrain;
    NSNumber * inputScaleFactor;
}

@property (retain, nonatomic) CIImage * inputImage;
@property (copy, nonatomic) NSNumber * inputStrength;
@property (copy, nonatomic) NSNumber * inputNeutralGamma;
@property (copy, nonatomic) NSNumber * inputTone;
@property (copy, nonatomic) NSNumber * inputHue;
@property (copy, nonatomic) NSNumber * inputGrain;
@property (copy, nonatomic) NSNumber * inputScaleFactor;

+ (NSArray *)customAttributes;

- (CIImage *)inputImage;
- (void)setInputImage:(CIImage *)arg0;
- (CIKernel *)_kernel;
- (void)getNonNormalizedSettings:(struct ? *)arg0;
- (float *)createHueArray;
- (UIImage *)hueArrayImage:(float *)arg0;
- (NSNumber *)inputGrain;
- (NSNumber *)inputStrength;
- (void)setInputStrength:(NSNumber *)arg0;
- (NSNumber *)inputNeutralGamma;
- (void)setInputNeutralGamma:(NSNumber *)arg0;
- (NSNumber *)inputTone;
- (void)setInputTone:(NSNumber *)arg0;
- (NSNumber *)inputHue;
- (void)setInputHue:(NSNumber *)arg0;
- (void)setInputGrain:(NSNumber *)arg0;
- (NSNumber *)inputScaleFactor;
- (void)setInputScaleFactor:(NSNumber *)arg0;
- (CIImage *)outputImage;

@end
