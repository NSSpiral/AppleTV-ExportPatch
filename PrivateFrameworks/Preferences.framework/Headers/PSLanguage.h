/* Runtime dump - PSLanguage
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSLanguage : NSObject
{
    NSString * _languageCode;
    NSString * _languageName;
    NSString * _localizedLanguageName;
}

@property (retain, nonatomic) NSString * languageCode;
@property (retain, nonatomic) NSString * languageName;
@property (retain, nonatomic) NSString * localizedLanguageName;

+ (PSLanguage *)languageWithCode:(id)arg0 name:(NSString *)arg1 localizedName:(NSString *)arg2;

- (void)dealloc;
- (NSString *)localizedLanguageName;
- (NSString *)languageCode;
- (void)setLanguageCode:(NSString *)arg0;
- (void)setLanguageName:(NSString *)arg0;
- (void)setLocalizedLanguageName:(NSString *)arg0;
- (NSString *)languageName;
- (char)displayNamesAreEqual;

@end
