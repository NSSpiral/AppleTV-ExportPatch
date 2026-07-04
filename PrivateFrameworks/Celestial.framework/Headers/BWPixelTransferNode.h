/* Runtime dump - BWPixelTransferNode
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWPixelTransferNode : BWNode
{
    int _cropMode;
    int _liveCropMode;
    struct CGRect _inputCropRect;
    struct CGRect _liveInputCropRect;
    char _haveLiveInputCropRect;
    char _passesBuffersThroughWhenPossible;
    char _livePassesBuffersThroughWhenPossible;
    int _rotationDegrees;
    int _liveRotationDegrees;
    char _flipHorizontal;
    char _liveFlipHorizontal;
    char _flipVertical;
    char _liveFlipVertical;
    char _liveZeroFillBuffers;
    char _lowSpeed;
    char _liveLowSpeed;
    unsigned long _outputWidth;
    unsigned long _outputHeight;
    unsigned long _outputPixelFormat;
    struct OpaqueVTImageRotationSession * _rotationSession;
    int _rotationSessionRotationDegrees;
    char _rotationSessionFlipHorizontal;
    char _rotationSessionFlipVertical;
    char _rotationSessionZeroFillBuffers;
    char _rotationSessionLowSpeed;
    struct OpaqueVTPixelTransferSession * _transferSession;
    BWPixelBufferPool * _intermediateBufferPool;
    struct ? _intermediatePoolDimensions;
    struct opaqueCMFormatDescription * _outputFormatDescription;
    char _makeCurrentConfigurationLiveOnNextRenderCallback;
}

+ (void)initialize;

- (void)setOutputWidth:(unsigned long)arg0;
- (void)setOutputHeight:(unsigned long)arg0;
- (unsigned long)outputWidth;
- (unsigned long)outputHeight;
- (void)dealloc;
- (BWPixelTransferNode *)init;
- (int)rotationDegrees;
- (NSString *)nodeType;
- (void)configurationWithID:(long long)arg0 updatedFormat:(BWFormat *)arg1 didBecomeLiveForInput:(NSObject *)arg2;
- (void)didReachEndOfDataForInput:(NSObject *)arg0;
- (NSString *)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(NSObject *)arg1;
- (void)didSelectFormat:(NSString *)arg0 forInput:(NSObject *)arg1;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)setPassesBuffersThroughWhenPossible:(char)arg0;
- (char)passesBuffersThroughWhenPossible;
- (void)setCropMode:(int)arg0;
- (void)setOutputPixelFormat:(unsigned long)arg0;
- (void)setRotationDegrees:(int)arg0;
- (void)setFlipHorizontal:(char)arg0;
- (void)setFlipVertical:(char)arg0;
- (unsigned long)outputPixelFormat;
- (void)setInputCropRect:(struct CGRect)arg0;
- (void)setLowSpeed:(char)arg0;
- (void)makeCurrentConfigurationLive;
- (char)hasNonLiveConfigurationChanges;
- (void)_updateOutputRequirements;
- (char)_zeroFillBuffers;
- (void)_makeCurrentConfigurationLive;
- (char)_emitIfMarkerBuffer:(struct opaqueCMSampleBuffer *)arg0;
- (struct ?)_intermediateBufferDimensionsForInputDimensions:(struct ?)arg0 outputDimensions:(struct ?)arg1;
- (long)_ensureIntermediatePoolWithDimensions:(struct ?)arg0;
- (void)_ensureTransferSession;
- (void)_ensureRotationSession;
- (NSArray *)_preferredPixelFormats;
- (id)_preferredPixelFormatsWithInputPixelFormatFirst;
- (int)cropMode;
- (struct CGRect)inputCropRect;
- (char)flipHorizontal;
- (char)flipVertical;
- (char)lowSpeed;

@end
