/* Runtime dump - CIRadialGradient
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIRadialGradient : CIFilter
{
    CIVector * inputCenter;
    NSNumber * inputRadius0;
    NSNumber * inputRadius1;
    CIColor * inputColor0;
    CIColor * inputColor1;
}

@property (retain, nonatomic) CIVector * inputCenter;
@property (retain, nonatomic) NSNumber * inputRadius0;
@property (retain, nonatomic) NSNumber * inputRadius1;
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
- (void)setInputRadius0:(NSNumber *)arg0;
- (void)setInputRadius1:(NSNumber *)arg0;
- (NSNumber *)inputRadius0;
- (NSNumber *)inputRadius1;
- (void)setDefaults;
- (CIImage *)outputImage;

@end
