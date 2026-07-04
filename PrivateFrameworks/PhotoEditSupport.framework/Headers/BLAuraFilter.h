/* Runtime dump - BLAuraFilter
 * Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLAuraFilter : CIFilter
{
    char _needsReprocess;
    float _lastAmount;
    float _lastSaturationHighPoint;
    int _lastVersion;
    CIImage * _inputImage;
    NSNumber * _inputAmount;
    NSNumber * _inputSaturationHighPoint;
    NSNumber * _inputVersion;
    CIFilter * _colorCubeFilter;
}

@property (retain, nonatomic) CIImage * inputImage;
@property (copy, nonatomic) NSNumber * inputAmount;
@property (copy, nonatomic) NSNumber * inputSaturationHighPoint;
@property (copy, nonatomic) NSNumber * inputVersion;
@property (retain, nonatomic) CIFilter * colorCubeFilter;

- (CIImage *)inputImage;
- (void)setInputImage:(CIImage *)arg0;
- (void)setInputAmount:(NSNumber *)arg0;
- (NSNumber *)inputAmount;
- (void)setDefaults;
- (BLAuraFilter *)init;
- (void).cxx_destruct;
- (CIFilter *)colorCubeFilter;
- (void)setColorCubeFilter:(CIFilter *)arg0;
- (NSNumber *)inputVersion;
- (void)setInputVersion:(NSNumber *)arg0;
- (void)setInputSaturationHighPoint:(NSNumber *)arg0;
- (NSNumber *)inputSaturationHighPoint;
- (CIImage *)outputImage;

@end
