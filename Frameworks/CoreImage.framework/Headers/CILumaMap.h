/* Runtime dump - CILumaMap
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CILumaMap : CIFilter
{
    CIImage * inputImage;
    CIImage * _tableImage;
}

@property (retain, nonatomic) CIImage * inputImage;

+ (NSArray *)customAttributes;

- (CIImage *)inputImage;
- (void)setInputImage:(CIImage *)arg0;
- (CIKernel *)_kernel;
- (char *)lumaTable;
- (void)setDefaults;
- (CIImage *)outputImage;

@end
