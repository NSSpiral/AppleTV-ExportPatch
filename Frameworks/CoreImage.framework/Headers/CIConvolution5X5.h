/* Runtime dump - CIConvolution5X5
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIConvolution5X5 : CIFilter
{
    CIImage * inputImage;
    CIVector * inputWeights;
    NSNumber * inputBias;
}

@property (retain, nonatomic) CIImage * inputImage;
@property (retain, nonatomic) CIVector * inputWeights;
@property (retain, nonatomic) NSNumber * inputBias;

+ (NSArray *)customAttributes;

- (CIImage *)inputImage;
- (void)setInputImage:(CIImage *)arg0;
- (char)_isIdentity;
- (CIVector *)inputWeights;
- (void)setInputWeights:(CIVector *)arg0;
- (NSNumber *)inputBias;
- (void)setInputBias:(NSNumber *)arg0;
- (CIImage *)outputImage;

@end
