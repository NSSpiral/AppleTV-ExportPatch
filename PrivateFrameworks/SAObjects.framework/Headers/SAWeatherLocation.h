/* Runtime dump - SAWeatherLocation
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAWeatherLocation : SALocation

@property (copy, nonatomic) NSString * locationId;

+ (CLLocation *)location;
+ (NSDictionary *)locationWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (void)updateUsingSet:(NSSet *)arg0 add:(int)arg1 remove:(NSIndexSet *)arg2;
- (NSString *)locationId;
- (void)setLocationId:(NSString *)arg0;

@end
