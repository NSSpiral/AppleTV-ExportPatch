/* Runtime dump - CIDisintegrateWithMaskTransition
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIDisintegrateWithMaskTransition : CIFilter
{
    CIImage * inputImage;
    CIImage * inputTargetImage;
    CIImage * inputMaskImage;
    NSNumber * inputTime;
    NSNumber * inputShadowRadius;
    NSNumber * inputShadowDensity;
    CIVector * inputShadowOffset;
}

@property (retain, nonatomic) CIImage * inputImage;
@property (retain, nonatomic) CIImage * inputTargetImage;
@property (retain, nonatomic) CIImage * inputMaskImage;
@property (retain, nonatomic) NSNumber * inputTime;
@property (retain, nonatomic) NSNumber * inputShadowRadius;
@property (retain, nonatomic) NSNumber * inputShadowDensity;
@property (retain, nonatomic) CIVector * inputShadowOffset;

+ (NSArray *)customAttributes;

- (CIImage *)inputImage;
- (void)setInputImage:(CIImage *)arg0;
- (CIKernel *)_kernel;
- (CIImage *)inputTargetImage;
- (void)setInputTargetImage:(CIImage *)arg0;
- (NSNumber *)inputTime;
- (CIImage *)inputMaskImage;
- (void)setInputMaskImage:(CIImage *)arg0;
- (void)setInputShadowRadius:(NSNumber *)arg0;
- (void)setInputShadowDensity:(NSNumber *)arg0;
- (void)setInputShadowOffset:(CIVector *)arg0;
- (NSNumber *)inputShadowRadius;
- (NSNumber *)inputShadowDensity;
- (CIVector *)inputShadowOffset;
- (void)setDefaults;
- (void)setInputTime:(NSNumber *)arg0;
- (CIImage *)outputImage;

@end
