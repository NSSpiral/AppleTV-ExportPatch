/* Runtime dump - CIMirror
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIMirror : CIFilter
{
    CIImage * inputImage;
    CIVector * inputPoint;
    NSNumber * inputAngle;
}

@property (retain, nonatomic) CIImage * inputImage;
@property (retain, nonatomic) CIVector * inputPoint;
@property (retain, nonatomic) NSNumber * inputAngle;

+ (NSArray *)customAttributes;

- (CIImage *)inputImage;
- (void)setInputImage:(CIImage *)arg0;
- (CIKernel *)_kernel;
- (NSNumber *)inputAngle;
- (void)setInputAngle:(NSNumber *)arg0;
- (struct Rectangle)computeDOD:(struct vec2)arg0 tst:(struct vec3)arg1 off:(struct vec4)arg2 mtx:(struct vec4)arg3;
- (CIVector *)inputPoint;
- (void)setDefaults;
- (void)setInputPoint:(CIVector *)arg0;
- (CIImage *)outputImage;

@end
