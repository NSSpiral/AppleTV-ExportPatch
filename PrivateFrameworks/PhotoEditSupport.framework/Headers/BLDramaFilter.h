/* Runtime dump - BLDramaFilter
 * Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLDramaFilter : CIFilter
{
    char _needsReprocess;
    float _lastAmount;
    float _lastPhototone;
    float _lastNeutralGamma;
    CIImage * _inputImage;
    NSNumber * _inputAmount;
    CIVector * _inputHueStrengthArray;
    NSNumber * _inputPhototone;
    NSNumber * _inputNeutralGamma;
    CIFilter * _colorCubeFilterDrama;
    NSData * _precomputedCube;
    CIVector * _lastHueStrengthArray;
}

@property (retain, nonatomic) CIImage * inputImage;
@property (copy, nonatomic) NSNumber * inputAmount;
@property (copy, nonatomic) CIVector * inputHueStrengthArray;
@property (copy, nonatomic) NSNumber * inputPhototone;
@property (copy, nonatomic) NSNumber * inputNeutralGamma;
@property (retain, nonatomic) CIFilter * colorCubeFilterDrama;
@property (retain, nonatomic) NSData * precomputedCube;
@property (retain, nonatomic) CIVector * lastHueStrengthArray;

- (CIImage *)inputImage;
- (void)setInputImage:(CIImage *)arg0;
- (void)setInputAmount:(NSNumber *)arg0;
- (NSNumber *)inputAmount;
- (NSNumber *)inputNeutralGamma;
- (void)setInputNeutralGamma:(NSNumber *)arg0;
- (void)setDefaults;
- (BLDramaFilter *)init;
- (void).cxx_destruct;
- (void)setInputHueStrengthArray:(CIVector *)arg0;
- (void)setInputPhototone:(NSNumber *)arg0;
- (NSData *)precomputedCube;
- (void)setPrecomputedCube:(NSData *)arg0;
- (CIFilter *)colorCubeFilterDrama;
- (void)setColorCubeFilterDrama:(CIFilter *)arg0;
- (void)setLastHueStrengthArray:(CIVector *)arg0;
- (CIVector *)inputHueStrengthArray;
- (NSNumber *)inputPhototone;
- (CIVector *)lastHueStrengthArray;
- (CIImage *)outputImage;

@end
