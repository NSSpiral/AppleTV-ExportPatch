/* Runtime dump - CICircleSplashDistortion
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CICircleSplashDistortion : CIFilter
{
    CIImage * inputImage;
    CIVector * inputCenter;
    NSNumber * inputRadius;
}

@property (retain, nonatomic) CIImage * inputImage;
@property (retain, nonatomic) CIVector * inputCenter;
@property (retain, nonatomic) NSNumber * inputRadius;

+ (NSArray *)customAttributes;

- (CIImage *)inputImage;
- (void)setInputImage:(CIImage *)arg0;
- (void)setInputRadius:(NSNumber *)arg0;
- (NSNumber *)inputRadius;
- (CIKernel *)_kernel;
- (CIVector *)inputCenter;
- (void)setInputCenter:(CIVector *)arg0;
- (CIImage *)outputImage;

@end
