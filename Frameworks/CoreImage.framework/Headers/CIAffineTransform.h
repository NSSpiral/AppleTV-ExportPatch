/* Runtime dump - CIAffineTransform
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIAffineTransform : CIFilter <_CIFilterProperties>
{
    CIImage * inputImage;
    NSValue * inputTransform;
}

@property (retain, nonatomic) CIImage * inputImage;
@property (retain, nonatomic) NSValue * inputTransform;

+ (NSArray *)customAttributes;

- (CIImage *)inputImage;
- (void)setInputImage:(CIImage *)arg0;
- (void)setInputTransform:(NSValue *)arg0;
- (NSValue *)inputTransform;
- (void)setDefaults;
- (NSDictionary *)_outputProperties;
- (NSDictionary *)_initFromProperties:(NSDictionary *)arg0;
- (CIImage *)outputImage;

@end
