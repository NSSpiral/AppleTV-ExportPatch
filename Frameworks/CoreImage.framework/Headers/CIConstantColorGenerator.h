/* Runtime dump - CIConstantColorGenerator
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIConstantColorGenerator : CIFilter
{
    CIColor * inputColor;
}

@property (retain, nonatomic) CIColor * inputColor;

+ (NSArray *)customAttributes;

- (void)setInputColor:(CIColor *)arg0;
- (CIColor *)inputColor;
- (void)setDefaults;
- (CIImage *)outputImage;

@end
