/* Runtime dump - CIExposureAdjust
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIExposureAdjust : CIFilter
{
    CIImage * inputImage;
    NSNumber * inputEV;
}

@property (retain, nonatomic) CIImage * inputImage;
@property (retain, nonatomic) NSNumber * inputEV;

+ (NSArray *)customAttributes;

- (CIImage *)inputImage;
- (void)setInputImage:(CIImage *)arg0;
- (char)_isIdentity;
- (void)setInputEV:(NSNumber *)arg0;
- (NSNumber *)inputEV;
- (void)setDefaults;
- (CIImage *)outputImage;

@end
