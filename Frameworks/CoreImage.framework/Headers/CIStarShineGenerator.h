/* Runtime dump - CIStarShineGenerator
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIStarShineGenerator : CIFilter
{
    CIVector * inputCenter;
    CIColor * inputColor;
    NSNumber * inputRadius;
    NSNumber * inputCrossScale;
    NSNumber * inputCrossAngle;
    NSNumber * inputCrossOpacity;
    NSNumber * inputCrossWidth;
    NSNumber * inputEpsilon;
}

@property (retain, nonatomic) CIVector * inputCenter;
@property (retain, nonatomic) CIColor * inputColor;
@property (retain, nonatomic) NSNumber * inputRadius;
@property (retain, nonatomic) NSNumber * inputCrossScale;
@property (retain, nonatomic) NSNumber * inputCrossAngle;
@property (retain, nonatomic) NSNumber * inputCrossOpacity;
@property (retain, nonatomic) NSNumber * inputCrossWidth;
@property (retain, nonatomic) NSNumber * inputEpsilon;

+ (NSArray *)customAttributes;

- (void)setInputRadius:(NSNumber *)arg0;
- (NSNumber *)inputRadius;
- (CIKernel *)_kernel;
- (CIVector *)inputCenter;
- (void)setInputCenter:(CIVector *)arg0;
- (void)setInputColor:(CIColor *)arg0;
- (CIColor *)inputColor;
- (void)setInputCrossScale:(NSNumber *)arg0;
- (void)setInputCrossAngle:(NSNumber *)arg0;
- (void)setInputCrossOpacity:(NSNumber *)arg0;
- (void)setInputCrossWidth:(NSNumber *)arg0;
- (void)setInputEpsilon:(NSNumber *)arg0;
- (NSNumber *)inputEpsilon;
- (NSNumber *)inputCrossAngle;
- (NSNumber *)inputCrossScale;
- (NSNumber *)inputCrossWidth;
- (NSNumber *)inputCrossOpacity;
- (void)setDefaults;
- (CIImage *)outputImage;

@end
