/* Runtime dump - BWAudioSourceNode
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWAudioSourceNode : BWSourceNode
{
    struct opaqueCMSession * _CMSession;
    char _configuresSession;
    char _isAppAudioSession;
    char _didBeginInterruption;
    struct ? _clientAuditToken;
    char _clientAuditTokenIsValid;
    int _clientPID;
    struct OpaqueCMClock * _clock;
    struct opaqueCMFormatDescription * _formatDescription;
    unsigned int _pullDuration;
    struct OpaqueAudioComponentInstance * _audioUnit;
    unsigned long _auSubType;
    struct opaqueCMSimpleQueue * _renderProcErrorQueue;
    struct opaqueCMSimpleQueue * _inactiveBuffersQueue;
    struct opaqueCMSimpleQueue * _activeBuffersQueue;
    struct ? _nextExpectedSampleTime;
    NSObject<OS_dispatch_queue> * _generateSamplesDispatchQueue;
    char _streamStarted;
    char _streamInterrupted;
    char _levelMeteringEnabled;
    int _audioLevelUnits;
    struct ? _latencyOffset;
    char _usesVideoCMSessionAudioMode;
    char _selectsMicForFrontCamera;
}

@property (nonatomic) char levelMeteringEnabled;
@property (readonly, nonatomic) NSArray * audioLevels;
@property (nonatomic) char usesVideoCMSessionAudioMode;
@property (nonatomic) char selectsMicForFrontCamera;
@property (nonatomic) char interrupted;

+ (void)initialize;
+ (double)_desiredSampleRate;

- (void)dealloc;
- (char)start:(id *)arg0;
- (NSString *)nodeSubType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (BWAudioSourceNode *)initWithCMSession:(struct opaqueCMSession *)arg0 configureSession:(char)arg1 clientToken:(NSString *)arg2 clientPID:(int)arg3;
- (void)setLevelMeteringEnabled:(char)arg0;
- (void)setUsesVideoCMSessionAudioMode:(char)arg0;
- (void)setSelectsMicForFrontCamera:(char)arg0;
- (NSArray *)audioLevels;
- (long)_setCMSessionAudioModeAndSelectMic;
- (long)_updatePullFormatDescription;
- (long)_setCMSessionPropertyWithKey:(struct __CFString *)arg0 value:(void *)arg1;
- (long)_setupAudioUnit;
- (long)_configureCMSessionWithDefaultHardwareSampleRate:(double)arg0;
- (long)_selectMicForAudioRoute:(id)arg0;
- (long)_getAudioDevicePullFrames:(unsigned int *)arg0;
- (long)_generatePullBuffers;
- (unsigned int)_audioCombinedLatency;
- (struct opaqueCMSampleBuffer *)_createSampleBufferForBufferTimestampedAudioBufferList:(struct TimestampedAudioBufferList *)arg0;
- (void)makeCurrentConfigurationLive;
- (char)hasNonLiveConfigurationChanges;
- (char)levelMeteringEnabled;
- (void)_generateSamples;
- (char)usesVideoCMSessionAudioMode;
- (char)selectsMicForFrontCamera;
- (char)interrupted;
- (void)setInterrupted:(char)arg0;
- (char)stop:(id *)arg0;
- (struct OpaqueCMClock *)clock;

@end
