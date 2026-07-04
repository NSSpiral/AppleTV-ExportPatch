/* Runtime dump - SAWeatherBarometricPressure
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAWeatherBarometricPressure : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSString * trend;
@property (copy, nonatomic) NSString * value;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SAWeatherBarometricPressure *)barometricPressure;
+ (NSDictionary *)barometricPressureWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)value;
- (void)setValue:(NSString *)arg0;
- (NSString *)encodedClassName;
- (NSString *)trend;
- (void)setTrend:(NSString *)arg0;

@end
