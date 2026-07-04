/* Runtime dump - CIHistogramDisplayFilter
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIHistogramDisplayFilter : CIFilter
{
    CIImage * inputImage;
    NSNumber * inputHeight;
    NSNumber * inputHighLimit;
    NSNumber * inputLowLimit;
}

@property (retain, nonatomic) CIImage * inputImage;
@property (retain, nonatomic) NSNumber * inputHeight;
@property (retain, nonatomic) NSNumber * inputHighLimit;
@property (retain, nonatomic) NSNumber * inputLowLimit;

+ (NSArray *)customAttributes;

- (NSArray *)customAttributes;
- (CIImage *)inputImage;
- (void)setInputImage:(CIImage *)arg0;
- (CIKernel *)_kernel;
- (void)setInputHeight:(NSNumber *)arg0;
- (void)setInputLowLimit:(NSNumber *)arg0;
- (void)setInputHighLimit:(NSNumber *)arg0;
- (NSNumber *)inputHeight;
- (NSNumber *)inputHighLimit;
- (NSNumber *)inputLowLimit;
- (void)setDefaults;
- (CIImage *)outputImage;

@end
