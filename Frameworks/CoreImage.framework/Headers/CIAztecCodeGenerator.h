/* Runtime dump - CIAztecCodeGenerator
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIAztecCodeGenerator : CICodeGenerator
{
    NSNumber * inputCorrectionLevel;
    NSNumber * inputLayers;
    NSNumber * inputCompactStyle;
}

@property (copy, nonatomic) NSNumber * inputCorrectionLevel;
@property (copy, nonatomic) NSNumber * inputLayers;
@property (copy, nonatomic) NSNumber * inputCompactStyle;

+ (NSArray *)customAttributes;

- (struct CGImage *)outputCGImage;
- (void)setInputCorrectionLevel:(NSNumber *)arg0;
- (NSNumber *)inputCorrectionLevel;
- (void)setInputLayers:(NSNumber *)arg0;
- (NSNumber *)inputLayers;
- (NSNumber *)inputCompactStyle;
- (void)setInputCompactStyle:(NSNumber *)arg0;
- (void)setValue:(NSObject *)arg0 forUndefinedKey:(NSString *)arg1;

@end
