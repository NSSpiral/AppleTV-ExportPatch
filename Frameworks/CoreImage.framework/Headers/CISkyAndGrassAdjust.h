/* Runtime dump - CISkyAndGrassAdjust
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CISkyAndGrassAdjust : CIFilter
{
    CIImage * inputImage;
    NSNumber * inputSkyAmount;
    NSNumber * inputGrassAmount;
}

@property (retain, nonatomic) CIImage * inputImage;
@property (retain, nonatomic) NSNumber * inputSkyAmount;
@property (retain, nonatomic) NSNumber * inputGrassAmount;

+ (NSArray *)customAttributes;

- (CIImage *)inputImage;
- (void)setInputImage:(CIImage *)arg0;
- (CIKernel *)_kernel;
- (void)setInputSkyAmount:(NSNumber *)arg0;
- (void)setInputGrassAmount:(NSNumber *)arg0;
- (NSNumber *)inputSkyAmount;
- (NSNumber *)inputGrassAmount;
- (void)setDefaults;
- (CIImage *)outputImage;

@end
