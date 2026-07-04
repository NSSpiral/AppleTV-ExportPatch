/* Runtime dump - CICrop
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CICrop : CIFilter <_CIFilterProperties>
{
    CIImage * inputImage;
    CIVector * inputRectangle;
}

@property (retain, nonatomic) CIImage * inputImage;
@property (retain, nonatomic) CIVector * inputRectangle;

+ (NSArray *)customAttributes;

- (CIImage *)inputImage;
- (void)setInputImage:(CIImage *)arg0;
- (void)setInputRectangle:(CIVector *)arg0;
- (CIVector *)inputRectangle;
- (void)setDefaults;
- (NSDictionary *)_outputProperties;
- (NSDictionary *)_initFromProperties:(NSDictionary *)arg0;
- (CIImage *)outputImage;

@end
