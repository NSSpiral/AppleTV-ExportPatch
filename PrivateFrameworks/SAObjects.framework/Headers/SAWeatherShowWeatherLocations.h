/* Runtime dump - SAWeatherShowWeatherLocations
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAWeatherShowWeatherLocations : SADomainCommand

+ (SAWeatherShowWeatherLocations *)showWeatherLocations;
+ (NSDictionary *)showWeatherLocationsWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end
