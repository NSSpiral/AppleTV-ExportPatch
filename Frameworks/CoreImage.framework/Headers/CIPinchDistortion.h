/* Runtime dump - CIPinchDistortion
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIPinchDistortion : CIFilter
{
    CIImage * inputImage;
    CIVector * inputCenter;
    NSNumber * inputRadius;
    NSNumber * inputScale;
}

@property (retain, nonatomic) CIImage * inputImage;
@property (retain, nonatomic) CIVector * inputCenter;
@property (retain, nonatomic) NSNumber * inputRadius;
@property (retain, nonatomic) NSNumber * inputScale;

+ (NSArray *)customAttributes;

- (CIImage *)inputImage;
- (void)setInputImage:(CIImage *)arg0;
- (void)setInputRadius:(NSNumber *)arg0;
- (NSNumber *)inputRadius;
- (CIVector *)inputCenter;
- (void)setInputCenter:(CIVector *)arg0;
- (struct CGRect)computeDOD:(id)arg0 scale:(SEL)arg1;
- (id)_pinchDistortionScaleLT1;
- (id)_pinchDistortionScaleGE1;
- (void)setDefaults;
- (NSNumber *)inputScale;
- (void)setInputScale:(NSNumber *)arg0;
- (CIImage *)outputImage;

@end
