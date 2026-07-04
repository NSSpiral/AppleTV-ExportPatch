/* Runtime dump - SAClockSearch
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAClockSearch : SADomainCommand

@property (copy, nonatomic) NSNumber * alCityId;
@property (copy, nonatomic) NSString * countryCode;
@property (copy, nonatomic) NSURL * identifier;
@property (copy, nonatomic) NSString * unlocalizedCityName;
@property (copy, nonatomic) NSString * unlocalizedCountryName;

+ (NSDictionary *)searchWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;
+ (NSString *)search;

- (NSString *)groupIdentifier;
- (NSURL *)identifier;
- (void)setIdentifier:(NSURL *)arg0;
- (void)setCountryCode:(NSString *)arg0;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (NSNumber *)alCityId;
- (void)setAlCityId:(NSNumber *)arg0;
- (NSString *)unlocalizedCityName;
- (void)setUnlocalizedCityName:(NSString *)arg0;
- (NSString *)unlocalizedCountryName;
- (void)setUnlocalizedCountryName:(NSString *)arg0;
- (NSString *)countryCode;

@end
