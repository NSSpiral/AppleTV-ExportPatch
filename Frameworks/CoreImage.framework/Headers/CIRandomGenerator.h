/* Runtime dump - CIRandomGenerator
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIRandomGenerator : CIFilter

+ (NSArray *)customAttributes;

- (CIKernel *)_kernel;
- (CIImage *)outputImage;

@end
