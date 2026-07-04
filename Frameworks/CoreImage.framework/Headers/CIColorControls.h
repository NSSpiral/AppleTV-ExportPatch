/* Runtime dump - CIColorControls
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIColorControls : CIFilter
{
    CIImage * inputImage;
    NSNumber * inputSaturation;
    NSNumber * inputBrightness;
    NSNumber * inputContrast;
}

@property (retain, nonatomic) CIImage * inputImage;
@property (retain, nonatomic) NSNumber * inputSaturation;
@property (retain, nonatomic) NSNumber * inputBrightness;
@property (retain, nonatomic) NSNumber * inputContrast;

+ (NSArray *)customAttributes;

- (CIImage *)inputImage;
- (void)setInputImage:(CIImage *)arg0;
- (void)setInputSaturation:(NSNumber *)arg0;
- (void)setInputContrast:(NSNumber *)arg0;
- (void)setInputBrightness:(NSNumber *)arg0;
- (NSNumber *)inputSaturation;
- (NSNumber *)inputBrightness;
- (NSNumber *)inputContrast;
- (void)setDefaults;
- (CIImage *)outputImage;

@end
