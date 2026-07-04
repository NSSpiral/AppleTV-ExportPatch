/* Runtime dump - CISaturationBlendMode
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CISaturationBlendMode : CIBlendModeFilter

+ (CIKernel *)_kernel;
+ (NSString *)_filter_display_name;

- (CIImage *)outputImage;

@end
