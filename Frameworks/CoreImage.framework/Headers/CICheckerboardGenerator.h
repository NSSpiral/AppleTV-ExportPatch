/* Runtime dump - CICheckerboardGenerator
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CICheckerboardGenerator : CIFilter
{
    CIVector * inputCenter;
    CIColor * inputColor0;
    CIColor * inputColor1;
    NSNumber * inputWidth;
    NSNumber * inputSharpness;
}

@property (retain, nonatomic) CIVector * inputCenter;
@property (retain, nonatomic) NSNumber * inputWidth;
@property (retain, nonatomic) NSNumber * inputSharpness;
@property (retain, nonatomic) CIColor * inputColor0;
@property (retain, nonatomic) CIColor * inputColor1;

+ (NSArray *)customAttributes;

- (CIKernel *)_kernel;
- (CIVector *)inputCenter;
- (void)setInputCenter:(CIVector *)arg0;
- (void)setInputColor0:(CIColor *)arg0;
- (void)setInputColor1:(CIColor *)arg0;
- (CIColor *)inputColor0;
- (CIColor *)inputColor1;
- (void)setInputWidth:(NSNumber *)arg0;
- (void)setInputSharpness:(NSNumber *)arg0;
- (NSNumber *)inputWidth;
- (NSNumber *)inputSharpness;
- (void)setDefaults;
- (CIImage *)outputImage;

@end
