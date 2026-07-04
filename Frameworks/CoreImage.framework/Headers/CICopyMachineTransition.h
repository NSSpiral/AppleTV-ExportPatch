/* Runtime dump - CICopyMachineTransition
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CICopyMachineTransition : CIFilter
{
    CIImage * inputImage;
    CIImage * inputTargetImage;
    CIVector * inputExtent;
    CIColor * inputColor;
    NSNumber * inputTime;
    NSNumber * inputAngle;
    NSNumber * inputWidth;
    NSNumber * inputOpacity;
}

@property (retain, nonatomic) CIImage * inputImage;
@property (retain, nonatomic) CIImage * inputTargetImage;
@property (retain, nonatomic) CIVector * inputExtent;
@property (retain, nonatomic) CIColor * inputColor;
@property (retain, nonatomic) NSNumber * inputTime;
@property (retain, nonatomic) NSNumber * inputAngle;
@property (retain, nonatomic) NSNumber * inputWidth;
@property (retain, nonatomic) NSNumber * inputOpacity;

+ (NSArray *)customAttributes;

- (void)setInputExtent:(CIVector *)arg0;
- (CIImage *)inputImage;
- (void)setInputImage:(CIImage *)arg0;
- (CIVector *)inputExtent;
- (CIKernel *)_kernel;
- (NSNumber *)inputAngle;
- (void)setInputAngle:(NSNumber *)arg0;
- (void)setInputColor:(CIColor *)arg0;
- (CIColor *)inputColor;
- (void)setInputWidth:(NSNumber *)arg0;
- (NSNumber *)inputWidth;
- (CIImage *)inputTargetImage;
- (void)setInputTargetImage:(CIImage *)arg0;
- (NSNumber *)inputTime;
- (void)setInputOpacity:(NSNumber *)arg0;
- (NSNumber *)inputOpacity;
- (void)setDefaults;
- (void)setInputTime:(NSNumber *)arg0;
- (CIImage *)outputImage;

@end
