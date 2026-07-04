/* Runtime dump - CIHueAdjust
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIHueAdjust : CIFilter
{
    CIImage * inputImage;
    NSNumber * inputAngle;
}

@property (retain, nonatomic) CIImage * inputImage;
@property (retain, nonatomic) NSNumber * inputAngle;

+ (NSArray *)customAttributes;

- (CIImage *)inputImage;
- (void)setInputImage:(CIImage *)arg0;
- (NSNumber *)inputAngle;
- (void)setInputAngle:(NSNumber *)arg0;
- (void)setDefaults;
- (CIImage *)outputImage;

@end
