/* Runtime dump - CITemperatureAndTint
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CITemperatureAndTint : CIFilter
{
    CIImage * inputImage;
    CIVector * inputNeutral;
    CIVector * inputTargetNeutral;
}

@property (retain, nonatomic) CIImage * inputImage;
@property (retain, nonatomic) CIVector * inputNeutral;
@property (retain, nonatomic) CIVector * inputTargetNeutral;

+ (NSArray *)customAttributes;

- (CIImage *)inputImage;
- (void)setInputImage:(CIImage *)arg0;
- (void)setInputNeutral:(CIVector *)arg0;
- (void)setInputTargetNeutral:(CIVector *)arg0;
- (CIVector *)inputNeutral;
- (CIVector *)inputTargetNeutral;
- (void)setDefaults;
- (CIImage *)outputImage;

@end
