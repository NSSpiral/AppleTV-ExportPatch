/* Runtime dump - BLBlackAndWhiteFilter
 * Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLBlackAndWhiteFilter : CIFilter
{
    char _needsReprocess;
    float _lastAmount;
    char _lastAppySepia;
    char _lastApplyGrain;
    struct CGRect _lastDestinationRect;
    int _lastVersion;
    float _lastPhototone;
    float _lastNeutralGamma;
    int _lastPreset;
    CIImage * _inputImage;
    NSNumber * _inputAmount;
    NSNumber * _inputApplySepia;
    NSNumber * _inputApplyGrain;
    CIVector * _inputDestinationRect;
    CIVector * _inputHueStrengthArray;
    NSNumber * _inputVersion;
    NSNumber * _inputPhototone;
    NSNumber * _inputNeutralGamma;
    NSNumber * _inputPreset;
    NSNumber * _inputPadding;
    CIFilter * _colorCubeFilterBW;
    CIFilter * _colorCubeFilterGrain;
    BLPixelImageBuffer * _grainImage;
    NSData * _precomputedCube;
    CIVector * _lastHueStrengthArray;
}

@property (retain, nonatomic) CIImage * inputImage;
@property (copy, nonatomic) NSNumber * inputAmount;
@property (copy, nonatomic) NSNumber * inputApplySepia;
@property (copy, nonatomic) NSNumber * inputApplyGrain;
@property (copy, nonatomic) CIVector * inputDestinationRect;
@property (copy, nonatomic) CIVector * inputHueStrengthArray;
@property (copy, nonatomic) NSNumber * inputVersion;
@property (copy, nonatomic) NSNumber * inputPhototone;
@property (copy, nonatomic) NSNumber * inputNeutralGamma;
@property (copy, nonatomic) NSNumber * inputPreset;
@property (copy, nonatomic) NSNumber * inputPadding;
@property (retain, nonatomic) CIFilter * colorCubeFilterBW;
@property (retain, nonatomic) CIFilter * colorCubeFilterGrain;
@property (retain, nonatomic) BLPixelImageBuffer * grainImage;
@property (retain, nonatomic) NSData * precomputedCube;
@property (retain, nonatomic) CIVector * lastHueStrengthArray;

- (CIImage *)inputImage;
- (void)setInputImage:(CIImage *)arg0;
- (void)setInputAmount:(NSNumber *)arg0;
- (NSNumber *)inputAmount;
- (NSNumber *)inputNeutralGamma;
- (void)setInputNeutralGamma:(NSNumber *)arg0;
- (void)setDefaults;
- (BLBlackAndWhiteFilter *)init;
- (void).cxx_destruct;
- (NSNumber *)inputVersion;
- (void)setInputVersion:(NSNumber *)arg0;
- (void)setInputHueStrengthArray:(CIVector *)arg0;
- (void)setInputPhototone:(NSNumber *)arg0;
- (NSData *)precomputedCube;
- (void)setPrecomputedCube:(NSData *)arg0;
- (void)setLastHueStrengthArray:(CIVector *)arg0;
- (CIVector *)inputHueStrengthArray;
- (NSNumber *)inputPhototone;
- (CIVector *)lastHueStrengthArray;
- (void)setInputApplySepia:(NSNumber *)arg0;
- (void)setInputApplyGrain:(NSNumber *)arg0;
- (void)setInputPreset:(NSNumber *)arg0;
- (void)setInputPadding:(NSNumber *)arg0;
- (BLPixelImageBuffer *)grainImage;
- (void)setGrainImage:(BLPixelImageBuffer *)arg0;
- (id)generateGrain:(id)arg0 destRect:(struct CGRect)arg1;
- (id)loadGrain:(id)arg0 destRect:(struct CGRect)arg1 padding:(struct CGSize)arg2;
- (CIFilter *)colorCubeFilterBW;
- (void)setColorCubeFilterBW:(CIFilter *)arg0;
- (CIFilter *)colorCubeFilterGrain;
- (void)setColorCubeFilterGrain:(CIFilter *)arg0;
- (id)applyGrain:(id)arg0 cube:(id)arg1 destRect:(struct CGRect)arg2 padding:(struct CGSize)arg3;
- (NSNumber *)inputApplySepia;
- (NSNumber *)inputApplyGrain;
- (CIVector *)inputDestinationRect;
- (void)setInputDestinationRect:(CIVector *)arg0;
- (NSNumber *)inputPreset;
- (NSNumber *)inputPadding;
- (CIImage *)outputImage;

@end
