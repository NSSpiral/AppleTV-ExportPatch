/* Runtime dump - CIPDF417BarcodeGenerator
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIPDF417BarcodeGenerator : CICodeGenerator
{
    NSDictionary * inputOptions;
}

@property (copy, nonatomic) NSDictionary * inputOptions;

+ (NSArray *)customAttributes;

- (struct CGImage *)outputCGImage;
- (void)setInputOptions:(NSDictionary *)arg0;
- (NSDictionary *)inputOptions;
- (void)setDefaults;

@end
