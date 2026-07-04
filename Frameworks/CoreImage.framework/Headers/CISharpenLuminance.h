/* Runtime dump - CISharpenLuminance
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CISharpenLuminance : CIFilter
{
    CIImage * inputImage;
    NSNumber * inputSharpness;
}

@property (retain, nonatomic) CIImage * inputImage;
@property (retain, nonatomic) NSNumber * inputSharpness;

+ (NSArray *)customAttributes;

- (CIImage *)inputImage;
- (void)setInputImage:(CIImage *)arg0;
- (BOOL)_isIdentity;
- (CIKernel *)_kernel;
- (void)setInputSharpness:(NSNumber *)arg0;
- (NSNumber *)inputSharpness;
- (void)setDefaults;
- (CIImage *)outputImage;

@end
