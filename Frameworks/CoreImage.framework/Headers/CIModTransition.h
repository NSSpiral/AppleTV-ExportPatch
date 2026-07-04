/* Runtime dump - CIModTransition
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIModTransition : CIFilter
{
    CIImage * inputImage;
    CIImage * inputTargetImage;
    CIVector * inputCenter;
    NSNumber * inputTime;
    NSNumber * inputAngle;
    NSNumber * inputRadius;
    NSNumber * inputCompression;
}

@property (retain, nonatomic) CIImage * inputImage;
@property (retain, nonatomic) CIImage * inputTargetImage;
@property (retain, nonatomic) CIVector * inputCenter;
@property (retain, nonatomic) NSNumber * inputTime;
@property (retain, nonatomic) NSNumber * inputAngle;
@property (retain, nonatomic) NSNumber * inputRadius;
@property (retain, nonatomic) NSNumber * inputCompression;

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
- (CIImage *)inputTargetImage;
- (void)setInputTargetImage:(CIImage *)arg0;
- (NSNumber *)inputTime;
- (void)setInputCompression:(NSNumber *)arg0;
- (NSNumber *)inputCompression;
- (void)setDefaults;
- (void)setInputTime:(NSNumber *)arg0;
- (CIImage *)outputImage;

@end
