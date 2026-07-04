/* Runtime dump - VSSpeechRequest
 * Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@interface VSSpeechRequest : NSObject <NSSecureCoding>
{
    char _useCustomVoice;
    char _maintainsInput;
    char _audioSessionIDIsValid;
    NSString * _text;
    NSAttributedString * _attributedText;
    NSString * _languageCode;
    NSString * _voiceName;
    int _footprint;
    int _gender;
    NSURL * _outputPath;
    unsigned int _audioSessionID;
    unsigned int _audioQueueFlags;
    id _stopHandler;
    id _pauseHandler;
    double _rate;
    double _pitch;
    double _volume;
}

@property (copy, nonatomic) NSString * text;
@property (copy, nonatomic) NSAttributedString * attributedText;
@property (copy, nonatomic) NSString * languageCode;
@property (copy, nonatomic) NSString * voiceName;
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
@property (copy, nonatomic) id stopHandler;
@property (copy, nonatomic) id pauseHandler;

+ (char)supportsSecureCoding;

- (VSSpeechRequest *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (void)setAttributedText:(NSAttributedString *)arg0;
- (NSString *)text;
- (void)setText:(NSString *)arg0;
- (NSAttributedString *)attributedText;
- (void).cxx_destruct;
- (NSString *)languageCode;
- (void)setVoiceName:(NSString *)arg0;
- (NSString *)voiceName;
- (unsigned int)audioSessionID;
- (void)setLanguageCode:(NSString *)arg0;
- (double)rate;
- (void)setRate:(double)arg0;
- (int)gender;
- (void)setGender:(int)arg0;
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
- (id /* block */)stopHandler;
- (void)setStopHandler:(id /* block */)arg0;
- (id /* block */)pauseHandler;
- (void)setPauseHandler:(id /* block */)arg0;
- (double)volume;
- (void)setVolume:(double)arg0;

@end
