/* Runtime dump - CIColorCube
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIColorCube : CIFilter
{
    CIImage * inputImage;
    NSNumber * inputCubeDimension;
    NSData * inputCubeData;
    CIImage * _cubeImage;
}

@property (retain, nonatomic) CIImage * inputImage;
@property (retain, nonatomic) NSNumber * inputCubeDimension;
@property (copy, nonatomic) NSData * inputCubeData;

+ (NSArray *)customAttributes;

- (CIImage *)inputImage;
- (void)setInputImage:(CIImage *)arg0;
- (CIKernel *)_kernel;
- (void)setInputCubeData:(NSData *)arg0;
- (void)setInputCubeDimension:(NSNumber *)arg0;
- (char)_checkInputs;
- (CIImage *)cubeImage;
- (NSNumber *)inputCubeDimension;
- (NSData *)inputCubeData;
- (void)setDefaults;
- (void)dealloc;
- (CIImage *)outputImage;

@end
