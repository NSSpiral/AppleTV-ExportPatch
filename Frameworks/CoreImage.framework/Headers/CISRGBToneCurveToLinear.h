/* Runtime dump - CISRGBToneCurveToLinear
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CISRGBToneCurveToLinear : CIFilter
{
    CIImage * inputImage;
}

@property (retain, nonatomic) CIImage * inputImage;

+ (NSArray *)customAttributes;

- (CIImage *)inputImage;
- (void)setInputImage:(CIImage *)arg0;
- (CIImage *)outputImage;

@end
