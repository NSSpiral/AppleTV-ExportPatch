/* Runtime dump - CIVibrance
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIVibrance : CIFilter <_CIFilterProperties>
{
    CIImage * inputImage;
    NSNumber * inputAmount;
}

@property (retain, nonatomic) CIImage * inputImage;
@property (retain, nonatomic) NSNumber * inputAmount;

+ (NSArray *)customAttributes;

- (CIImage *)inputImage;
- (void)setInputImage:(CIImage *)arg0;
- (char)_isIdentity;
- (void)setInputAmount:(NSNumber *)arg0;
- (id)_kernelNeg;
- (id)_kernelPos;
- (NSNumber *)inputAmount;
- (void)setDefaults;
- (NSDictionary *)_outputProperties;
- (NSDictionary *)_initFromProperties:(NSDictionary *)arg0;
- (CIImage *)outputImage;

@end
