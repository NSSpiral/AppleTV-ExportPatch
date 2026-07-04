/* Runtime dump - AVSpeechSynthesisVoice
 * Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AVSpeechSynthesisVoice : NSObject <NSSecureCoding>

@property (copy, nonatomic) NSString * language;

+ (void)initialize;
+ (char)supportsSecureCoding;
+ (AVSpeechSynthesisVoice *)currentLanguageCode;
+ (NSString *)voiceWithLanguage:(NSString *)arg0;
+ (AVSpeechSynthesisVoice *)speechVoices;

- (void)dealloc;
- (AVSpeechSynthesisVoice *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;

@end
