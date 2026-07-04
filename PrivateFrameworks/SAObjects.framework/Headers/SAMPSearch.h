/* Runtime dump - SAMPSearch
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPSearch : SADomainCommand

@property (copy, nonatomic) NSArray * constraints;
@property (nonatomic) int maxResults;
@property (copy, nonatomic) NSArray * searchTypes;
@property (nonatomic) char strict;

+ (NSDictionary *)searchWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;
+ (NSString *)search;

- (NSString *)groupIdentifier;
- (NSArray *)constraints;
- (void)setConstraints:(NSArray *)arg0;
- (int)maxResults;
- (void)setMaxResults:(int)arg0;
- (void)setSearchTypes:(NSArray *)arg0;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (NSArray *)searchTypes;
- (char)strict;
- (void)setStrict:(char)arg0;

@end
