/* Runtime dump - CILinearBlur
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CILinearBlur : CIFilter
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
- (id)_blur:(id)arg0 pass:(int)arg1 weightsFactor:(float)arg2;
- (CIImage *)outputImage;

@end
