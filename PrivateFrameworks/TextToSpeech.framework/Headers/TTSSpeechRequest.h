/* Runtime dump - TTSSpeechRequest
 * Image: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
 */

@interface TTSSpeechRequest : NSObject <NSSecureCoding>
{
    <TTSSpeechRequestDelegate> * _delegate;
    TTSSpeechChannel * _speechChannel;
    char _useCustomVoice;
    char _maintainsInput;
    char _audioSessionIDIsValid;
    char _useVoiceBooster;
    NSString * _text;
    NSAttributedString * _attributedText;
    NSString * _languageCode;
    int _footprint;
    int _gender;
    NSURL * _outputPath;
    unsigned int _audioSessionID;
    unsigned int _audioQueueFlags;
    double _rate;
    double _pitch;
    double _volume;
    double _latency;
    double _dispatchTime;
    double _handledTime;
}

@property (copy, nonatomic) NSString * text;
@property (copy, nonatomic) NSAttributedString * attributedText;
@property (copy, nonatomic) NSString * languageCode;
@property (retain, nonatomic) TTSSpeechChannel * speechChannel;
@property (nonatomic) int footprint;
@property (nonatomic) char useCustomVoice;
@property (nonatomic) int gender;
@property (copy, nonatomic) NSURL * outputPath;
@property (nonatomic) double rate;
@property (nonatomic) double pitch;
@property (nonatomic) double volume;
@property (nonatomic) char maintainsInput;
@property (nonatomic) char audioSessionIDIsValid;
@property (nonatomic) unsigned int audioSessionID;
@property (nonatomic) unsigned int audioQueueFlags;
@property (nonatomic) double latency;
@property (nonatomic) double dispatchTime;
@property (nonatomic) double handledTime;
@property (nonatomic) char useVoiceBooster;

+ (char)supportsSecureCoding;

- (void)dealloc;
- (TTSSpeechRequest *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setDelegate:(<TTSSpeechRequestDelegate> *)arg0;
- (NSString *)description;
- (<TTSSpeechRequestDelegate> *)delegate;
- (void)setAttributedText:(NSAttributedString *)arg0;
- (NSString *)text;
- (void)setText:(NSString *)arg0;
- (NSAttributedString *)attributedText;
- (NSString *)languageCode;
- (unsigned int)audioSessionID;
- (void)setLanguageCode:(NSString *)arg0;
- (double)rate;
- (void)setRate:(double)arg0;
- (double)latency;
- (void)setLatency:(double)arg0;
- (int)gender;
- (void)setGender:(int)arg0;
- (char)useVoiceBooster;
- (long)vocalizerFootprint;
- (long)vocalizerGender;
- (void)setSpeechChannel:(TTSSpeechChannel *)arg0;
- (TTSSpeechRequest *)initWithSpeechChannel:(TTSSpeechChannel *)arg0;
- (void)speechRequestDidStartForService:(NSObject *)arg0;
- (void)speechRequestDidPauseForService:(NSObject *)arg0;
- (void)speechRequestDidContinueForService:(NSObject *)arg0;
- (void)speechRequestMark:(int)arg0 didStartForRange:(struct _NSRange)arg1 forService:(struct __SCNetworkService *)arg2;
- (void)speechRequestDidStopWithSuccess:(char)arg0 phonemesSpoken:(id)arg1 forService:(struct __SCNetworkService *)arg2 error:(NSError *)arg3;
- (TTSSpeechChannel *)speechChannel;
- (double)dispatchTime;
- (void)setDispatchTime:(double)arg0;
- (double)handledTime;
- (void)setHandledTime:(double)arg0;
- (void)setUseVoiceBooster:(char)arg0;
- (double)pitch;
- (int)footprint;
- (void)setPitch:(double)arg0;
- (void)setFootprint:(int)arg0;
- (char)useCustomVoice;
- (void)setUseCustomVoice:(char)arg0;
- (NSURL *)outputPath;
- (void)setOutputPath:(NSURL *)arg0;
- (char)maintainsInput;
- (void)setMaintainsInput:(char)arg0;
- (char)audioSessionIDIsValid;
- (void)setAudioSessionIDIsValid:(char)arg0;
- (void)setAudioSessionID:(unsigned int)arg0;
- (unsigned int)audioQueueFlags;
- (void)setAudioQueueFlags:(unsigned int)arg0;
- (double)volume;
- (void)setVolume:(double)arg0;

@end
