/* Runtime dump - SAWeatherDailyForecast
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAWeatherDailyForecast : SAWeatherForecast

@property (copy, nonatomic) NSNumber * highTemperature;
@property (copy, nonatomic) NSNumber * lowTemperature;

+ (SAWeatherDailyForecast *)dailyForecast;
+ (NSDictionary *)dailyForecastWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSNumber *)highTemperature;
- (void)setHighTemperature:(NSNumber *)arg0;
- (NSNumber *)lowTemperature;
- (void)setLowTemperature:(NSNumber *)arg0;

@end
