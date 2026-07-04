/* Runtime dump - BWRemoteQueueSinkNode
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWRemoteQueueSinkNode : BWSinkNode
{
    char _mediaTypeIsVideo;
    struct remoteQueueSenderOpaque * _remoteQueueSender;
    struct shmemPoolOpaque * _sharedMemoryPool;
    <BWRemoteQueueSinkNodeDelegate> * _delegate;
    int _clientVideoRetainedBufferCount;
    char _discardsLateSampleBuffers;
    char _attachPanoramaMetadata;
    char _sentDiagnosticMetadata;
    NSDictionary * _videoColorInfo;
    struct opaqueCMFormatDescription * _cachedVideoFormatDescription;
    struct ? _lastPTS;
}

@property (nonatomic) <BWRemoteQueueSinkNodeDelegate> * delegate;

+ (void)initialize;

- (void)dealloc;
- (void)setDelegate:(<BWRemoteQueueSinkNodeDelegate> *)arg0;
- (<BWRemoteQueueSinkNodeDelegate> *)delegate;
- (void)configurationWithID:(long long)arg0 updatedFormat:(BWFormat *)arg1 didBecomeLiveForInput:(NSObject *)arg2;
- (void)didReachEndOfDataForInput:(NSObject *)arg0;
- (NSString *)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(NSObject *)arg1;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (BWRemoteQueueSinkNode *)initWithMediaType:(unsigned long)arg0;
- (void)setVideoColorInfo:(NSDictionary *)arg0;
- (void)setDiscardsLateSampleBuffers:(char)arg0;
- (void)setClientVideoRetainedBufferCount:(int)arg0;
- (void)setAttachPanoramaMetadata:(char)arg0;
- (void)handleDroppedSample:(NSObject *)arg0 forInput:(NSObject *)arg1;
- (void)_handlePeerTerminated;
- (int)clientVideoRetainedBufferCount;
- (char)discardsLateSampleBuffers;
- (char)attachPanoramaMetadata;
- (NSDictionary *)videoColorInfo;
- (void)_attachDiagnosticMetadataIfDevicePropertiesLockedForPanorama:(struct opaqueCMSampleBuffer *)arg0;

@end
