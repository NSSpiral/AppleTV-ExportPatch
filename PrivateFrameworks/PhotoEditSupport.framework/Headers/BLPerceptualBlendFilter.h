/* Runtime dump - BLPerceptualBlendFilter
 * Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLPerceptualBlendFilter : CIFilter
{
    CIImage * _inputImage;
    CIImage * _inputBackgroundImage;
    CIImage * _inputMaskImage;
}

@property (retain) CIImage * inputImage;
@property (retain) CIImage * inputBackgroundImage;
@property (retain) CIImage * inputMaskImage;

- (CIImage *)inputImage;
- (void)setInputImage:(CIImage *)arg0;
- (CIImage *)inputBackgroundImage;
- (void)setInputBackgroundImage:(CIImage *)arg0;
- (CIImage *)inputMaskImage;
- (void)setInputMaskImage:(CIImage *)arg0;
- (void).cxx_destruct;
- (CIImage *)outputImage;

@end
