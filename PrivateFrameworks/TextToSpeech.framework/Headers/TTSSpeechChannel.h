/* Runtime dump - TTSSpeechChannel
 * Image: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
 */

@interface TTSSpeechChannel : NSObject
{
    TTSSpeechVoice * _voice;
}

@property (retain, nonatomic) TTSSpeechVoice * voice;

+ (char)supportsSecureCoding;

- (void)dealloc;
- (TTSSpeechChannel *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (TTSSpeechVoice *)voice;
- (TTSSpeechChannel *)initWithVoice:(TTSSpeechVoice *)arg0;
- (void)setVoice:(TTSSpeechVoice *)arg0;

@end
