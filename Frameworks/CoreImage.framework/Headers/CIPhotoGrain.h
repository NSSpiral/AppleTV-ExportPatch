/* Runtime dump - CIPhotoGrain
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIPhotoGrain : CIFilter
{
    CIImage * inputImage;
    NSNumber * inputISO;
    NSNumber * inputAmount;
    NSNumber * inputSeed;
}

@property (retain, nonatomic) CIImage * inputImage;
@property (copy, nonatomic) NSNumber * inputISO;
@property (copy, nonatomic) NSNumber * inputAmount;
@property (copy, nonatomic) NSNumber * inputSeed;

- (NSArray *)customAttributes;
- (CIImage *)inputImage;
- (void)setInputImage:(CIImage *)arg0;
- (void)setInputAmount:(NSNumber *)arg0;
- (NSNumber *)inputAmount;
- (CIKernel *)_interpolateGrainKernel;
- (CIKernel *)_paddedTileKernel;
- (void)paramtersFor:(float)arg0 destination:(struct GrainParameters *)arg1 imageScaleFactor:(float)arg2;
- (CIKernel *)_grainBlendAndMixKernel;
- (NSNumber *)inputISO;
- (void)setInputISO:(NSNumber *)arg0;
- (NSNumber *)inputSeed;
- (void)setInputSeed:(NSNumber *)arg0;
- (CIImage *)outputImage;

@end
