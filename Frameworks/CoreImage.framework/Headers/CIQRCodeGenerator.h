/* Runtime dump - CIQRCodeGenerator
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIQRCodeGenerator : CICodeGenerator
{
    NSString * inputCorrectionLevel;
}

@property (copy, nonatomic) NSString * inputCorrectionLevel;

+ (NSArray *)customAttributes;

- (struct CGImage *)outputCGImage;
- (void)setInputCorrectionLevel:(NSString *)arg0;
- (NSString *)inputCorrectionLevel;
- (void)setValue:(NSObject *)arg0 forUndefinedKey:(NSString *)arg1;

@end
