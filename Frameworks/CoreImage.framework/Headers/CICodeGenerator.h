/* Runtime dump - CICodeGenerator
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CICodeGenerator : CIFilter
{
    NSData * inputMessage;
}

@property (copy, nonatomic) NSData * inputMessage;

- (struct CGImage *)outputCGImage;
- (NSData *)inputMessage;
- (void)setInputMessage:(NSData *)arg0;
- (CIImage *)outputImage;

@end
