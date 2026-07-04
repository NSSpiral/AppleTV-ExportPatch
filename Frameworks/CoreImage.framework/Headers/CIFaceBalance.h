/* Runtime dump - CIFaceBalance
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIFaceBalance : CIFilter <_CIFilterProperties>
{
    CIImage * inputImage;
    NSNumber * inputOrigI;
    NSNumber * inputOrigQ;
    NSNumber * inputStrength;
    NSNumber * inputWarmth;
}

@property (retain, nonatomic) CIImage * inputImage;
@property (retain, nonatomic) NSNumber * inputOrigI;
@property (retain, nonatomic) NSNumber * inputOrigQ;
@property (retain, nonatomic) NSNumber * inputStrength;
@property (retain, nonatomic) NSNumber * inputWarmth;

+ (NSArray *)customAttributes;

- (CIImage *)inputImage;
- (void)setInputImage:(CIImage *)arg0;
- (char)_isIdentity;
- (CIKernel *)_kernel;
- (NSNumber *)inputStrength;
- (void)setInputStrength:(NSNumber *)arg0;
- (void)setInputOrigI:(NSNumber *)arg0;
- (void)setInputOrigQ:(NSNumber *)arg0;
- (void)setInputWarmth:(NSNumber *)arg0;
- (NSNumber *)inputOrigI;
- (NSNumber *)inputOrigQ;
- (NSNumber *)inputWarmth;
- (void)setDefaults;
- (NSDictionary *)_outputProperties;
- (NSDictionary *)_initFromProperties:(NSDictionary *)arg0;
- (CIImage *)outputImage;

@end
