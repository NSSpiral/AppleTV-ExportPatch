/* Runtime dump - CISmartToneFilter
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CISmartToneFilter : CIFilter
{
    CIImage * inputImage;
    NSNumber * inputExposure;
    NSNumber * inputContrast;
    NSNumber * inputBrightness;
    NSNumber * inputShadows;
    NSNumber * inputHighlights;
    NSNumber * inputBlack;
    NSNumber * inputUseCube;
    CIImage * _cubeImage;
    CIContext * _cubeContext;
}

@property (retain, nonatomic) CIImage * inputImage;
@property (retain, nonatomic) NSNumber * inputExposure;
@property (retain, nonatomic) NSNumber * inputContrast;
@property (retain, nonatomic) NSNumber * inputBrightness;
@property (retain, nonatomic) NSNumber * inputShadows;
@property (retain, nonatomic) NSNumber * inputHighlights;
@property (retain, nonatomic) NSNumber * inputBlack;
@property (retain, nonatomic) NSNumber * inputUseCube;

+ (NSArray *)customAttributes;

- (CIImage *)inputImage;
- (void)setInputImage:(CIImage *)arg0;
- (char)_isIdentity;
- (void)setInputContrast:(NSNumber *)arg0;
- (void)setInputBrightness:(NSNumber *)arg0;
- (NSNumber *)inputBrightness;
- (NSNumber *)inputContrast;
- (NSNumber *)inputUseCube;
- (id)_kernelBneg;
- (id)_kernelBpos;
- (id)_kernelH;
- (id)_kernelC;
- (NSNumber *)inputExposure;
- (void)setInputExposure:(NSNumber *)arg0;
- (NSNumber *)inputShadows;
- (void)setInputShadows:(NSNumber *)arg0;
- (NSNumber *)inputHighlights;
- (void)setInputHighlights:(NSNumber *)arg0;
- (NSNumber *)inputBlack;
- (void)setInputBlack:(NSNumber *)arg0;
- (void)setInputUseCube:(NSNumber *)arg0;
- (void)setValue:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)dealloc;
- (CIImage *)outputImage;

@end
