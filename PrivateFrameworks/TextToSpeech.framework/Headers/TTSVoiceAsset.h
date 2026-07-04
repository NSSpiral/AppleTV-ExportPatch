/* Runtime dump - TTSVoiceAsset
 * Image: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
 */

@interface TTSVoiceAsset : NSObject <NSSecureCoding>
{
    char _isInstalled;
    NSString * _name;
    NSArray * _languages;
    int _gender;
    int _footprint;
}

@property (readonly, nonatomic) NSString * name;
@property (readonly, nonatomic) NSArray * languages;
@property (readonly, nonatomic) int gender;
@property (readonly, nonatomic) int footprint;
@property (readonly, nonatomic) char isInstalled;

+ (char)supportsSecureCoding;

- (char)isInstalled;
- (TTSVoiceAsset *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (NSString *)name;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (NSArray *)languages;
- (int)gender;
- (int)footprint;
- (TTSVoiceAsset *)initWithDictionaryRepresentation:(NSDictionary *)arg0;
- (TTSVoiceAsset *)initWithName:(NSString *)arg0 languages:(NSArray *)arg1 gender:(int)arg2 footprint:(int)arg3 isInstalled:(char)arg4;

@end
