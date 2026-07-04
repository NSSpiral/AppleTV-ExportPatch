/* Runtime dump - CIMaskedVariableBlur
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIMaskedVariableBlur : CIFilter
{
    CIImage * inputImage;
    CIImage * inputMask;
    NSNumber * inputRadius;
}

@property (retain, nonatomic) CIImage * inputImage;
@property (retain, nonatomic) CIImage * inputMask;
@property (retain, nonatomic) NSNumber * inputRadius;

+ (NSArray *)customAttributes;

- (CIImage *)inputImage;
- (void)setInputImage:(CIImage *)arg0;
- (void)setInputRadius:(NSNumber *)arg0;
- (char)_isIdentity;
- (CIImage *)inputMask;
- (void)setInputMask:(CIImage *)arg0;
- (NSNumber *)inputRadius;
- (void)setDefaults;
- (CIImage *)outputImage;

@end
