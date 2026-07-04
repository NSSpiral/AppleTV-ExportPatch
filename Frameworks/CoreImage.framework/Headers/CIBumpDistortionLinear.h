/* Runtime dump - CIBumpDistortionLinear
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIBumpDistortionLinear : CIFilter
{
    CIImage * inputImage;
    CIVector * inputCenter;
    NSNumber * inputRadius;
    NSNumber * inputAngle;
    NSNumber * inputScale;
}

@property (retain, nonatomic) CIImage * inputImage;
@property (retain, nonatomic) CIVector * inputCenter;
@property (retain, nonatomic) NSNumber * inputRadius;
@property (retain, nonatomic) NSNumber * inputAngle;
@property (retain, nonatomic) NSNumber * inputScale;

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
- (NSNumber *)inputScale;
- (void)setInputScale:(NSNumber *)arg0;
- (CIImage *)outputImage;

@end
