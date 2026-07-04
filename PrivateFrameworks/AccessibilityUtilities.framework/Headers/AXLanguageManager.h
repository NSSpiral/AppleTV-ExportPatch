/* Runtime dump - AXLanguageManager
 * Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXLanguageManager : NSObject
{
    AXDialectMap * _dialectForSystemLanguage;
    AXDialectMap * _dialectForCurrentLocale;
    NSArray * _langMaps;
    NSCharacterSet * _commonCharacters;
    NSLocale * _userLocale;
}

@property (retain, nonatomic) NSArray * langMaps;
@property (readonly, nonatomic) NSString * systemLanguageID;
@property (copy, nonatomic) NSLocale * userLocale;
@property (retain, nonatomic) NSCharacterSet * commonCharacters;
@property (nonatomic) AXDialectMap * dialectForSystemLanguage;
@property (nonatomic) AXDialectMap * dialectForCurrentLocale;

+ (AXLanguageManager *)sharedInstance;
+ (AXLanguageManager *)stringByReplacingFatWidthCharactersWithBasicCharacters:(id)arg0;
+ (NSString *)nonlocalizedNameForLanguage:(NSString *)arg0;
+ (AXLanguageManager *)commonPunctuationCharacters;
+ (AXLanguageManager *)stringByReplacingEmojiCharactersWithEmojiDescriptions:(id)arg0;
+ (char)isDialectIdentifierAlternativeVoice:(id)arg0;
+ (NSString *)nameForAlternativeVoiceIdentifier:(NSString *)arg0;
+ (NSString *)dialectForAlternativeVoiceIdentifier:(NSString *)arg0;

- (void)dealloc;
- (AXLanguageManager *)init;
- (NSString *)description;
- (NSString *)debugDescription;
- (AXDialectMap *)dialectForSystemLanguage;
- (NSString *)dialectForLanguageID:(NSString *)arg0;
- (NSString *)systemLanguageID;
- (NSString *)basicDescription;
- (NSLocale *)userLocale;
- (char)isCharacterCommon:(unsigned short)arg0;
- (void)setUserLocale:(NSLocale *)arg0;
- (void)_handleUserLocaleDidChange:(NSDictionary *)arg0;
- (void)setCommonCharacters:(NSCharacterSet *)arg0;
- (id)_loadLangMaps;
- (void)setLangMaps:(NSArray *)arg0;
- (void)setDialectForSystemLanguage:(AXDialectMap *)arg0;
- (void)setDialectForCurrentLocale:(AXDialectMap *)arg0;
- (NSArray *)langMaps;
- (AXDialectMap *)dialectForCurrentLocale;
- (void)updateCachedDialects;
- (id)dialectsThatCanSpeakCharacter:(unsigned short)arg0;
- (id)_preferredLanguageIDsFromUserSelectedKeyboards;
- (NSCharacterSet *)commonCharacters;
- (NSArray *)characterSetForRanges:(NSArray *)arg0;
- (id)dialectThatCanSpeakCharacter:(unsigned short)arg0;
- (id)ambiguousDialectsFromUserKeyboardPreferences;
- (id)descriptionOfWord:(id)arg0 forLanguage:(NSString *)arg1;

@end
