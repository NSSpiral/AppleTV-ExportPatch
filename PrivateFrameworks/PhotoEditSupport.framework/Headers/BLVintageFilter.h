/* Runtime dump - BLVintageFilter
 * Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLVintageFilter : CIFilter
{
    char _needsReprocess;
    int _lastAmount;
    float _lastStrength;
    CIImage * _inputImage;
    NSNumber * _inputAmount;
    NSNumber * _inputStrength;
    CIFilter * _colorCubeFilter;
    CIFilter * _maskFilter;
}

@property (retain, nonatomic) CIImage * inputImage;
@property (copy, nonatomic) NSNumber * inputAmount;
@property (copy, nonatomic) NSNumber * inputStrength;
@property (retain, nonatomic) CIFilter * colorCubeFilter;
@property (retain, nonatomic) CIFilter * maskFilter;

- (CIImage *)inputImage;
- (void)setInputImage:(CIImage *)arg0;
- (void)setInputAmount:(NSNumber *)arg0;
- (NSNumber *)inputAmount;
- (NSNumber *)inputStrength;
- (void)setInputStrength:(NSNumber *)arg0;
- (void)setDefaults;
- (BLVintageFilter *)init;
- (void).cxx_destruct;
- (CIFilter *)colorCubeFilter;
- (void)setColorCubeFilter:(CIFilter *)arg0;
- (void)setMaskFilter:(CIFilter *)arg0;
- (CIFilter *)maskFilter;
- (CIImage *)outputImage;

@end
