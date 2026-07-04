/* Runtime dump - SAAnswerAbstractSocialPost
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAnswerAbstractSocialPost : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSString * author;
@property (copy, nonatomic) NSString * authorTitle;
@property (copy, nonatomic) NSArray * comments;
@property (copy, nonatomic) NSDate * dateCreated;
@property (copy, nonatomic) NSDate * dateModified;
@property (copy, nonatomic) NSURL * icon;
@property (nonatomic) int rank;
@property (copy, nonatomic) NSString * text;
@property (copy, nonatomic) NSString * title;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SAAnswerAbstractSocialPost *)abstractSocialPost;
+ (NSDictionary *)abstractSocialPostWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSURL *)icon;
- (NSString *)groupIdentifier;
- (void)setTitle:(NSString *)arg0;
- (NSString *)title;
- (NSString *)text;
- (void)setText:(NSString *)arg0;
- (void)setIcon:(NSURL *)arg0;
- (int)rank;
- (NSArray *)comments;
- (void)setComments:(NSArray *)arg0;
- (void)setAuthor:(NSString *)arg0;
- (NSString *)author;
- (void)setRank:(int)arg0;
- (NSDate *)dateCreated;
- (void)setDateCreated:(NSDate *)arg0;
- (NSString *)encodedClassName;
- (NSString *)authorTitle;
- (void)setAuthorTitle:(NSString *)arg0;
- (NSDate *)dateModified;
- (void)setDateModified:(NSDate *)arg0;

@end
