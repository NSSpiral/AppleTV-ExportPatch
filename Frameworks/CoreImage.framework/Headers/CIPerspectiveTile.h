/* Runtime dump - CIPerspectiveTile
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIPerspectiveTile : CIFilter
{
    CIImage * inputImage;
    CIVector * inputTopLeft;
    CIVector * inputTopRight;
    CIVector * inputBottomRight;
    CIVector * inputBottomLeft;
}

@property (retain, nonatomic) CIImage * inputImage;
@property (retain, nonatomic) CIVector * inputTopLeft;
@property (retain, nonatomic) CIVector * inputTopRight;
@property (retain, nonatomic) CIVector * inputBottomRight;
@property (retain, nonatomic) CIVector * inputBottomLeft;

+ (NSArray *)customAttributes;

- (CIImage *)inputImage;
- (void)setInputImage:(CIImage *)arg0;
- (CIKernel *)_kernel;
- (CIVector *)inputTopLeft;
- (void)setInputTopLeft:(CIVector *)arg0;
- (CIVector *)inputTopRight;
- (void)setInputTopRight:(CIVector *)arg0;
- (CIVector *)inputBottomRight;
- (void)setInputBottomRight:(CIVector *)arg0;
- (CIVector *)inputBottomLeft;
- (void)setInputBottomLeft:(CIVector *)arg0;
- (CIImage *)outputImage;

@end
