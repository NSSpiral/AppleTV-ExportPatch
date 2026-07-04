/* Runtime dump - BWFaceDetectionNode
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWFaceDetectionNode : BWFanOutNode
{
    BWNodeOutput * _metadataObjectOutput;
    BWNodeOutput * _boxedMetadataOutput;
    struct CGRect _rectOfInterest;
    char _metadataObjectOutputEnabled;
    char _boxedMetadataOutputEnabled;
    int _lastObjectFaceCount;
    struct opaqueCMFormatDescription * _boxedFormatDescription;
    unsigned long _localIDOfDetectedFace;
    unsigned long _localIDOfDetectedFaceFaceID;
    unsigned long _localIDOfDetectedFaceBounds;
    unsigned long _localIDOfDetectedFaceRoll;
    unsigned long _localIDOfDetectedFaceYaw;
    struct OpaqueCMBlockBuffer * _emptyMetadataSampleData;
    struct ? _prevBoxedFacePTS;
    struct ? _prevBoxedFaceDur;
    struct ? _prevBoxedNoFacePTS;
    char _lastBoxedFaceCount;
}

@property (readonly) BWNodeOutput * metadataObjectOutput;
@property (readonly) BWNodeOutput * boxedMetadataOutput;

+ (void)initialize;

- (struct CGRect)rectOfInterest;
- (void)setRectOfInterest:(struct CGRect)arg0;
- (void)dealloc;
- (BWFaceDetectionNode *)init;
- (NSString *)nodeType;
- (void)configurationWithID:(long long)arg0 updatedFormat:(BWFormat *)arg1 didBecomeLiveForInput:(NSObject *)arg2;
- (void)didReachEndOfDataForInput:(NSObject *)arg0;
- (NSString *)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(NSObject *)arg1;
- (void)_renderSampleBufferForMetadataObjectOutput:(struct opaqueCMSampleBuffer *)arg0 withFaceArray:(NSArray *)arg1;
- (void)_renderSampleBufferForBoxedMetadataOutput:(struct opaqueCMSampleBuffer *)arg0 withFaceArray:(NSArray *)arg1;
- (struct OpaqueCMBlockBuffer *)_getEmptyMetadataSampleData;
- (BWNodeOutput *)metadataObjectOutput;
- (BWNodeOutput *)boxedMetadataOutput;
- (void)setMetadataObjectOutputEnabled:(char)arg0;
- (char)metadataObjectOutputEnabled;
- (void)setBoxedMetadataOutputEnabled:(char)arg0;
- (char)boxedMetadataOutputEnabled;
- (void)didSelectFormat:(NSString *)arg0 forInput:(NSObject *)arg1;

@end
