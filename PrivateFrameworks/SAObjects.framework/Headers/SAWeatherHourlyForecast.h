/* Runtime dump - SAWeatherHourlyForecast
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAWeatherHourlyForecast : SAWeatherForecast

@property (copy, nonatomic) NSNumber * temperature;

+ (SAWeatherHourlyForecast *)hourlyForecast;
+ (NSDictionary *)hourlyForecastWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSNumber *)temperature;
- (void)setTemperature:(NSNumber *)arg0;

@end
