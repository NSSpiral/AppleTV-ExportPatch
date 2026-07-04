/* Runtime dump - TTSAudioSession
 * Image: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
 */

@interface TTSAudioSession : NSObject
{
    NSObject<OS_dispatch_queue> * _queue;
    char _audioSessionIsSetUp;
    struct ? _desiredState;
    struct ? _cachedState;
    char _bluetoothAllowed;
    struct __CFBag * _activityBag;
    int _serverGeneration;
}

+ (TTSAudioSession *)sharedInstance;

- (void)dealloc;
- (TTSAudioSession *)init;
- (void).cxx_destruct;
- (void)_audioSessionInterrupted:(id)arg0;
- (void)_mediaServicesWereReset:(NSSet *)arg0;
- (void)_setupAudioSession;
- (void)_setCategoryForActivity:(long)arg0;
- (long)_nextActivityForActive:(char)arg0 activity:(long)arg1 serverActivity:(long)arg2;
- (void)_safeSetupAudioSession;
- (int)_safeServerGeneration;
- (void)_safeSetCategoryForActivity:(long)arg0;
- (void)_safeSetActive:(char)arg0 withActivity:(long)arg1;
- (void)_safeSetBluetoothInputAllowed:(char)arg0;

@end
