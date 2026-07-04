/* Runtime dump - IntlUtility
 * Image: /System/Library/PrivateFrameworks/IntlPreferences.framework/IntlPreferences
 */

@interface IntlUtility : NSObject
{
    NSDictionary * mLanguageList;
    NSDictionary * mLocalizedLanguageList;
    void * mDisplayLanguageCachePtr;
    int mDisplayLanguageCacheUsed;
    NSMutableArray * mBidiLanguagesArray;
    NSMutableArray * mBidiTestedLanguagesArray;
}

+ (NSObject *)preferredLunarCalendarForLocaleID:(NSObject *)arg0;
+ (IntlUtility *)sharedIntlUtility;
+ (char)isYearlessDate:(NSDate *)arg0 forCalendar:(NSObject *)arg1;
+ (NSObject *)localeForCalendarID:(NSObject *)arg0;
+ (void)setYearlessYear:(id)arg0 forCalendar:(NSObject *)arg1;
+ (NSObject *)lunarCalendarsForLocaleID:(NSObject *)arg0;
+ (char)performMigration;
+ (NSArray *)stdLanguageIDsAndNativeNames;
+ (IntlUtility *)stdLanguageIDs;
+ (NSString *)normalizedLanguageIDFromString:(NSString *)arg0;
+ (NSString *)capitalizeFirstWordOfName:(NSString *)arg0 accordingToLanguage:(NSString *)arg1;
+ (void)enumeratePreferredCalendarsForLocaleID:(NSObject *)arg0 usingBlock:(id /* block */)arg1;
+ (NSObject *)localeForCalendarID:(NSObject *)arg0 andLocale:(NSObject *)arg1;
+ (char)isLunarCalendarDefaultOnForLanguage:(NSString *)arg0 locale:(NSObject *)arg1;
+ (int)yearlessYearForMonth:(int)arg0 withCalendar:(NSObject *)arg1;
+ (NSString *)nativeNameForLanguage:(NSString *)arg0 context:(unsigned int)arg1;
+ (int)UDisplayContextForIUDisplayNameContext:(unsigned int)arg0;
+ (NSString *)parentLocaleIdentifierForIdentifier:(NSString *)arg0;
+ (NSArray *)languageCharSetList;
+ (NSArray *)importUsedLanguages;
+ (IntlUtility *)importAppleLanguagesLegacy;
+ (NSArray *)importAppleLanguages;
+ (char)upgradeAppleLanguagesFrom:(NSObject *)arg0 to:(NSObject *)arg1;
+ (NSObject *)alternateContinentOfRegion:(NSObject *)arg0;
+ (char)isLunarCalendarDefaultOn;
+ (IntlUtility *)preferredLanguagesForRegionWithoutFiltering:(id)arg0;
+ (NSArray *)filterLanguageList:(NSArray *)arg0 forRegion:(NSObject *)arg1 fromLanguages:(id)arg2;
+ (IntlUtility *)restrictedCountryCodes;
+ (IntlUtility *)defaultCalendarForLocaleID:(NSObject *)arg0;
+ (NSObject *)preferredLanguagesForRegion:(NSObject *)arg0;
+ (IntlUtility *)supportedCalendars;

- (NSObject *)displayNameForLabelForLunarCalendarID:(NSObject *)arg0 displayLanguage:(NSString *)arg1;
- (void)dealloc;
- (NSString *)displayNameForNormalizedLanguage:(NSString *)arg0 context:(unsigned int)arg1 displayLanguage:(NSString *)arg2;
- (NSString *)nativeLanguageForLanguage:(NSString *)arg0;
- (NSString *)localizedLanguageForLanguage:(NSString *)arg0;
- (NSArray *)localizedLanguageList;
- (id)localizedNameForScript:(short)arg0;
- (NSString *)displayNameForLanguage:(NSString *)arg0 context:(unsigned int)arg1 displayLanguage:(NSString *)arg2;
- (NSArray *)languageList;
- (char)canRenderLanguage:(NSString *)arg0;
- (NSObject *)displayNameForRegion:(NSObject *)arg0 displayLanguage:(NSString *)arg1 capitalization:(unsigned int)arg2;

@end
