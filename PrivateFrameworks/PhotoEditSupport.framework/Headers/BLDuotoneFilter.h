/* Runtime dump - BLDuotoneFilter
 * Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLDuotoneFilter : CIFilter
{
    char _needsReprocess;
    float _lastAmount;
    float _lastStrength;
    char _lastAddColor;
    int _lastVersion;
    CIImage * _inputImage;
    NSNumber * _inputAmount;
    NSNumber * _inputStrength;
    NSNumber * _inputAddColor;
    NSNumber * _inputVersion;
    CIFilter * _colorCubeFilter;
}

@property (retain, nonatomic) CIImage * inputImage;
@property (copy, nonatomic) NSNumber * inputAmount;
@property (copy, nonatomic) NSNumber * inputStrength;
@property (copy, nonatomic) NSNumber * inputAddColor;
@property (copy, nonatomic) NSNumber * inputVersion;
@property (retain, nonatomic) CIFilter * colorCubeFilter;

- (CIImage *)inputImage;
- (void)setInputImage:(CIImage *)arg0;
- (void)setInputAmount:(NSNumber *)arg0;
- (NSNumber *)inputAmount;
- (NSNumber *)inputStrength;
- (void)setInputStrength:(NSNumber *)arg0;
- (void).cxx_destruct;
- (CIFilter *)colorCubeFilter;
- (void)setColorCubeFilter:(CIFilter *)arg0;
- (NSNumber *)inputAddColor;
- (void)setInputAddColor:(NSNumber *)arg0;
- (NSNumber *)inputVersion;
- (void)setInputVersion:(NSNumber *)arg0;
- (CIImage *)outputImage;

@end
