/* Runtime dump - CIColorClamp
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIColorClamp : CIFilter
{
    CIImage * inputImage;
    CIVector * inputMinComponents;
    CIVector * inputMaxComponents;
}

@property (retain, nonatomic) CIImage * inputImage;
@property (retain, nonatomic) CIVector * inputMinComponents;
@property (retain, nonatomic) CIVector * inputMaxComponents;

+ (NSArray *)customAttributes;

- (CIImage *)inputImage;
- (void)setInputImage:(CIImage *)arg0;
- (CIKernel *)_kernel;
- (void)setInputMinComponents:(CIVector *)arg0;
- (void)setInputMaxComponents:(CIVector *)arg0;
- (CIVector *)inputMinComponents;
- (CIVector *)inputMaxComponents;
- (void)setDefaults;
- (CIImage *)outputImage;

@end
