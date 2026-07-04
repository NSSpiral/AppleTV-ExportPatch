/* Runtime dump - SAWebSearch
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAWebSearch : SADomainCommand

@property (copy, nonatomic) NSString * provider;
@property (copy, nonatomic) NSString * query;

+ (NSDictionary *)searchWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;
+ (NSString *)search;

- (NSString *)groupIdentifier;
- (NSString *)query;
- (void)setQuery:(NSString *)arg0;
- (NSString *)provider;
- (void)setProvider:(NSString *)arg0;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end
