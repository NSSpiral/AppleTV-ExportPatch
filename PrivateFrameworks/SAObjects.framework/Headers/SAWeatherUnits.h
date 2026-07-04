/* Runtime dump - SAWeatherUnits
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAWeatherUnits : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSString * distanceUnits;
@property (copy, nonatomic) NSString * pressureUnits;
@property (copy, nonatomic) NSString * speedUnits;
@property (copy, nonatomic) NSString * temperatureUnits;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSString *)units;
+ (NSDictionary *)unitsWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSString *)distanceUnits;
- (void)setDistanceUnits:(NSString *)arg0;
- (NSString *)pressureUnits;
- (void)setPressureUnits:(NSString *)arg0;
- (NSString *)speedUnits;
- (void)setSpeedUnits:(NSString *)arg0;
- (NSString *)temperatureUnits;
- (void)setTemperatureUnits:(NSString *)arg0;

@end
