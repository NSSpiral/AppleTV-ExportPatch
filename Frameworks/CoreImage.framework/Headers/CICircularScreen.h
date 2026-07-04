/* Runtime dump - CICircularScreen
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CICircularScreen : CIFilter
{
    CIImage * inputImage;
    CIVector * inputCenter;
    NSNumber * inputWidth;
    NSNumber * inputSharpness;
}

@property (retain, nonatomic) CIImage * inputImage;
@property (retain, nonatomic) CIVector * inputCenter;
@property (retain, nonatomic) NSNumber * inputWidth;
@property (retain, nonatomic) NSNumber * inputSharpness;

+ (NSArray *)customAttributes;

- (CIImage *)inputImage;
- (void)setInputImage:(CIImage *)arg0;
- (CIKernel *)_kernel;
- (CIVector *)inputCenter;
- (void)setInputCenter:(CIVector *)arg0;
- (void)setInputWidth:(NSNumber *)arg0;
- (void)setInputSharpness:(NSNumber *)arg0;
- (NSNumber *)inputWidth;
- (NSNumber *)inputSharpness;
- (void)setDefaults;
- (CIImage *)outputImage;

@end
