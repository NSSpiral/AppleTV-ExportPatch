/* Runtime dump - SAClockObject
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAClockObject : SADomainObject

@property (copy, nonatomic) NSNumber * alCityId;
@property (copy, nonatomic) NSString * cityName;
@property (copy, nonatomic) NSString * countryCode;
@property (copy, nonatomic) NSString * countryName;
@property (copy, nonatomic) NSNumber * latitude;
@property (copy, nonatomic) NSNumber * longitude;
@property (copy, nonatomic) NSString * timezoneId;
@property (copy, nonatomic) NSString * unlocalizedCityName;
@property (copy, nonatomic) NSString * unlocalizedCountryName;

+ (NSObject *)object;
+ (NSDictionary *)objectWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)countryName;
- (void)setCountryName:(NSString *)arg0;
- (NSString *)groupIdentifier;
- (void)setLatitude:(NSNumber *)arg0;
- (void)setLongitude:(NSNumber *)arg0;
- (NSNumber *)latitude;
- (NSNumber *)longitude;
- (void)setCountryCode:(NSString *)arg0;
- (NSString *)encodedClassName;
- (void)updateUsingSet:(NSSet *)arg0 add:(int)arg1 remove:(NSIndexSet *)arg2;
- (NSString *)timezoneId;
- (void)setTimezoneId:(NSString *)arg0;
- (NSNumber *)alCityId;
- (void)setAlCityId:(NSNumber *)arg0;
- (NSString *)cityName;
- (void)setCityName:(NSString *)arg0;
- (NSString *)unlocalizedCityName;
- (void)setUnlocalizedCityName:(NSString *)arg0;
- (NSString *)unlocalizedCountryName;
- (void)setUnlocalizedCountryName:(NSString *)arg0;
- (NSString *)countryCode;

@end
