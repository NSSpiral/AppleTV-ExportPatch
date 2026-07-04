/* Runtime dump - TTSSpeechVoice
 * Image: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
 */

@interface TTSSpeechVoice : NSObject
{
    <TTSSpeechService> * _service;
    char _useVoiceBooster;
    char _isDefault;
    char _isCustomVoice;
    NSString * _name;
    NSString * _language;
    NSString * _identifier;
    int _footprint;
    int _gender;
}

@property (retain, nonatomic) NSString * name;
@property (retain, nonatomic) NSString * language;
@property (retain, nonatomic) NSString * identifier;
@property (nonatomic) int footprint;
@property (readonly, nonatomic) char isDefault;
@property (nonatomic) char isCustomVoice;
@property (nonatomic) int gender;
@property (readonly, nonatomic) char useVoiceBooster;

- (TTSSpeechVoice *)init;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (NSString *)identifier;
- (void)setIdentifier:(NSString *)arg0;
- (void).cxx_destruct;
- (NSString *)language;
- (void)setLanguage:(NSString *)arg0;
- (void)setService:(<TTSSpeechService> *)arg0;
- (<TTSSpeechService> *)service;
- (char)isDefault;
- (int)gender;
- (void)setGender:(int)arg0;
- (void)_initializeVoiceBooster;
- (void)_routeChange:(NSDictionary *)arg0;
- (char)useVoiceBooster;
- (char)isCustomVoice;
- (void)setIsCustomVoice:(char)arg0;
- (int)footprint;
- (void)setFootprint:(int)arg0;

@end
