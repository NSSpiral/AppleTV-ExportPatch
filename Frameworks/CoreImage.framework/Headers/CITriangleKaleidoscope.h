/* Runtime dump - CITriangleKaleidoscope
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CITriangleKaleidoscope : CIFilter
{
    CIImage * inputImage;
    CIVector * inputPoint;
    NSNumber * inputSize;
    NSNumber * inputRotation;
    NSNumber * inputDecay;
}

@property (retain, nonatomic) CIImage * inputImage;
@property (retain, nonatomic) CIVector * inputPoint;
@property (retain, nonatomic) NSNumber * inputSize;
@property (retain, nonatomic) NSNumber * inputRotation;
@property (retain, nonatomic) NSNumber * inputDecay;

+ (NSArray *)customAttributes;

- (CIImage *)inputImage;
- (void)setInputImage:(CIImage *)arg0;
- (CIVector *)inputPoint;
- (void)setInputRotation:(NSNumber *)arg0;
- (void)setInputSize:(NSNumber *)arg0;
- (void)setInputDecay:(NSNumber *)arg0;
- (CIKernel *)_geomKernel;
- (CIKernel *)_colorKernel;
- (NSNumber *)inputSize;
- (NSNumber *)inputRotation;
- (NSNumber *)inputDecay;
- (void)setDefaults;
- (void)setInputPoint:(CIVector *)arg0;
- (CIImage *)outputImage;

@end
