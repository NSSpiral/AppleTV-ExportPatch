/* Runtime dump - CIAccordionFoldTransition
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIAccordionFoldTransition : CIFilter
{
    CIImage * inputImage;
    CIImage * inputTargetImage;
    NSNumber * inputBottomHeight;
    NSNumber * inputNumberOfFolds;
    NSNumber * inputFoldShadowAmount;
    NSNumber * inputTime;
}

@property (retain, nonatomic) CIImage * inputImage;
@property (retain, nonatomic) CIImage * inputTargetImage;
@property (retain, nonatomic) NSNumber * inputBottomHeight;
@property (retain, nonatomic) NSNumber * inputNumberOfFolds;
@property (retain, nonatomic) NSNumber * inputFoldShadowAmount;
@property (retain, nonatomic) NSNumber * inputTime;

+ (NSArray *)customAttributes;

- (CIImage *)inputImage;
- (void)setInputImage:(CIImage *)arg0;
- (CIKernel *)_kernel;
- (CIImage *)inputTargetImage;
- (void)setInputTargetImage:(CIImage *)arg0;
- (NSNumber *)inputTime;
- (id)_kernelWarpS;
- (id)_kernelWarpT;
- (id)_kernelMix;
- (NSNumber *)inputBottomHeight;
- (void)setInputBottomHeight:(NSNumber *)arg0;
- (NSNumber *)inputNumberOfFolds;
- (void)setInputNumberOfFolds:(NSNumber *)arg0;
- (NSNumber *)inputFoldShadowAmount;
- (void)setInputFoldShadowAmount:(NSNumber *)arg0;
- (void)setInputTime:(NSNumber *)arg0;
- (CIImage *)outputImage;

@end
