/* Runtime dump - CIHoleDistortion
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIHoleDistortion : CIFilter
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
- (char)_isIdentity;
- (NSNumber *)inputRadius;
- (CIVector *)inputCenter;
- (void)setInputCenter:(CIVector *)arg0;
- (CIKernel *)_geomKernel;
- (CIKernel *)_colorKernel;
- (struct CGRect)computeDOD;
- (void)setDefaults;
- (CIImage *)outputImage;

@end
