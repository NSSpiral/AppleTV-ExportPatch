/* Runtime dump - CITileFilter
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CITileFilter : CIFilter
{
    CIImage * inputImage;
    CIVector * inputCenter;
    NSNumber * inputAngle;
    NSNumber * inputWidth;
}

@property (retain, nonatomic) CIImage * inputImage;
@property (retain, nonatomic) CIVector * inputCenter;
@property (retain, nonatomic) NSNumber * inputAngle;
@property (retain, nonatomic) NSNumber * inputWidth;

+ (NSArray *)customAttributes;

- (CIImage *)inputImage;
- (void)setInputImage:(CIImage *)arg0;
- (CIKernel *)_kernel;
- (NSNumber *)inputAngle;
- (void)setInputAngle:(NSNumber *)arg0;
- (CIVector *)inputCenter;
- (void)setInputCenter:(CIVector *)arg0;
- (NSString *)_kernel_name;
- (NSObject *)_kernel_source;
- (void)setInputWidth:(NSNumber *)arg0;
- (NSNumber *)inputWidth;
- (void)setDefaults;

@end
