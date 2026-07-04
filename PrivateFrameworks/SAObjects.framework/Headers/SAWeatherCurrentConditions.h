/* Runtime dump - SAWeatherCurrentConditions
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAWeatherCurrentConditions : AceObject <SAAceSerializable>

@property (retain, nonatomic) SAWeatherBarometricPressure * barometricPressure;
@property (retain, nonatomic) SAWeatherCondition * condition;
@property (copy, nonatomic) NSNumber * dayOfWeek;
@property (copy, nonatomic) NSString * dewPoint;
@property (copy, nonatomic) NSString * heatIndex;
@property (copy, nonatomic) NSString * moonPhase;
@property (copy, nonatomic) NSString * percentHumidity;
@property (copy, nonatomic) NSNumber * percentOfMoonFaceVisible;
@property (copy, nonatomic) NSString * sunrise;
@property (copy, nonatomic) NSString * sunset;
@property (copy, nonatomic) NSString * temperature;
@property (copy, nonatomic) NSString * timeOfObservation;
@property (copy, nonatomic) NSString * timeZone;
@property (copy, nonatomic) NSString * visibility;
@property (copy, nonatomic) NSString * windChill;
@property (retain, nonatomic) SAWeatherWindSpeed * windSpeed;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SAWeatherCurrentConditions *)currentConditions;
+ (SAWeatherCurrentConditions *)currentConditionsWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSNumber *)dayOfWeek;
- (NSString *)groupIdentifier;
- (void)setTimeZone:(NSString *)arg0;
- (NSString *)timeZone;
- (SAWeatherCondition *)condition;
- (void)setCondition:(SAWeatherCondition *)arg0;
- (void)setDayOfWeek:(NSNumber *)arg0;
- (NSString *)sunrise;
- (NSString *)sunset;
- (NSString *)encodedClassName;
- (SAWeatherBarometricPressure *)barometricPressure;
- (void)setBarometricPressure:(SAWeatherBarometricPressure *)arg0;
- (NSString *)dewPoint;
- (void)setDewPoint:(NSString *)arg0;
- (NSString *)heatIndex;
- (void)setHeatIndex:(NSString *)arg0;
- (NSString *)moonPhase;
- (void)setMoonPhase:(NSString *)arg0;
- (NSString *)percentHumidity;
- (void)setPercentHumidity:(NSString *)arg0;
- (NSNumber *)percentOfMoonFaceVisible;
- (void)setPercentOfMoonFaceVisible:(NSNumber *)arg0;
- (void)setSunrise:(NSString *)arg0;
- (void)setSunset:(NSString *)arg0;
- (NSString *)temperature;
- (void)setTemperature:(NSString *)arg0;
- (NSString *)timeOfObservation;
- (void)setTimeOfObservation:(NSString *)arg0;
- (NSString *)windChill;
- (void)setWindChill:(NSString *)arg0;
- (SAWeatherWindSpeed *)windSpeed;
- (void)setWindSpeed:(SAWeatherWindSpeed *)arg0;
- (NSString *)visibility;
- (void)setVisibility:(NSString *)arg0;

@end
