/* Runtime dump - CIPerspectiveTransformWithExtent
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIPerspectiveTransformWithExtent : CIFilter
{
    CIImage * inputImage;
    CIVector * inputExtent;
    CIVector * inputTopLeft;
    CIVector * inputTopRight;
    CIVector * inputBottomRight;
    CIVector * inputBottomLeft;
}

@property (retain, nonatomic) CIImage * inputImage;
@property (retain, nonatomic) CIVector * inputExtent;
@property (retain, nonatomic) CIVector * inputTopLeft;
@property (retain, nonatomic) CIVector * inputTopRight;
@property (retain, nonatomic) CIVector * inputBottomRight;
@property (retain, nonatomic) CIVector * inputBottomLeft;

+ (NSArray *)customAttributes;

- (void)setInputExtent:(CIVector *)arg0;
- (CIImage *)inputImage;
- (void)setInputImage:(CIImage *)arg0;
- (CIVector *)inputExtent;
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
