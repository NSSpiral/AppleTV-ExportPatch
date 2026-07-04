/* Runtime dump - CIHighlightShadowAdjust
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIHighlightShadowAdjust : CIFilter <_CIFilterProperties>
{
    CIImage * inputImage;
    NSNumber * inputRadius;
    NSNumber * inputShadowAmount;
    NSNumber * inputHighlightAmount;
}

@property (retain, nonatomic) CIImage * inputImage;
@property (retain, nonatomic) NSNumber * inputRadius;
@property (retain, nonatomic) NSNumber * inputShadowAmount;
@property (retain, nonatomic) NSNumber * inputHighlightAmount;

+ (NSArray *)customAttributes;

- (CIImage *)inputImage;
- (void)setInputImage:(CIImage *)arg0;
- (void)setInputRadius:(NSNumber *)arg0;
- (char)_isIdentity;
- (NSNumber *)inputRadius;
- (void)setInputShadowAmount:(NSNumber *)arg0;
- (void)setInputHighlightAmount:(NSNumber *)arg0;
- (int)bestVersion;
- (id)_kernelSnoB_v0;
- (id)_kernelSHnoB_v0;
- (id)_kernelSH_v0;
- (id)_kernelSHnoB_v1;
- (id)_kernelSH_v1;
- (id)_kernelSHnoB_v2;
- (id)_kernelSH_v2;
- (NSNumber *)inputShadowAmount;
- (NSNumber *)inputHighlightAmount;
- (void)setDefaults;
- (NSDictionary *)_outputProperties;
- (NSDictionary *)_initFromProperties:(NSDictionary *)arg0;
- (CIImage *)outputImage;

@end
