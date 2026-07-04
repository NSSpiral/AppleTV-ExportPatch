/* Runtime dump - TTSSpeechSynthesizer
 * Image: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
 */

@interface TTSSpeechSynthesizer : NSObject <TTSSpeechConnectionDelegate>
{
    int _footprint;
    <TTSSpeechSynthesizerDelegate> * _delegate;
    char _useSharedSession;
    char _audioSessionIDIsValid;
    unsigned int _audioSessionID;
    unsigned int _audioQueueFlags;
    NSMutableDictionary * _channels;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableArray * _currentRequestOwners;
    NSMutableArray * _speechRequests;
    struct ? _synthesizerFlags;
    float _rate;
    float _pitch;
    float _volume;
    NSString * _voiceIdentifier;
}

@property (weak, nonatomic) <TTSSpeechSynthesizerDelegate> * delegate;
@property (nonatomic) float rate;
@property (nonatomic) float pitch;
@property (nonatomic) float volume;
@property (retain, nonatomic) NSString * voiceIdentifier;
@property (readonly, nonatomic) NSString * resolvedVoiceIdentifier;

+ (void)initialize;
+ (TTSSpeechSynthesizer *)availableVoicesForLanguageCode:(id)arg0;
+ (char)isSystemSpeaking;
+ (TTSSpeechSynthesizer *)availableVoices;
+ (TTSSpeechSynthesizer *)availableLanguageCodes;

- (NSString *)speechString;
- (void)dealloc;
- (void)setDelegate:(<TTSSpeechSynthesizerDelegate> *)arg0;
- (TTSSpeechSynthesizer *)init;
- (<TTSSpeechSynthesizerDelegate> *)delegate;
- (void)_setDelegate:(NSObject *)arg0;
- (void).cxx_destruct;
- (void)setVoiceIdentifier:(NSString *)arg0;
- (char)isSpeaking;
- (NSString *)voiceIdentifier;
- (float)rate;
- (void)setRate:(float)arg0;
- (void)_mediaServicesDied;
- (NSString *)_speechVoiceForIdentifier:(NSString *)arg0 language:(NSString *)arg1;
- (NSString *)_preprocessText:(NSString *)arg0 languageCode:(NSString *)arg1;
- (NSString *)resolvedVoiceIdentifier;
- (float)pitch;
- (int)footprint;
- (void)setPitch:(float)arg0;
- (char)stopSpeakingAtNextBoundary:(int)arg0 error:(id *)arg1;
- (char)startSpeakingAttributedString:(NSString *)arg0 toURL:(NSURL *)arg1 withLanguageCode:(NSString *)arg2 error:(id *)arg3;
- (char)startSpeakingString:(NSString *)arg0 withLanguageCode:(NSString *)arg1 error:(id *)arg2;
- (void)setFootprint:(int)arg0;
- (char)_startSpeakingString:(NSString *)arg0 orAttributedString:(NSString *)arg1 toURL:(NSURL *)arg2 withLanguageCode:(NSString *)arg3 request:(id *)arg4 error:(id *)arg5;
- (char)_stopSpeakingRequest:(NSURLRequest *)arg0 atNextBoundary:(int)arg1 synchronously:(char)arg2 error:(id *)arg3;
- (char)startSpeakingString:(NSString *)arg0 toURL:(NSURL *)arg1 withLanguageCode:(NSString *)arg2 error:(id *)arg3;
- (char)stopSpeakingAtNextBoundary:(int)arg0 synchronously:(char)arg1 error:(id *)arg2;
- (char)pauseSpeakingAtNextBoundary:(int)arg0 synchronously:(char)arg1 error:(id *)arg2;
- (char)_pauseSpeakingRequest:(NSURLRequest *)arg0 atNextBoundary:(int)arg1 synchronously:(char)arg2 error:(id *)arg3;
- (char)_continueSpeakingRequest:(NSURLRequest *)arg0 withError:(id *)arg1;
- (void)connection:(TTSSpeechRequestOwner *)arg0 speechRequestDidStart:(TTSSpeechRequest *)arg1;
- (void)connection:(TTSSpeechRequestOwner *)arg0 speechRequestDidPause:(TTSSpeechRequest *)arg1;
- (void)connection:(TTSSpeechRequestOwner *)arg0 speechRequestDidContinue:(TTSSpeechRequest *)arg1;
- (void)connection:(TTSSpeechRequestOwner *)arg0 speechRequest:(TTSSpeechRequest *)arg1 didStopAtEnd:(char)arg2 phonemesSpoken:(NSString *)arg3 error:(NSError *)arg4;
- (void)connection:(TTSSpeechRequestOwner *)arg0 speechRequest:(TTSSpeechRequest *)arg1 willSpeakMark:(int)arg2 inRange:(struct _NSRange)arg3;
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

@end
