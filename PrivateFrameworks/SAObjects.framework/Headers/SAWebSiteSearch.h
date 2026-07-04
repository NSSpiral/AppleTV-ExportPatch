/* Runtime dump - SAWebSiteSearch
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAWebSiteSearch : SADomainCommand

@property (copy, nonatomic) NSString * provider;
@property (copy, nonatomic) NSString * query;

+ (SAWebSiteSearch *)siteSearch;
+ (NSDictionary *)siteSearchWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)query;
- (void)setQuery:(NSString *)arg0;
- (NSString *)provider;
- (void)setProvider:(NSString *)arg0;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end
