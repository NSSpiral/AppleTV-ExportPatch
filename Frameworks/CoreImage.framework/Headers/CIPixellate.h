/* Runtime dump - CIPixellate
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIPixellate : CIFilter
{
    CIImage * inputImage;
    CIVector * inputCenter;
    NSNumber * inputScale;
}

@property (retain, nonatomic) CIImage * inputImage;
@property (retain, nonatomic) CIVector * inputCenter;
@property (retain, nonatomic) NSNumber * inputScale;

+ (NSArray *)customAttributes;

- (CIImage *)inputImage;
- (void)setInputImage:(CIImage *)arg0;
- (BOOL)_isIdentity;
- (CIKernel *)_kernel;
- (CIVector *)inputCenter;
- (void)setInputCenter:(CIVector *)arg0;
- (void)setDefaults;
- (NSNumber *)inputScale;
- (void)setInputScale:(NSNumber *)arg0;
- (CIImage *)outputImage;

@end
