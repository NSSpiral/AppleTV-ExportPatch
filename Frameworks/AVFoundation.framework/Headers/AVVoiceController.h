/* Runtime dump - AVVoiceController
 * Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AVVoiceController : NSObject
{
    void * _impl;
}

@property char bargeInDetectEnabled;
@property char stopOnBargeInEnabled;
@property (readonly, copy) NSString * recordRoute;
@property (readonly) unsigned long long lastRecordStartTime;
@property (readonly) NSDictionary * voiceTriggerInfo;
@property char synchronousCallbackEnabled;
@property (readonly) NSDictionary * recordSettings;
@property (readonly) char recording;
@property (retain) <Endpointer> * endpointerDelegate;
@property int recordEndpointMode;
@property double recordStartWaitTime;
@property double recordInterspeechWaitTime;
@property double recordEndWaitTime;
@property <AVVoiceControllerRecordDelegate> * recordDelegate;
@property char meteringEnabled;
@property (readonly) NSDictionary * playbackSettings;
@property (readonly) char playing;
@property <AVVoiceControllerPlaybackDelegate> * playbackDelegate;
@property float playbackVolume;
@property char stopOnEndpointEnabled;
@property float alertVolume;

- (char)isRecording;
- (void)handleInterruption:(id)arg0;
- (void)handleRouteChange:(NSDictionary *)arg0;
- (void)handleMediaServerDeath:(id)arg0;
- (void)handleMediaServerReset:(NSSet *)arg0;
- (struct ControllerImpl *)impl;
- (void)setSessionNotifications;
- (void)removeSessionNotifications;
- (void)hardwareConfigChanged;
- (void)beganRecording;
- (void)recordBufferReceived:(struct MyAudioQueueBuffer *)arg0;
- (void)finishedRecording;
- (void)startpointDetected;
- (void)interspeechPointDetected;
- (void)endpointDetected;
- (void)encodeError;
- (void)beganPlaying;
- (void)playbackBufferReceived:(struct MyAudioQueueBuffer *)arg0;
- (void)finishedPlaying;
- (void)decodeError;
- (void)beginRecordInterruption;
- (void)endRecordInterruption;
- (void)beginPlaybackInterruption;
- (void)endPlaybackInterruption;
- (NSString *)recordRoute;
- (unsigned long long)lastRecordStartTime;
- (NSDictionary *)voiceTriggerInfo;
- (char)isBargeInDetectEnabled;
- (void)setBargeInDetectEnabled:(char)arg0;
- (char)isStopOnBargeInEnabled;
- (void)setStopOnBargeInEnabled:(char)arg0;
- (char)isSynchronousCallbackEnabled;
- (void)setSynchronousCallbackEnabled:(char)arg0;
- (AVVoiceController *)initWithContext:(NSObject *)arg0 error:(id *)arg1;
- (void)prewarmAudioSession;
- (void)releaseAudioSession;
- (void)releaseAudioSession:(unsigned int)arg0;
- (char)willAcceptContext:(NSObject *)arg0;
- (char)setCurrentContext:(NSManagedObjectContext *)arg0 error:(id *)arg1;
- (char)prepareRecordWithSettings:(NSDictionary *)arg0 error:(id *)arg1;
- (char)setAlertSoundFromURL:(NSURL *)arg0 forType:(int)arg1;
- (char)playAlertSoundForType:(int)arg0;
- (char)startRecording;
- (char)startRecording:(id *)arg0;
- (char)preparePlaybackWithSettings:(NSDictionary *)arg0 error:(id *)arg1;
- (char)preparePlaybackFromURL:(NSURL *)arg0 error:(id *)arg1;
- (void)stopPlaying;
- (<AVVoiceControllerRecordDelegate> *)recordDelegate;
- (void)setRecordDelegate:(<AVVoiceControllerRecordDelegate> *)arg0;
- (NSDictionary *)recordSettings;
- (double)getRecordBufferDuration;
- (char)setRecordBufferDuration:(double)arg0;
- (<Endpointer> *)endpointerDelegate;
- (void)setEndpointerDelegate:(<Endpointer> *)arg0;
- (int)recordEndpointMode;
- (void)setRecordEndpointMode:(int)arg0;
- (double)recordStartWaitTime;
- (void)setRecordStartWaitTime:(double)arg0;
- (double)recordInterspeechWaitTime;
- (void)setRecordInterspeechWaitTime:(double)arg0;
- (double)recordEndWaitTime;
- (void)setRecordEndWaitTime:(double)arg0;
- (<AVVoiceControllerPlaybackDelegate> *)playbackDelegate;
- (void)setPlaybackDelegate:(<AVVoiceControllerPlaybackDelegate> *)arg0;
- (NSDictionary *)playbackSettings;
- (double)getPlaybackBufferDuration;
- (char)setPlaybackBufferDuration:(double)arg0;
- (void)setAlertVolume:(float)arg0;
- (float)alertVolume;
- (void)setPlaybackVolume:(float)arg0;
- (float)playbackVolume;
- (char)isMeteringEnabled;
- (void)setMeteringEnabled:(char)arg0;
- (void)updateMeters;
- (float)peakPowerForChannel:(unsigned int)arg0;
- (float)averagePowerForChannel:(unsigned int)arg0;
- (char)isStopOnEndpointEnabled;
- (void)setStopOnEndpointEnabled:(char)arg0;
- (void)dealloc;
- (void)stopRecording;
- (char)startPlaying;
- (void)finalize;
- (char)isPlaying;

@end
