/* Runtime dump - CITwirlDistortion
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CITwirlDistortion : CIFilter
{
    CIImage * inputImage;
    CIVector * inputCenter;
    NSNumber * inputRadius;
    NSNumber * inputAngle;
}

@property (retain, nonatomic) CIImage * inputImage;
@property (retain, nonatomic) CIVector * inputCenter;
@property (retain, nonatomic) NSNumber * inputRadius;
@property (retain, nonatomic) NSNumber * inputAngle;

+ (NSArray *)customAttributes;

- (CIImage *)inputImage;
- (void)setInputImage:(CIImage *)arg0;
- (void)setInputRadius:(NSNumber *)arg0;
- (NSNumber *)inputRadius;
- (CIKernel *)_kernel;
- (NSNumber *)inputAngle;
- (void)setInputAngle:(NSNumber *)arg0;
- (CIVector *)inputCenter;
- (void)setInputCenter:(CIVector *)arg0;
- (void)setDefaults;
- (CIImage *)outputImage;

@end
