/* Runtime dump - SAWeatherLocationSearch
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAWeatherLocationSearch : SADomainCommand

@property (copy, nonatomic) NSURL * identifier;
@property (copy, nonatomic) NSString * locationId;

+ (SAWeatherLocationSearch *)locationSearch;
+ (NSDictionary *)locationSearchWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSURL *)identifier;
- (void)setIdentifier:(NSURL *)arg0;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (NSString *)locationId;
- (void)setLocationId:(NSString *)arg0;

@end
