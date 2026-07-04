/* Runtime dump - CIHueBlendMode
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIHueBlendMode : CIBlendModeFilter

+ (CIKernel *)_kernel;
+ (NSString *)_filter_display_name;

- (CIImage *)outputImage;

@end
