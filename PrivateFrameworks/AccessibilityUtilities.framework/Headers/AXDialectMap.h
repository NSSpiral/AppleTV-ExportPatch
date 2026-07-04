/* Runtime dump - AXDialectMap
 * Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXDialectMap : NSObject
{
    AXLangMap * _langMap;
    NSString * _voiceName;
    NSLocale * _locale;
    NSString * _specificLanguageID;
    NSCharacterSet * _speakableCharacters;
    NSCharacterSet * _secondaryLanguageRange;
}

@property (readonly, nonatomic) NSString * languageNameInCurrentLocale;
@property (readonly, nonatomic) NSString * languageNameInNativeLocale;
@property (readonly, nonatomic) NSString * languageNameAndLocaleInCurrentLocale;
@property (readonly, nonatomic) NSString * localeNameInCurrentLocale;
@property (readonly, nonatomic) NSString * languageNameAndLocaleInNativeLocale;
@property (nonatomic) AXLangMap * langMap;
@property (retain, nonatomic) NSLocale * locale;
@property (copy, nonatomic) NSString * specificLanguageID;
@property (readonly, nonatomic) NSString * regionID;
@property (copy, nonatomic) NSString * voiceName;
@property (retain, nonatomic) NSCharacterSet * speakableCharacters;
@property (readonly, nonatomic) AXLanguageManager * langManager;
@property (retain, nonatomic) NSCharacterSet * secondaryLanguageRange;

- (void)dealloc;
- (NSString *)description;
- (NSString *)debugDescription;
- (void)setLocale:(NSLocale *)arg0;
- (NSLocale *)locale;
- (NSString *)specificLanguageID;
- (AXLangMap *)langMap;
- (NSString *)basicDescription;
- (void)setVoiceName:(NSString *)arg0;
- (void)setSpeakableCharacters:(NSCharacterSet *)arg0;
- (void)setSecondaryLanguageRange:(NSCharacterSet *)arg0;
- (void)setSpecificLanguageID:(NSString *)arg0;
- (void)setLangMap:(AXLangMap *)arg0;
- (NSString *)voiceName;
- (NSString *)languageNameAndLocaleInCurrentLocale;
- (NSString *)languageNameAndLocaleInNativeLocale;
- (AXLanguageManager *)langManager;
- (NSCharacterSet *)secondaryLanguageRange;
- (NSCharacterSet *)speakableCharacters;
- (char)canSpeakCharacter:(unsigned short)arg0;
- (AXDialectMap *)initWithLocale:(NSLocale *)arg0 voiceName:(NSString *)arg1 specificLanguageID:(NSString *)arg2 speakableCharacters:(NSCharacterSet *)arg3 secondaryLanguageRange:(NSCharacterSet *)arg4;
- (NSString *)regionID;
- (NSString *)languageNameInCurrentLocale;
- (NSString *)languageNameInNativeLocale;
- (NSString *)localeNameInCurrentLocale;
- (char)isDialectSecondaryForCharacter:(unsigned short)arg0;
- (char)canSpeakLongCharacter:(unsigned long)arg0;
- (char)canSpeakString:(NSString *)arg0;

@end
