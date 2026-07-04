/* Runtime dump - CUIScaleClampFilter
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CUIScaleClampFilter : CIFilter
{
    CIImage * inputImage;
    NSNumber * inputScale;
}

@property (retain, nonatomic) CIImage * inputImage;
@property (retain, nonatomic) NSNumber * inputScale;

+ (NSArray *)customAttributes;

- (CIImage *)inputImage;
- (void)setInputImage:(CIImage *)arg0;
- (CIKernel *)_kernel;
- (void)setDefaults;
- (NSNumber *)inputScale;
- (void)setInputScale:(NSNumber *)arg0;
- (CIImage *)outputImage;

@end
