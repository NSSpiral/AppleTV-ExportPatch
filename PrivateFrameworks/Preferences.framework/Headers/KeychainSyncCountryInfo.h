/* Runtime dump - KeychainSyncCountryInfo
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface KeychainSyncCountryInfo : NSObject <NSCopying>
{
    NSString * _countryCode;
    NSString * _countryName;
    NSString * _localizedCountryName;
    NSString * _dialingPrefix;
}

@property (retain, nonatomic) NSString * countryCode;
@property (retain, nonatomic) NSString * countryName;
@property (retain, nonatomic) NSString * localizedCountryName;
@property (retain, nonatomic) NSString * dialingPrefix;

+ (NSDictionary *)countryInfoWithDictionary:(NSDictionary *)arg0;
+ (void)_loadCountriesIfNeeded;
+ (NSArray *)allCountries;
+ (KeychainSyncCountryInfo *)countryInfoForCountryCode:(id)arg0 dialingPrefix:(NSString *)arg1;

- (NSString *)countryName;
- (void)setCountryName:(NSString *)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (KeychainSyncCountryInfo *)copyWithZone:(struct _NSZone *)arg0;
- (void)setCountryCode:(NSString *)arg0;
- (void)setLocalizedCountryName:(NSString *)arg0;
- (NSString *)localizedCountryName;
- (void)setDialingPrefix:(NSString *)arg0;
- (NSString *)dialingPrefix;
- (NSString *)countryCode;

@end
