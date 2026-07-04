/* Runtime dump - BWThumbnailGeneratorNode
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWThumbnailGeneratorNode : BWNode
{
    struct OpaqueVTPixelTransferSession * _pixelTransferSession;
    char _rotateIfPortrait;
    int _rotationDegrees;
    struct OpaqueVTImageRotationSession * _imageRotationSession;
}

+ (void)initialize;

- (void)dealloc;
- (NSString *)nodeType;
- (NSString *)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(NSObject *)arg1;
- (void)didSelectFormat:(NSString *)arg0 forInput:(NSObject *)arg1;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (BWThumbnailGeneratorNode *)initWithRotationHint:(char)arg0 rotationDegrees:(int)arg1;

@end
