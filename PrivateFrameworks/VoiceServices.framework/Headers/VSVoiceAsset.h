/* Runtime dump - VSVoiceAsset
 * Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@interface VSVoiceAsset : NSObject <NSSecureCoding>
{
    char _isInstalled;
    char _isBuiltInVoice;
    NSString * _name;
    NSArray * _languages;
    int _gender;
    int _footprint;
    NSNumber * _contentVersion;
    NSString * _masteredVersion;
}

@property (readonly, nonatomic) NSString * name;
@property (readonly, nonatomic) NSArray * languages;
@property (readonly, nonatomic) int gender;
@property (readonly, nonatomic) int footprint;
@property (readonly, nonatomic) char isInstalled;
@property (nonatomic) char isBuiltInVoice;
@property (readonly, nonatomic) NSNumber * contentVersion;
@property (readonly, nonatomic) NSString * masteredVersion;

+ (char)supportsSecureCoding;

- (char)isInstalled;
- (VSVoiceAsset *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (NSString *)name;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (NSArray *)languages;
- (int)gender;
- (NSString *)masteredVersion;
- (int)footprint;
- (VSVoiceAsset *)initWithDictionaryRepresentation:(NSDictionary *)arg0;
- (VSVoiceAsset *)initWithName:(NSString *)arg0 languages:(NSArray *)arg1 gender:(int)arg2 footprint:(int)arg3 contentVersion:(NSNumber *)arg4 masteredVersion:(NSString *)arg5 isInstalled:(char)arg6;
- (VSVoiceAsset *)initWithName:(NSString *)arg0 languages:(NSArray *)arg1 gender:(int)arg2 footprint:(int)arg3 isInstalled:(char)arg4;
- (char)isBuiltInVoice;
- (void)setIsBuiltInVoice:(char)arg0;
- (NSNumber *)contentVersion;

@end
