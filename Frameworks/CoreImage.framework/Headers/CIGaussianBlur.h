/* Runtime dump - CIGaussianBlur
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIGaussianBlur : CIFilter
{
    CIImage * inputImage;
    NSNumber * inputRadius;
}

@property (retain, nonatomic) CIImage * inputImage;
@property (retain, nonatomic) NSNumber * inputRadius;

+ (NSArray *)customAttributes;

- (CIImage *)inputImage;
- (void)setInputImage:(CIImage *)arg0;
- (void)setInputRadius:(NSNumber *)arg0;
- (char)_isIdentity;
- (NSNumber *)inputRadius;
- (void)setDefaults;
- (CIImage *)outputImage;

@end
