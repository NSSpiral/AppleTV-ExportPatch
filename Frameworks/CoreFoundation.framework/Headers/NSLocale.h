/* Runtime dump - NSLocale
 * Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSLocale : NSObject <NSCopying, NSSecureCoding>

+ (NSString *)firstPreferredLanguage;
+ (NSString *)_localeOverridesForLocaleWithIdentifier:(NSString *)arg0;
+ (void)_mapkit_overrideGuidanceUnit:(int)arg0;
+ (void)_mapkit_overrideDistanceUnit:(int)arg0;
+ (int)_vk_indexForLocale:(NSObject *)arg0;
+ (NSLocale *)supportedCJLanguageIdentifiers;
+ (NSString *)canonicalLanguageAndScriptCodeIdentifierForIdentifier:(NSString *)arg0;
+ (NSString *)canonicalLocaleIdentifier:(NSString *)arg0 withNewLanguageIdentifier:(NSString *)arg1;
+ (NSString *)deviceLanguageIdentifier;
+ (NSString *)string:(NSString *)arg0 withCapitalizedDisplayNamesForFirstLanguageIdentifier:(NSString *)arg1 secondLanguageIdentifier:(NSString *)arg2 thirdLanguageIdentifier:(NSString *)arg3;
+ (NSString *)addLikelySubtagsForLocaleIdentifier:(NSString *)arg0;
+ (NSArray *)canonicalLocaleIdentifierFromComponents:(NSArray *)arg0;
+ (NSLocale *)deviceLanguageLocale;
+ (NSLocale *)localeForBundleLanguage:(NSString *)arg0;
+ (NSLocale *)mostPreferredLanguageOf:(id)arg0 withPreferredLanguages:(NSArray *)arg1 forUsage:(unsigned int)arg2 options:(unsigned int)arg3;
+ (NSArray *)systemLanguages;
+ (void)setPreferredLanguages:(NSArray *)arg0;
+ (void)registerPreferredLanguage:(NSString *)arg0 usage:(unsigned int)arg1 confidence:(float)arg2;
+ (NSLocale *)mostPreferredLanguageOf:(id)arg0 forUsage:(unsigned int)arg1 options:(unsigned int)arg2;
+ (NSLocale *)autoupdatingCurrentLocale;
+ (NSLocale *)ISOCountryCodes;
+ (NSLocale *)ISOCurrencyCodes;
+ (NSLocale *)commonISOCurrencyCodes;
+ (NSString *)canonicalLocaleIdentifierFromString:(NSString *)arg0;
+ (NSLocale *)localeIdentifierFromWindowsLocaleCode:(unsigned int)arg0;
+ (unsigned int)windowsLocaleCodeFromLocaleIdentifier:(NSString *)arg0;
+ (unsigned int)lineDirectionForLanguage:(NSString *)arg0;
+ (NSObject *)internetServicesRegion;
+ (NSLocale *)allocWithZone:(struct _NSZone *)arg0;
+ (char)supportsSecureCoding;
+ (NSLocale *)currentLocale;
+ (NSLocale *)systemLocale;
+ (NSLocale *)localeIdentifierFromComponents:(NSArray *)arg0;
+ (NSArray *)preferredLanguages;
+ (unsigned int)characterDirectionForLanguage:(NSString *)arg0;
+ (NSLocale *)localeWithLocaleIdentifier:(NSString *)arg0;
+ (NSString *)canonicalLanguageIdentifierFromString:(NSString *)arg0;
+ (NSString *)componentsFromLocaleIdentifier:(NSString *)arg0;
+ (NSLocale *)availableLocaleIdentifiers;
+ (NSLocale *)ISOLanguageCodes;

- (char)_mapkit_distanceUsesMetricSystem;
- (char)_mapkit_useYardsForShortDistances;
- (NSString *)_mapkit_objectForKey:(NSString *)arg0;
- (char)_mapkit_guidanceUsesMetricSystem;
- (NSLocale *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)debugDescription;
- (Class)classForCoder;
- (unsigned char)_nullLocale;
- (void)_setNullLocale;
- (struct __SCPreferences *)_prefs;
- (NSString *)_copyDisplayNameForKey:(NSString *)arg0 value:(NSObject *)arg1;
- (unsigned long)_cfTypeID;
- (NSString *)objectForKey:(NSString *)arg0;
- (NSLocale *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSLocale *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)identifier;
- (NSLocale *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)localeIdentifier;
- (NSLocale *)initWithLocaleIdentifier:(NSString *)arg0;
- (NSString *)displayNameForKey:(NSString *)arg0 value:(NSObject *)arg1;

@end
