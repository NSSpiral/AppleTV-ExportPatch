/* Runtime dump - CILightTunnel
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CILightTunnel : CIFilter
{
    CIImage * inputImage;
    CIVector * inputCenter;
    NSNumber * inputRotation;
    NSNumber * inputRadius;
}

@property (retain, nonatomic) CIImage * inputImage;
@property (retain, nonatomic) CIVector * inputCenter;
@property (retain, nonatomic) NSNumber * inputRotation;
@property (retain, nonatomic) NSNumber * inputRadius;

+ (NSArray *)customAttributes;

- (CIImage *)inputImage;
- (void)setInputImage:(CIImage *)arg0;
- (void)setInputRadius:(NSNumber *)arg0;
- (NSNumber *)inputRadius;
- (CIKernel *)_kernel;
- (CIVector *)inputCenter;
- (void)setInputCenter:(CIVector *)arg0;
- (void)setInputRotation:(NSNumber *)arg0;
- (NSNumber *)inputRotation;
- (void)setDefaults;
- (CIImage *)outputImage;

@end
