/* Runtime dump - ALCity
 * Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@interface ALCity : NSObject
{
    int _identifier;
    NSString * _localeCode;
    NSString * _timeZone;
    float _longitude;
    float _latitude;
    NSString * _yahooCode;
    NSString * _name;
    NSString * _unlocalizedName;
    NSString * _countryName;
    NSString * _unlocalizedCountryName;
    NSString * _countryOverride;
    NSString * _unlocalizedCountryOverride;
    NSString * _identifierForCPCity;
    char _localizationAttempted;
}

@property (readonly, nonatomic) NSString * classicIdentifier;
@property (readonly, nonatomic) NSDictionary * properties;
@property (nonatomic) int identifier;
@property (retain, nonatomic) NSString * localeCode;
@property (retain, nonatomic) NSString * timeZone;
@property (nonatomic) float longitude;
@property (nonatomic) float latitude;
@property (retain, nonatomic) NSString * yahooCode;
@property (retain, nonatomic) NSString * name;
@property (retain, nonatomic) NSString * unlocalizedName;
@property (retain, nonatomic) NSString * countryName;
@property (retain, nonatomic) NSString * unlocalizedCountryName;
@property (retain, nonatomic) NSString * countryOverride;
@property (retain, nonatomic) NSString * unlocalizedCountryOverride;

- (NSString *)countryName;
- (void)setCountryName:(NSString *)arg0;
- (void)dealloc;
- (ALCity *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (int)identifier;
- (void)setTimeZone:(NSString *)arg0;
- (void)setIdentifier:(int)arg0;
- (NSString *)timeZone;
- (ALCity *)initWithProperties:(NSDictionary *)arg0;
- (NSDictionary *)properties;
- (NSString *)localeCode;
- (void)setCountryOverride:(NSString *)arg0;
- (NSString *)unlocalizedName;
- (ALCity *)initWithSQLRow:(char * *)arg0;
- (NSString *)countryOverride;
- (NSString *)displayNameIncludingCountry:(char)arg0 withFormat:(NSString *)arg1;
- (void)ensureLocalized;
- (NSString *)unlocalizedCountryOverride;
- (NSString *)displayNameIncludingCountry:(char)arg0;
- (NSString *)classicIdentifier;
- (void)setLocaleCode:(NSString *)arg0;
- (NSString *)yahooCode;
- (void)setYahooCode:(NSString *)arg0;
- (void)setUnlocalizedCountryOverride:(NSString *)arg0;
- (void)setUnlocalizedName:(NSString *)arg0;
- (void)setLatitude:(float)arg0;
- (void)setLongitude:(float)arg0;
- (float)latitude;
- (float)longitude;
- (NSString *)unlocalizedCountryName;
- (void)setUnlocalizedCountryName:(NSString *)arg0;

@end
