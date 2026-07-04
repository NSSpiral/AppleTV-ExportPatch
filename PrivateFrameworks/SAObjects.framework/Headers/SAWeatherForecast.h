/* Runtime dump - SAWeatherForecast
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAWeatherForecast : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSNumber * chanceOfPrecipitation;
@property (retain, nonatomic) SAWeatherCondition * condition;
@property (copy, nonatomic) NSNumber * isUserRequested;
@property (copy, nonatomic) NSNumber * timeIndex;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SAWeatherForecast *)forecast;
+ (NSDictionary *)forecastWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (SAWeatherCondition *)condition;
- (void)setCondition:(SAWeatherCondition *)arg0;
- (NSNumber *)isUserRequested;
- (void)setIsUserRequested:(NSNumber *)arg0;
- (NSString *)encodedClassName;
- (NSNumber *)chanceOfPrecipitation;
- (void)setChanceOfPrecipitation:(NSNumber *)arg0;
- (NSNumber *)timeIndex;
- (void)setTimeIndex:(NSNumber *)arg0;

@end
