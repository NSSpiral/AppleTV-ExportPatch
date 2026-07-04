/* Runtime dump - CIColorCubeWithColorSpace
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIColorCubeWithColorSpace : CIColorCube
{
    id inputColorSpace;
}

@property (retain, nonatomic) id inputColorSpace;

+ (NSArray *)customAttributes;

- (void)setInputColorSpace:(NSObject *)arg0;
- (NSObject *)inputColorSpace;
- (void)setDefaults;
- (CIImage *)outputImage;

@end
