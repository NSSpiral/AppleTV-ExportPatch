/* Runtime dump - SAWeatherLocationAdd
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAWeatherLocationAdd : SADomainCommand

@property (retain, nonatomic) SAWeatherLocation * weatherLocation;

+ (SAWeatherLocationAdd *)locationAdd;
+ (NSDictionary *)locationAddWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (SAWeatherLocation *)weatherLocation;
- (void)setWeatherLocation:(SAWeatherLocation *)arg0;

@end
