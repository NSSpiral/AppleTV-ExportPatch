/* Runtime dump - AVSpeechUtterance
 * Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AVSpeechUtterance : NSObject <NSCopying, NSSecureCoding>
{
    AVSpeechSynthesisVoice * _voice;
    NSString * _speechString;
    float _rate;
    float _pitchMultiplier;
    float _volume;
    double _preUtteranceDelay;
    double _postUtteranceDelay;
}

@property (nonatomic) char processEmoticons;
@property (nonatomic) char useCompactVoice;
@property (retain, nonatomic) AVSpeechSynthesisVoice * voice;
@property (retain, nonatomic) NSString * speechString;
@property (nonatomic) float rate;
@property (nonatomic) float pitchMultiplier;
@property (nonatomic) float volume;
@property (nonatomic) double preUtteranceDelay;
@property (nonatomic) double postUtteranceDelay;

+ (void)initialize;
+ (char)supportsSecureCoding;
+ (AVSpeechUtterance *)speechUtteranceWithString:(NSString *)arg0;

- (void)setUseCompactVoice:(char)arg0;
- (char)useCompactVoice;
- (void)setProcessEmoticons:(char)arg0;
- (char)processEmoticons;
- (NSString *)speechString;
- (float)pitchMultiplier;
- (double)preUtteranceDelay;
- (double)postUtteranceDelay;
- (void)setSpeechString:(NSString *)arg0;
- (void)setPreUtteranceDelay:(double)arg0;
- (void)setPostUtteranceDelay:(double)arg0;
- (void)dealloc;
- (AVSpeechUtterance *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (AVSpeechUtterance *)copyWithZone:(struct _NSZone *)arg0;
- (AVSpeechUtterance *)initWithString:(NSString *)arg0;
- (AVSpeechSynthesisVoice *)voice;
- (float)rate;
- (void)setRate:(float)arg0;
- (float)volume;
- (void)setVolume:(float)arg0;
- (void)setPitchMultiplier:(float)arg0;
- (void)setVoice:(AVSpeechSynthesisVoice *)arg0;

@end
