/* Runtime dump - SAMicroblogSearchResultsSnippet
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMicroblogSearchResultsSnippet : SAUISnippet

@property (copy, nonatomic) NSArray * searches;

+ (SAMicroblogSearchResultsSnippet *)searchResultsSnippet;
+ (NSDictionary *)searchResultsSnippetWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSArray *)searches;
- (void)setSearches:(NSArray *)arg0;

@end
