/* Runtime dump - CIBlendModeFilter
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIBlendModeFilter : CIFilter
{
    CIImage * inputImage;
    CIImage * inputBackgroundImage;
}

@property (retain, nonatomic) CIImage * inputImage;
@property (retain, nonatomic) CIImage * inputBackgroundImage;

+ (NSArray *)customAttributes;
+ (CIKernel *)_kernel;
+ (NSString *)_filter_display_name;

- (CIImage *)inputImage;
- (void)setInputImage:(CIImage *)arg0;
- (CIImage *)inputBackgroundImage;
- (void)setInputBackgroundImage:(CIImage *)arg0;
- (char)_needUnpremuls;
- (struct CGRect)_extent;
- (CIImage *)outputImage;

@end
