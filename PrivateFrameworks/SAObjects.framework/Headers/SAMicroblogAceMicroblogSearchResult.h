/* Runtime dump - SAMicroblogAceMicroblogSearchResult
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMicroblogAceMicroblogSearchResult : SADomainObject

@property (retain, nonatomic) SAMicroblogTwitterPostAuthor * globalAuthor;
@property (retain, nonatomic) SAUIAppPunchOut * punchOut;
@property (copy, nonatomic) NSString * query;
@property (copy, nonatomic) NSArray * resultNews;
@property (copy, nonatomic) NSArray * resultPosts;
@property (copy, nonatomic) NSArray * resultUsers;
@property (retain, nonatomic) SADecoratedString * summary;
@property (copy, nonatomic) NSURL * webAddress;

+ (NSObject *)aceMicroblogSearchResult;
+ (NSDictionary *)aceMicroblogSearchResultWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)query;
- (void)setQuery:(NSString *)arg0;
- (NSString *)encodedClassName;
- (void)updateUsingSet:(NSSet *)arg0 add:(int)arg1 remove:(NSIndexSet *)arg2;
- (SAMicroblogTwitterPostAuthor *)globalAuthor;
- (void)setGlobalAuthor:(SAMicroblogTwitterPostAuthor *)arg0;
- (SAUIAppPunchOut *)punchOut;
- (void)setPunchOut:(SAUIAppPunchOut *)arg0;
- (NSArray *)resultNews;
- (void)setResultNews:(NSArray *)arg0;
- (NSArray *)resultPosts;
- (void)setResultPosts:(NSArray *)arg0;
- (NSArray *)resultUsers;
- (void)setResultUsers:(NSArray *)arg0;
- (NSURL *)webAddress;
- (void)setWebAddress:(NSURL *)arg0;
- (SADecoratedString *)summary;
- (void)setSummary:(SADecoratedString *)arg0;

@end
