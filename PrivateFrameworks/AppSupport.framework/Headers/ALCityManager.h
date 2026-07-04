/* Runtime dump - ALCityManager
 * Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@interface ALCityManager : NSObject
{
    struct sqlite3 * _db;
    struct sqlite3 * _localizedDb;
    CPSearchMatcher * _citySearchMatcher;
}

@property (readonly) CPSearchMatcher * citySearchMatcher;

+ (NSObject *)newCitiesByIdentifierMap:(NSObject *)arg0;
+ (ALCityManager *)_localeDictionaryFromSQLRow:(char * *)arg0;
+ (struct __CFArray *)legacyCityForCity:(id)arg0;
+ (ALCityManager *)sharedManager;

- (id)localeWithCode:(id)arg0;
- (void)dealloc;
- (ALCityManager *)init;
- (id)citiesMatchingQualifier:(id)arg0;
- (void)localizeCities:(id)arg0;
- (NSString *)citiesWithIdentifiers:(id)arg0;
- (NSString *)citiesMatchingName:(NSString *)arg0;
- (id)defaultCitiesForLocaleCode:(id)arg0 options:(int)arg1;
- (NSObject *)_defaultCityForTimeZone:(NSObject *)arg0 localeCode:(NSString *)arg1;
- (NSObject *)_cityForTimeZone:(NSObject *)arg0 localeCode:(NSString *)arg1;
- (id)allCities;
- (id)allLocales;
- (id)defaultCitiesForLocaleCode:(id)arg0;
- (id)defaultCitiesShownInWorldClock;
- (NSObject *)defaultCityForTimeZone:(NSObject *)arg0 localeCode:(NSString *)arg1;
- (CPSearchMatcher *)citySearchMatcher;
- (NSObject *)citiesWithTimeZone:(NSObject *)arg0;
- (NSString *)citiesMatchingName:(NSString *)arg0 localized:(char)arg1;
- (NSString *)cityForClassicIdentifier:(NSString *)arg0;
- (id)bestCityForLegacyCity:(struct __CFArray *)arg0;
- (NSObject *)defaultCityForTimeZone:(NSObject *)arg0;

@end
