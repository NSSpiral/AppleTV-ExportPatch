/* Runtime dump - CIDissolveTransition
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIDissolveTransition : CIFilter
{
    CIImage * inputImage;
    CIImage * inputTargetImage;
    NSNumber * inputTime;
}

@property (retain, nonatomic) CIImage * inputImage;
@property (retain, nonatomic) CIImage * inputTargetImage;
@property (retain, nonatomic) NSNumber * inputTime;

+ (NSArray *)customAttributes;

- (CIImage *)inputImage;
- (void)setInputImage:(CIImage *)arg0;
- (CIKernel *)_kernel;
- (CIKernel *)_fadeKernel;
- (CIImage *)inputTargetImage;
- (void)setInputTargetImage:(CIImage *)arg0;
- (NSNumber *)inputTime;
- (void)setDefaults;
- (void)setInputTime:(NSNumber *)arg0;
- (CIImage *)outputImage;

@end
