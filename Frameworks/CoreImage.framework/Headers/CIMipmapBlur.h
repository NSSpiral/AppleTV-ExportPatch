/* Runtime dump - CIMipmapBlur
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIMipmapBlur : CIFilter
{
    CIImage * inputImage;
    NSNumber * inputLevel;
}

@property (retain, nonatomic) CIImage * inputImage;
@property (retain, nonatomic) NSNumber * inputLevel;

+ (NSArray *)customAttributes;

- (CIImage *)inputImage;
- (void)setInputImage:(CIImage *)arg0;
- (char)_isIdentity;
- (void)setInputLevel:(NSNumber *)arg0;
- (NSNumber *)inputLevel;
- (void)setDefaults;
- (CIImage *)outputImage;

@end
