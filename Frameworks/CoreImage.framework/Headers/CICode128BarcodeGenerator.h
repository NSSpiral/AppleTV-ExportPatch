/* Runtime dump - CICode128BarcodeGenerator
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CICode128BarcodeGenerator : CICodeGenerator
{
    NSNumber * inputQuietSpace;
}

@property (copy, nonatomic) NSNumber * inputQuietSpace;

+ (NSArray *)customAttributes;

- (struct CGImage *)outputCGImage;
- (NSNumber *)inputQuietSpace;
- (void)setInputQuietSpace:(NSNumber *)arg0;

@end
