/* Runtime dump - CIBarsSwipeTransition
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIBarsSwipeTransition : CIFilter
{
    CIImage * inputImage;
    CIImage * inputTargetImage;
    NSNumber * inputAngle;
    NSNumber * inputWidth;
    NSNumber * inputBarOffset;
    NSNumber * inputTime;
}

@property (retain, nonatomic) CIImage * inputImage;
@property (retain, nonatomic) CIImage * inputTargetImage;
@property (retain, nonatomic) NSNumber * inputAngle;
@property (retain, nonatomic) NSNumber * inputWidth;
@property (retain, nonatomic) NSNumber * inputBarOffset;
@property (retain, nonatomic) NSNumber * inputTime;

+ (NSArray *)customAttributes;

- (CIImage *)inputImage;
- (void)setInputImage:(CIImage *)arg0;
- (CIKernel *)_kernel;
- (NSNumber *)inputAngle;
- (void)setInputAngle:(NSNumber *)arg0;
- (void)setInputWidth:(NSNumber *)arg0;
- (NSNumber *)inputWidth;
- (CIImage *)inputTargetImage;
- (void)setInputTargetImage:(CIImage *)arg0;
- (NSNumber *)inputTime;
- (void)setInputBarOffset:(NSNumber *)arg0;
- (NSNumber *)inputBarOffset;
- (void)setDefaults;
- (void)setInputTime:(NSNumber *)arg0;
- (CIImage *)outputImage;

@end
