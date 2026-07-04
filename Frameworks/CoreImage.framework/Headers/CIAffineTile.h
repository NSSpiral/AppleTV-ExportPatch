/* Runtime dump - CIAffineTile
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIAffineTile : CIFilter
{
    CIImage * inputImage;
    NSValue * inputTransform;
}

@property (retain, nonatomic) CIImage * inputImage;
@property (retain, nonatomic) NSValue * inputTransform;

+ (NSArray *)customAttributes;

- (CIImage *)inputImage;
- (void)setInputImage:(CIImage *)arg0;
- (void)setInputTransform:(NSValue *)arg0;
- (NSValue *)inputTransform;
- (void)setDefaults;
- (CIImage *)outputImage;

@end
