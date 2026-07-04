/* Runtime dump - SAAnswerSearchResults
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAnswerSearchResults : SADomainSearchResults

@property (copy, nonatomic) NSArray * results;

+ (NSArray *)searchResults;
+ (NSDictionary *)searchResultsWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSArray *)results;
- (void)setResults:(NSArray *)arg0;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end
