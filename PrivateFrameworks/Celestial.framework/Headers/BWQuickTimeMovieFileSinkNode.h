/* Runtime dump - BWQuickTimeMovieFileSinkNode
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWQuickTimeMovieFileSinkNode : BWFileSinkNode
{
    unsigned long long _currFileSize;
    unsigned long long _maxFileSize;
    unsigned long long _adjustedMaxFileSize;
    unsigned long long _minFreeDiskSpaceLimit;
    unsigned long long _adjustedMinFreeDiskSpaceLimit;
    struct ? _currFileDuration;
    struct ? _checkDiskSpaceAtThisDuration;
    struct ? _maxFileDuration;
    struct ? _adjustedMaxFileDuration;
    struct ? _nextTimeToReturnFileSize;
    int _masterInputTimeScale;
    float _maxVideoFrameRate;
    NSArray * _stagingQueues;
    FigCaptureRecordingSettings * _settings;
    char * _parentPath;
    struct ? _startingPTS;
    NSDictionary * _movieLevelMetadata;
    NSArray * _trackReferenceListForMetadataInputs;
    unsigned int _numInputs;
    NSObject<OS_dispatch_queue> * _thumbnailGenerationDispatchQueue;
    struct __IOSurface * _thumbnailSurface;
    int _recordingState;
    struct OpaqueFigFormatWriter * _formatWriter;
    struct OpaqueCMByteStream * _byteStream;
    int * _trackIDs;
    char * _haveSeenSamplesForTrack;
    char * _finalDurationNeedsToBeWrittenForTrack;
    unsigned int _masterInputIndex;
    char _didBeginSession;
    char _didBeginWriting;
    char _needToDeMoof;
    char _debugAudio;
    char _haveDebugASBD;
    unsigned int _numAudioTracks;
    struct AudioStreamBasicDescription _debugASBD;
    struct AudioBufferList * _debugABL;
    struct ? _debugDurationForFailOfDiskSpaceTest;
    struct OpaqueFigSimpleMutex * _propertyMutex;
}

@property (copy, nonatomic) NSDictionary * movieLevelMetadata;
@property (copy, nonatomic) NSArray * trackReferenceListForMetadataInputs;
@property (nonatomic) float maxVideoFrameRate;

+ (void)initialize;

- (void)setMovieLevelMetadata:(NSDictionary *)arg0;
- (void)dealloc;
- (BWQuickTimeMovieFileSinkNode *)init;
- (void)configurationWithID:(long long)arg0 updatedFormat:(BWFormat *)arg1 didBecomeLiveForInput:(NSObject *)arg2;
- (void)didReachEndOfDataForInput:(NSObject *)arg0;
- (NSString *)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(NSObject *)arg1;
- (struct ?)lastFileDuration;
- (unsigned long long)lastFileSize;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)setMaxVideoFrameRate:(float)arg0;
- (BWQuickTimeMovieFileSinkNode *)initWithNumberOfVideoInputs:(unsigned int)arg0 numberOfAudioInputs:(unsigned int)arg1 numberOfMetadataInputs:(unsigned int)arg2;
- (void)setTrackReferenceListForMetadataInputs:(NSArray *)arg0;
- (NSDictionary *)movieLevelMetadata;
- (void)_doEndRecordingAtTime:(struct ?)arg0;
- (char)_driveStateMachineWithBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(NSObject *)arg1 sampleBufferAlreadyAtHeadOfQueue:(char)arg2;
- (void)_writeBuffer:(struct opaqueCMSampleBuffer *)arg0 forTrackIndex:(unsigned int)arg1;
- (long)_writeCommonMetadata:(NSData *)arg0 withProperties:(NSDictionary *)arg1 usingWriter:(struct OpaqueFigMetadataWriter *)arg2;
- (NSArray *)trackReferenceListForMetadataInputs;
- (long)_startUpFormatWriterAtTime:(struct ?)arg0 withSettings:(FigCaptureRecordingSettings *)arg1;
- (unsigned long long)_getCurrentFileSize:(char)arg0;
- (void)_preprocessingForFirstVideoBuffer:(struct opaqueCMSampleBuffer *)arg0 forInputIndex:(unsigned int)arg1;
- (void)_preprocessingForFirstAudioBuffer:(struct opaqueCMSampleBuffer *)arg0 forInputIndex:(unsigned int)arg1;
- (long)_adjustRecordingLimitsForMovieTimeScale:(int)arg0;
- (void)_printBufferEvent:(struct opaqueCMSampleBuffer *)arg0 forNodeInputIndex:(unsigned int)arg1 eventName:(NSString *)arg2;
- (long)_checkFreeSpace;
- (void)_debugAudioUsingSampleBuffer:(struct opaqueCMSampleBuffer *)arg0;
- (char)_driveStateMachineWithStartMarkerBuffer:(struct opaqueCMSampleBuffer *)arg0 forInputIndex:(unsigned int)arg1 sampleBufferAlreadyAtHeadOfQueue:(char)arg2;
- (char)_driveStateMachineWithStopMarkerBuffer:(struct opaqueCMSampleBuffer *)arg0 forInputIndex:(unsigned int)arg1 sampleBufferAlreadyAtHeadOfQueue:(char)arg2;
- (char)_driveStateMachineWithPauseMarkerBuffer:(struct opaqueCMSampleBuffer *)arg0 forInputIndex:(unsigned int)arg1 sampleBufferAlreadyAtHeadOfQueue:(char)arg2;
- (char)_driveStateMachineWithResumeMarkerBuffer:(struct opaqueCMSampleBuffer *)arg0 forInputIndex:(unsigned int)arg1 sampleBufferAlreadyAtHeadOfQueue:(char)arg2;
- (void)_driveStateMachineWithMediaBuffer:(struct opaqueCMSampleBuffer *)arg0 forInputIndex:(unsigned int)arg1 sampleBufferAlreadyAtHeadOfQueue:(char)arg2;
- (struct ?)_findStartMarkersWithMatchedStagedSetting:(id *)arg0 thumbnailSourcePixelBuffer:(struct __CVBuffer * *)arg1 sensorVideoPort:(struct __CVBuffer)arg2;
- (long)_doStartRecordingAtTime:(struct ?)arg0 withSettings:(FigCaptureRecordingSettings *)arg1 thumbnailSourcePixelBuffer:(struct __CVBuffer *)arg2 sensorVideoPort:(struct __CFString *)arg3;
- (struct ?)_findMarkers:(struct __CFString *)arg0;
- (float)maxVideoFrameRate;

@end
