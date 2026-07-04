/* Runtime dump - SAWeatherLocationDelete
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAWeatherLocationDelete : SADomainCommand

@property (retain, nonatomic) SAWeatherLocation * weatherLocation;

+ (SAWeatherLocationDelete *)locationDelete;
+ (NSDictionary *)locationDeleteWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (SAWeatherLocation *)weatherLocation;
- (void)setWeatherLocation:(SAWeatherLocation *)arg0;

@end
