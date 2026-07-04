/* Runtime dump - BWVideoOrientationMetadataNode
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWVideoOrientationMetadataNode : BWNode <BWDeviceOrientationMonitorPortraitLandscapeUpdateDelegate>
{
    int _sourcePosition;
    struct OpaqueCMClock * _clock;
    struct OpaqueCMClock * _masterClock;
    BWDeviceOrientationMonitor * _deviceOrientationMonitor;
    struct opaqueCMFormatDescription * _boxedMetadataFormatDescription;
    unsigned long _localIDOfOrientationMetadata;
    int _mostRecentDevicePortraitLandscapeOrientation;
    char _recording;
    NSMutableArray * _transforms;
    id _bbufCache;
    NSObject<OS_dispatch_queue> * _emitSamplesDispatchQueue;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (void)initialize;

- (struct OpaqueCMClock *)masterClock;
- (void)setMasterClock:(struct OpaqueCMClock *)arg0;
- (void)dealloc;
- (BWVideoOrientationMetadataNode *)init;
- (NSString *)nodeType;
- (void)configurationWithID:(long long)arg0 updatedFormat:(BWFormat *)arg1 didBecomeLiveForInput:(NSObject *)arg2;
- (void)didReachEndOfDataForInput:(NSObject *)arg0;
- (NSString *)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(NSObject *)arg1;
- (int)sourcePosition;
- (void)setSourcePosition:(int)arg0;
- (void)didUpdatePortraitLandscapeOrientation:(int)arg0;
- (void)_releaseTransformData;
- (void)_queueUpCallToEmitSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 markerBufferOrFirstSample:(char)arg1;
- (void)_renderSampleBufferForBoxedFormatOutputAtTime:(struct ?)arg0 orientation:(int)arg1 firstSample:(char)arg2;

@end
