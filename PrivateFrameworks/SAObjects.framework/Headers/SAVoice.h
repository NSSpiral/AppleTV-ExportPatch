/* Runtime dump - SAVoice
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAVoice : SADomainObject

@property (copy, nonatomic) NSString * gender;
@property (copy, nonatomic) NSString * languageString;
@property (copy, nonatomic) NSString * masteredVersion;
@property (copy, nonatomic) NSString * name;
@property (copy, nonatomic) NSString * quality;

+ (AVSpeechSynthesisVoice *)voice;
+ (NSDictionary *)voiceWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (NSString *)encodedClassName;
- (void)updateUsingSet:(NSSet *)arg0 add:(int)arg1 remove:(NSIndexSet *)arg2;
- (NSString *)gender;
- (void)setGender:(NSString *)arg0;
- (NSString *)languageString;
- (void)setLanguageString:(NSString *)arg0;
- (NSString *)masteredVersion;
- (void)setMasteredVersion:(NSString *)arg0;
- (NSString *)quality;
- (void)setQuality:(NSString *)arg0;

@end
