/* Runtime dump - VSSpeechSynthesizer
 * Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@interface VSSpeechSynthesizer : NSObject <VSSpeechConnectionDelegate>
{
    VSKeepAlive * _keepAlive;
    VSKeepAlive * _inactiveKeepAlive;
    int _footprint;
    char _useCustomVoice;
    int _gender;
    char _useSharedSession;
    char _audioSessionIDIsValid;
    unsigned int _audioSessionID;
    unsigned int _audioQueueFlags;
    NSObject<OS_dispatch_queue> * _queue;
    VSSpeechConnection * _speechConnection;
    struct ? _synthesizerFlags;
    <VSSpeechSynthesizerDelegate> * _delegate;
    float _rate;
    float _pitch;
    float _volume;
    NSString * _voice;
}

@property (weak, nonatomic) <VSSpeechSynthesizerDelegate> * delegate;
@property (nonatomic) float rate;
@property (nonatomic) float pitch;
@property (nonatomic) float volume;
@property (retain, nonatomic) NSString * voice;

+ (void)initialize;
+ (VSSpeechSynthesizer *)availableVoicesForLanguageCode:(id)arg0;
+ (VSSpeechSynthesizer *)availableFootprintsForVoice:(id)arg0 languageCode:(NSString *)arg1;
+ (char)isSystemSpeaking;
+ (void)getVoiceInfoForLanguageCode:(id)arg0 footprint:(int)arg1 gender:(int)arg2 custom:(char)arg3 reply:(id /* block */)arg4;
+ (VSSpeechSynthesizer *)availableVoices;
+ (void)setLogToFile:(char)arg0;
+ (void)getLogToFile:(NSString *)arg0;
+ (VSSpeechSynthesizer *)availableLanguageCodes;
+ (void)getAllVoiceAssets:(NSArray *)arg0;
+ (void)getLocalVoiceAssets:(NSArray *)arg0;
+ (void)downloadVoiceAsset:(NSSet *)arg0 progress:(NSProgress *)arg1 completion:(/* block */ id)arg2;
+ (void)setAutoDownloadedVoiceAssets:(NSArray *)arg0;
+ (void)getAutoDownloadedVoiceAssets:(NSArray *)arg0;

- (NSString *)speechString;
- (void)dealloc;
- (void)setDelegate:(<VSSpeechSynthesizerDelegate> *)arg0;
- (VSSpeechSynthesizer *)init;
- (<VSSpeechSynthesizerDelegate> *)delegate;
- (void)_setDelegate:(NSObject *)arg0;
- (void).cxx_destruct;
- (char)isSpeaking;
- (NSString *)voice;
- (float)rate;
- (void)setRate:(float)arg0;
- (int)gender;
- (void)setGender:(int)arg0;
- (float)pitch;
- (int)footprint;
- (void)setPitch:(float)arg0;
- (char)stopSpeakingAtNextBoundary:(int)arg0 error:(id *)arg1;
- (VSSpeechSynthesizer *)initForInputFeedback;
- (char)startSpeakingAttributedString:(NSString *)arg0 toURL:(NSURL *)arg1 withLanguageCode:(NSString *)arg2 error:(id *)arg3;
- (char)startSpeakingString:(NSString *)arg0 withLanguageCode:(NSString *)arg1 error:(id *)arg2;
- (void)setFootprint:(int)arg0;
- (char)useCustomVoice;
- (void)setUseCustomVoice:(char)arg0;
- (char)_startSpeakingString:(NSString *)arg0 orAttributedString:(NSString *)arg1 toURL:(NSURL *)arg2 withLanguageCode:(NSString *)arg3 request:(id *)arg4 error:(id *)arg5;
- (char)_stopSpeakingRequest:(NSURLRequest *)arg0 atNextBoundary:(int)arg1 synchronously:(char)arg2 error:(id *)arg3;
- (void)setMaintainPersistentConnection:(char)arg0;
- (void)setMaintainInactivePersistentConnection:(char)arg0;
- (char)startSpeakingString:(NSString *)arg0 toURL:(NSURL *)arg1 withLanguageCode:(NSString *)arg2 error:(id *)arg3;
- (char)stopSpeakingAtNextBoundary:(int)arg0 synchronously:(char)arg1 error:(id *)arg2;
- (char)pauseSpeakingAtNextBoundary:(int)arg0 synchronously:(char)arg1 error:(id *)arg2;
- (char)_pauseSpeakingRequest:(NSURLRequest *)arg0 atNextBoundary:(int)arg1 synchronously:(char)arg2 error:(id *)arg3;
- (char)_continueSpeakingRequest:(NSURLRequest *)arg0 withError:(id *)arg1;
- (void)connection:(NSURLConnection *)arg0 speechRequestDidStart:(id)arg1;
- (void)connection:(NSURLConnection *)arg0 speechRequestDidPause:(id)arg1;
- (void)connection:(NSURLConnection *)arg0 speechRequestDidContinue:(id)arg1;
- (void)connection:(NSURLConnection *)arg0 speechRequest:(TTSSpeechRequest *)arg1 didStopAtEnd:(char)arg2 phonemesSpoken:(id)arg3 error:(NSError *)arg4;
- (void)connection:(NSURLConnection *)arg0 speechRequest:(TTSSpeechRequest *)arg1 willSpeakMark:(int)arg2 inRange:(struct _NSRange)arg3;
- (char)startSpeakingString:(NSString *)arg0 error:(id *)arg1;
- (char)startSpeakingString:(NSString *)arg0 toURL:(NSURL *)arg1 error:(id *)arg2;
- (char)pauseSpeakingAtNextBoundary:(int)arg0 error:(id *)arg1;
- (char)continueSpeakingWithError:(id *)arg0;
- (float)minimumRate;
- (float)maximumRate;
- (void)useSharedAudioSession:(char)arg0;
- (void)useSpecificAudioSession:(unsigned int)arg0;
- (void)useAudioQueueFlags:(unsigned int)arg0;
- (char)startSpeakingString:(NSString *)arg0 request:(id *)arg1 error:(id *)arg2;
- (char)startSpeakingString:(NSString *)arg0 toURL:(NSURL *)arg1 request:(id *)arg2 error:(id *)arg3;
- (char)startSpeakingString:(NSString *)arg0 withLanguageCode:(NSString *)arg1 request:(id *)arg2 error:(id *)arg3;
- (char)stopSpeakingRequest:(NSURLRequest *)arg0 atNextBoundary:(int)arg1 error:(id *)arg2;
- (char)stopSpeakingRequest:(NSURLRequest *)arg0 atNextBoundary:(int)arg1 synchronously:(char)arg2 error:(id *)arg3;
- (char)pauseSpeakingRequest:(NSURLRequest *)arg0 atNextBoundary:(int)arg1 error:(id *)arg2;
- (char)pauseSpeakingRequest:(NSURLRequest *)arg0 atNextBoundary:(int)arg1 synchronously:(char)arg2 error:(id *)arg3;
- (char)continueSpeakingRequest:(NSURLRequest *)arg0 withError:(id *)arg1;
- (float)volume;
- (void)setVolume:(float)arg0;
- (void)setVoice:(NSString *)arg0;

@end
