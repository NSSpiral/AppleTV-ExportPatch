/* Runtime dump - SAMicroblogMicroblogSearchResultNews
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMicroblogMicroblogSearchResultNews : SAMicroblogMicroblogSearchResultPost

@property (copy, nonatomic) NSURL * articleURL;
@property (copy, nonatomic) NSString * descriptionText;
@property (copy, nonatomic) NSString * title;

+ (SAMicroblogMicroblogSearchResultNews *)microblogSearchResultNews;
+ (NSDictionary *)microblogSearchResultNewsWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setTitle:(NSString *)arg0;
- (NSString *)title;
- (void)setDescriptionText:(NSString *)arg0;
- (NSString *)descriptionText;
- (NSString *)encodedClassName;
- (void)updateUsingSet:(NSSet *)arg0 add:(int)arg1 remove:(NSIndexSet *)arg2;
- (NSURL *)articleURL;
- (void)setArticleURL:(NSURL *)arg0;

@end
