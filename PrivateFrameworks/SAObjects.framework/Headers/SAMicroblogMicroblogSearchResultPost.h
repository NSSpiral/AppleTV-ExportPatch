/* Runtime dump - SAMicroblogMicroblogSearchResultPost
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMicroblogMicroblogSearchResultPost : SAMicroblogMicroblogSearchResultBase

@property (copy, nonatomic) NSDate * creationTime;
@property (retain, nonatomic) SADecoratedString * decoratedContent;
@property (copy, nonatomic) NSArray * embeddedHashtags;
@property (copy, nonatomic) NSArray * embeddedImages;
@property (copy, nonatomic) NSArray * embeddedLinks;
@property (copy, nonatomic) NSArray * embeddedMentions;
@property (nonatomic) int favoritesCount;
@property (copy, nonatomic) NSString * location;
@property (retain, nonatomic) SAUIAppPunchOut * punchOut;
@property (retain, nonatomic) SAMicroblogTwitterPostAuthor * retweetAuthor;
@property (nonatomic) int retweetCount;
@property (copy, nonatomic) NSURL * webAddress;

+ (SAMicroblogMicroblogSearchResultPost *)microblogSearchResultPost;
+ (NSDictionary *)microblogSearchResultPostWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)location;
- (NSDate *)creationTime;
- (void)setCreationTime:(NSDate *)arg0;
- (void)setLocation:(NSString *)arg0;
- (NSString *)encodedClassName;
- (void)updateUsingSet:(NSSet *)arg0 add:(int)arg1 remove:(NSIndexSet *)arg2;
- (SAUIAppPunchOut *)punchOut;
- (void)setPunchOut:(SAUIAppPunchOut *)arg0;
- (NSURL *)webAddress;
- (void)setWebAddress:(NSURL *)arg0;
- (SADecoratedString *)decoratedContent;
- (void)setDecoratedContent:(SADecoratedString *)arg0;
- (NSArray *)embeddedHashtags;
- (void)setEmbeddedHashtags:(NSArray *)arg0;
- (NSArray *)embeddedImages;
- (void)setEmbeddedImages:(NSArray *)arg0;
- (NSArray *)embeddedLinks;
- (void)setEmbeddedLinks:(NSArray *)arg0;
- (NSArray *)embeddedMentions;
- (void)setEmbeddedMentions:(NSArray *)arg0;
- (int)favoritesCount;
- (void)setFavoritesCount:(int)arg0;
- (SAMicroblogTwitterPostAuthor *)retweetAuthor;
- (void)setRetweetAuthor:(SAMicroblogTwitterPostAuthor *)arg0;
- (int)retweetCount;
- (void)setRetweetCount:(int)arg0;

@end
