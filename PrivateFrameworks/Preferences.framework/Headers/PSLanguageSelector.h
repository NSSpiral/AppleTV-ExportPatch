/* Runtime dump - PSLanguageSelector
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSLanguageSelector : NSObject
{
    NSString * _language;
    NSArray * _languagesWithLocaleData;
    NSArray * _otherLanguages;
}

+ (PSLanguageSelector *)sharedInstance;
+ (void)updateShouldShowPreferredLanguages:(char)arg0;
+ (void)updatePreferredLanguages:(id)arg0;
+ (NSString *)languageArrayAfterSettingLanguage:(NSString *)arg0 fallback:(id)arg1 toLanguageArray:(NSArray *)arg2;

- (NSArray *)systemLanguages;
- (void)dealloc;
- (NSArray *)preferredLanguages;
- (void)setLanguage:(NSString *)arg0;
- (NSMutableArray *)supportedLanguages;
- (NSString *)deviceLanguageIdentifier;
- (id)userDeviceLanguageOrder;
- (NSArray *)defaultOtherLanguages;
- (char)languageIsSupportedLanguage:(NSString *)arg0;
- (NSArray *)renderableLanguagesFromList:(NSArray *)arg0;
- (char)shouldShowPreferredLanguages;
- (void)setLanguage:(NSString *)arg0 fallback:(id)arg1;
- (NSString *)languagesWithAvailableLocaleIdentifiers;

@end
