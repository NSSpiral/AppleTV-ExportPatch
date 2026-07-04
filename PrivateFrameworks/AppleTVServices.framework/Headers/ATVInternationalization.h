/* Runtime dump - ATVInternationalization
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVInternationalization : NSObject

+ (void)initialize;
+ (NSString *)systemLanguage;
+ (void)setSystemLocaleIdentifier:(NSString *)arg0;
+ (void)_setSystemLocaleWithLanguage:(NSString *)arg0 withCountryCode:(NSString *)arg1;
+ (void)setSystemLanguage:(NSString *)arg0;
+ (ATVInternationalization *)_supportedCanonicalLangaugeIdentifiers;
+ (void)_updateLocaleWithLanguage:(NSString *)arg0;
+ (void)refreshSystemLanguage;
+ (void)setSystemLocaleCountryCode:(id)arg0;

@end
