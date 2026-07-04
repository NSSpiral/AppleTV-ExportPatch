/* Runtime dump - AFVoiceInfo
 * Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFVoiceInfo : NSObject <NSSecureCoding, NSCopying>
{
    char _isCustom;
    char _wasInitalizedFromDictionaryRepresentation;
    NSString * _languageCode;
    int _gender;
}

@property (readonly, nonatomic) NSString * languageCode;
@property (nonatomic) int gender;
@property (nonatomic) char isCustom;
@property (readonly, nonatomic) char wasInitalizedFromDictionaryRepresentation;

+ (char)supportsSecureCoding;

- (char)isCustom;
- (AFVoiceInfo *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (AFVoiceInfo *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (NSString *)languageCode;
- (AFVoiceInfo *)initWithLanguageCode:(NSString *)arg0 gender:(int)arg1 isCustom:(char)arg2;
- (AFVoiceInfo *)initWithLanguageCode:(NSString *)arg0;
- (void)setIsCustom:(char)arg0;
- (char)wasInitalizedFromDictionaryRepresentation;
- (int)gender;
- (void)setGender:(int)arg0;
- (AFVoiceInfo *)initWithDictionaryRepresentation:(NSDictionary *)arg0;

@end
