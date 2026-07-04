/* Runtime dump - CISmartColorFilter
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CISmartColorFilter : CIFilter
{
    CIImage * inputImage;
    NSNumber * inputVibrancy;
    NSNumber * inputContrast;
    NSNumber * inputCast;
    NSNumber * inputUseCube;
    CIImage * _cubeImage;
    CIContext * _cubeContext;
}

@property (retain, nonatomic) CIImage * inputImage;
@property (retain, nonatomic) NSNumber * inputVibrancy;
@property (retain, nonatomic) NSNumber * inputContrast;
@property (retain, nonatomic) NSNumber * inputCast;
@property (retain, nonatomic) NSNumber * inputUseCube;

+ (NSArray *)customAttributes;

- (CIImage *)inputImage;
- (void)setInputImage:(CIImage *)arg0;
- (char)_isIdentity;
- (void)setInputContrast:(NSNumber *)arg0;
- (NSNumber *)inputContrast;
- (NSNumber *)inputUseCube;
- (void)setInputUseCube:(NSNumber *)arg0;
- (id)_kernelV_lt1;
- (id)_kernelV_gt1;
- (id)_kernelCPos;
- (id)_kernelCNeg;
- (id)_kernelCast;
- (NSNumber *)inputVibrancy;
- (void)setInputVibrancy:(NSNumber *)arg0;
- (NSNumber *)inputCast;
- (void)setInputCast:(NSNumber *)arg0;
- (void)setValue:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)dealloc;
- (CIImage *)outputImage;

@end
