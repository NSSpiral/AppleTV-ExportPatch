/* Runtime dump - CILanczosScaleTransform
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CILanczosScaleTransform : CIFilter
{
    CIImage * inputImage;
    NSNumber * inputScale;
    NSNumber * inputAspectRatio;
}

@property (retain, nonatomic) CIImage * inputImage;
@property (retain, nonatomic) NSNumber * inputScale;
@property (retain, nonatomic) NSNumber * inputAspectRatio;

+ (NSArray *)customAttributes;

- (CIImage *)inputImage;
- (void)setInputImage:(CIImage *)arg0;
- (char)_isIdentity;
- (void)setInputAspectRatio:(NSNumber *)arg0;
- (NSNumber *)inputAspectRatio;
- (void)setDefaults;
- (NSNumber *)inputScale;
- (void)setInputScale:(NSNumber *)arg0;
- (CIImage *)outputImage;

@end
