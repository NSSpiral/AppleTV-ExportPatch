/* Runtime dump - CIFlashTransition
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIFlashTransition : CIFilter
{
    CIImage * inputImage;
    CIImage * inputTargetImage;
    CIVector * inputCenter;
    CIVector * inputExtent;
    CIColor * inputColor;
    NSNumber * inputTime;
    NSNumber * inputMaxStriationRadius;
    NSNumber * inputStriationStrength;
    NSNumber * inputStriationContrast;
    NSNumber * inputFadeThreshold;
}

@property (retain, nonatomic) CIImage * inputImage;
@property (retain, nonatomic) CIImage * inputTargetImage;
@property (retain, nonatomic) CIVector * inputCenter;
@property (retain, nonatomic) CIVector * inputExtent;
@property (retain, nonatomic) CIColor * inputColor;
@property (retain, nonatomic) NSNumber * inputTime;
@property (retain, nonatomic) NSNumber * inputMaxStriationRadius;
@property (retain, nonatomic) NSNumber * inputStriationStrength;
@property (retain, nonatomic) NSNumber * inputStriationContrast;
@property (retain, nonatomic) NSNumber * inputFadeThreshold;

+ (NSArray *)customAttributes;

- (void)setInputExtent:(CIVector *)arg0;
- (CIImage *)inputImage;
- (void)setInputImage:(CIImage *)arg0;
- (CIVector *)inputExtent;
- (CIVector *)inputCenter;
- (void)setInputCenter:(CIVector *)arg0;
- (void)setInputColor:(CIColor *)arg0;
- (CIColor *)inputColor;
- (CIKernel *)_geomKernel;
- (CIKernel *)_colorKernel;
- (CIImage *)inputTargetImage;
- (void)setInputTargetImage:(CIImage *)arg0;
- (NSNumber *)inputTime;
- (void)setInputMaxStriationRadius:(NSNumber *)arg0;
- (void)setInputStriationStrength:(NSNumber *)arg0;
- (void)setInputStriationContrast:(NSNumber *)arg0;
- (void)setInputFadeThreshold:(NSNumber *)arg0;
- (NSNumber *)inputMaxStriationRadius;
- (NSNumber *)inputStriationStrength;
- (NSNumber *)inputStriationContrast;
- (NSNumber *)inputFadeThreshold;
- (void)setDefaults;
- (void)setInputTime:(NSNumber *)arg0;
- (CIImage *)outputImage;

@end
