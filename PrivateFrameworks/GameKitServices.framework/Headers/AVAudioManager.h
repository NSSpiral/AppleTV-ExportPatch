/* Runtime dump - AVAudioManager
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface AVAudioManager : NSObject
{
    int direction;
    int audioRefCount;
    int connectionRefCount;
    int internalBlockSize;
    int hardwareSampleRate;
    struct AudioStreamBasicDescription vpioFormat;
    char usingFloat;
    char isGKVoiceChat;
    char isInMediaserverd;
    char isMicrophoneMuted;
    char enableSpeakerPhone;
    char isUsingSuppression;
    char isTetheredDisplayMode;
    int clientPID;
    NSDictionary * backMicSource;
    NSDictionary * frontMicSource;
    struct _opaque_pthread_mutex_t audioLock;
    NSObject<OS_dispatch_queue> * cmSessionQueue;
    NSObject<OS_dispatch_queue> * inputDeviceQueue;
    struct tagHANDLE * hAUIO;
    AVAudioDevice * targetInputDevice;
    int inferredOperatingMode;
    int inferredDeviceRole;
    char inferredUseSpeakerMode;
    struct opaqueCMSession * cmSession;
    int cmSessionRefCount;
    float fLastStartAudioSessionCall;
    NSDictionary * requestedSessionParams;
    NSNumber * currentClientPriority;
    NSString * currentAudioCategory;
    NSString * currentAudioMode;
    unsigned long currentVPOperatingMode;
    char currentAudioRecordingMode;
    int currentSampleRate;
    int currentMinSamplesPerFrame;
    char currentReceiverStatus;
    int requestedVPOperatingMode;
    struct AudioEventQueue_t * eventQ;
    NSMutableArray * spkrConfList;
    NSMutableArray * micConfList;
    char micInUse;
    char spkrInUse;
}

@property (nonatomic) char isInMediaserverd;
@property char enableSpeakerPhone;
@property (nonatomic) int clientPID;
@property (nonatomic) char isUsingSuppression;
@property (nonatomic) char isGKVoiceChat;
@property (readonly, nonatomic) char usingFloat;
@property (readonly, nonatomic) int inferredOperatingMode;
@property (retain) AVAudioDevice * targetInputDevice;

+ (AVAudioManager *)defaultAVAudioManager;

- (AVAudioManager *)init;
- (void)setDirection:(int)arg0;
- (void)setMicrophoneMuted:(char)arg0;
- (void)setEnableSpeakerPhone:(char)arg0;
- (char)isSpeakerPhoneEnabled;
- (void)setRemoteBasebandCodecType:(NSObject *)arg0 sampleRate:(id)arg1;
- (void)startAudioIOWithFarEndVersionInfo:(struct VoiceIOFarEndVersionInfo *)arg0 minSamplesPerFrame:(int)arg1 internalFormat:(struct AudioStreamBasicDescription)arg2 allowAudioRecording:(char)arg3 operatingMode:(int)arg4 deviceRole:(int)arg5 remoteBasebandCodecType:(NSObject *)arg6 remoteBasebandCodecSampleRate:(id)arg7 completionHandler:(id /* block */)arg8;
- (void)stopAudioIO;
- (void)setIsGKVoiceChat:(char)arg0;
- (char)isGKVoiceChat;
- (int)inferredOperatingMode;
- (void)setSamplesPerFrame:(int)arg0;
- (void)getVpioFormat:(struct AudioStreamBasicDescription *)arg0;
- (void)enableMetering:(char)arg0 isInputMeter:(char)arg1;
- (void)setIsUsingSuppression:(char)arg0;
- (char)isUsingSuppression;
- (char)usingFloat;
- (void)onCaptureSound:(char *)arg0 numBytes:(int)arg1 numSamples:(int)arg2 timeStamp:(unsigned int)arg3 timeStampDelta:(int)arg4 bufferedSamples:(int)arg5 hostTime:(double)arg6 averagePower:(float)arg7 voiceActivity:(unsigned long)arg8;
- (void)onPlaySound:(char *)arg0 numBytes:(int)arg1 numSamples:(int)arg2 timeStamp:(unsigned int)arg3 averagePower:(float)arg4;
- (void)addConference:(AVConference *)arg0;
- (void)removeConference:(AVConference *)arg0;
- (NSObject *)currentInputDevice;
- (void)setClientPID:(int)arg0;
- (char)setCurrentInputDevice:(NSObject *)arg0;
- (void)setIsInMediaserverd:(char)arg0;
- (void)selectMicForDirection;
- (void)cleanupAUIOSetupWithResult:(long)arg0 completionHandler:(id /* block */)arg1;
- (unsigned long)vpOperationModeForConferenceOperatingMode:(int)arg0 deviceRole:(int)arg1;
- (void)processEventQueue;
- (void)AUIOSetup:(struct VoiceIOFarEndVersionInfo *)arg0 minSamplesPerFrame:(int)arg1 allowAudioRecording:(char)arg2 ignoreRefCount:(char)arg3 operatingMode:(int)arg4 deviceRole:(int)arg5 remoteCodecType:(unsigned long)arg6 remoteCodecSampleRate:(double)arg7 completionHandler:(id /* block */)arg8;
- (char)isInMediaserverd;
- (unsigned long)startAudioSessionWithCompletionHandler:(id /* block */)arg0 dispatchQueue:(/* block */ id)arg1;
- (void)stopAudioSession:(unsigned long)arg0;
- (void)AUIOTeardown:(char)arg0;
- (void)tearDownAudioSession:(unsigned long)arg0 forceTearDown:(char)arg1;
- (void)tearDownAudioIO:(char)arg0;
- (void)internalSetRemoteBasebandCodecType:(NSObject *)arg0 sampleRate:(id)arg1;
- (void)audioSessionClientDied:(int)arg0;
- (void)setAudioSessionParameters:(NSDictionary *)arg0;
- (void)setupAudioNotifications;
- (char)projectionModeEnabledState;
- (void)setAudioSessionProperties;
- (void)resetAudioSessionProperties;
- (unsigned long)setupAudioSession;
- (void)invalidateCurrentAudioParams;
- (void)setupInputBeamforming;
- (void)setupVPBlockFormat;
- (void)setSampleRate;
- (void)setBlockSize:(char)arg0;
- (char)forceSampleRate:(double *)arg0;
- (char)forceBufferFrames:(int *)arg0;
- (struct opaqueCMSession *)cmSessionRef;
- (void)handleAudioInterruption:(struct opaqueCMSession *)arg0 interruptionInfo:(struct __CFDictionary *)arg1 cmd:(unsigned int)arg2;
- (void)setBlockSizeDispatch:(char)arg0;
- (int)clientPID;
- (AVAudioDevice *)targetInputDevice;
- (void)setTargetInputDevice:(AVAudioDevice *)arg0;

@end
