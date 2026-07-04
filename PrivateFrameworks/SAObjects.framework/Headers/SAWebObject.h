/* Runtime dump - SAWebObject
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAWebObject : SADomainObject

@property (copy, nonatomic) NSString * query;
@property (retain, nonatomic) SAWebWebSearchResult * results;

+ (NSObject *)object;
+ (NSDictionary *)objectWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)query;
- (void)setQuery:(NSString *)arg0;
- (SAWebWebSearchResult *)results;
- (void)setResults:(SAWebWebSearchResult *)arg0;
- (NSString *)encodedClassName;
- (void)updateUsingSet:(NSSet *)arg0 add:(int)arg1 remove:(NSIndexSet *)arg2;

@end
