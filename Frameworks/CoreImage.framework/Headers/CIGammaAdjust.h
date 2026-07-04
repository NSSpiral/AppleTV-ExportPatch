/* Runtime dump - CIGammaAdjust
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIGammaAdjust : CIFilter
{
    CIImage * inputImage;
    NSNumber * inputPower;
}

@property (retain, nonatomic) CIImage * inputImage;
@property (retain, nonatomic) NSNumber * inputPower;

+ (NSArray *)customAttributes;

- (CIImage *)inputImage;
- (void)setInputImage:(CIImage *)arg0;
- (char)_isIdentity;
- (void)setInputPower:(NSNumber *)arg0;
- (NSNumber *)inputPower;
- (void)setDefaults;
- (CIImage *)outputImage;

@end
