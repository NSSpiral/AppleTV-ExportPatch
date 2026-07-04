/* Runtime dump - SAWeatherObject
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAWeatherObject : SADomainObject

@property (retain, nonatomic) SAWeatherCurrentConditions * currentConditions;
@property (copy, nonatomic) NSArray * dailyForecasts;
@property (copy, nonatomic) NSString * extendedForecastUrl;
@property (copy, nonatomic) NSArray * hourlyForecasts;
@property (retain, nonatomic) SAWeatherUnits * units;
@property (copy, nonatomic) NSString * view;
@property (retain, nonatomic) SAWeatherLocation * weatherLocation;
@property (copy, nonatomic) NSString * weatherRequest;

+ (NSObject *)object;
+ (NSDictionary *)objectWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)view;
- (void)setView:(NSString *)arg0;
- (SAWeatherUnits *)units;
- (void)setUnits:(SAWeatherUnits *)arg0;
- (NSString *)encodedClassName;
- (void)updateUsingSet:(NSSet *)arg0 add:(int)arg1 remove:(NSIndexSet *)arg2;
- (SAWeatherCurrentConditions *)currentConditions;
- (SAWeatherLocation *)weatherLocation;
- (void)setWeatherLocation:(SAWeatherLocation *)arg0;
- (void)setCurrentConditions:(SAWeatherCurrentConditions *)arg0;
- (NSArray *)dailyForecasts;
- (void)setDailyForecasts:(NSArray *)arg0;
- (NSString *)extendedForecastUrl;
- (void)setExtendedForecastUrl:(NSString *)arg0;
- (NSArray *)hourlyForecasts;
- (void)setHourlyForecasts:(NSArray *)arg0;
- (NSString *)weatherRequest;
- (void)setWeatherRequest:(NSString *)arg0;

@end
