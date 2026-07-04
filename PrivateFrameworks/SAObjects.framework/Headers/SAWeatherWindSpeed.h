/* Runtime dump - SAWeatherWindSpeed
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAWeatherWindSpeed : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSString * value;
@property (copy, nonatomic) NSString * windDirection;
@property (copy, nonatomic) NSNumber * windDirectionDegree;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SAWeatherWindSpeed *)windSpeed;
+ (NSDictionary *)windSpeedWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)value;
- (void)setValue:(NSString *)arg0;
- (NSString *)encodedClassName;
- (NSString *)windDirection;
- (void)setWindDirection:(NSString *)arg0;
- (NSNumber *)windDirectionDegree;
- (void)setWindDirectionDegree:(NSNumber *)arg0;

@end
