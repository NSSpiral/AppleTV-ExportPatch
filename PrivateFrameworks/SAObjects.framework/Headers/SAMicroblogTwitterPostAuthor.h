/* Runtime dump - SAMicroblogTwitterPostAuthor
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMicroblogTwitterPostAuthor : SADomainObject

@property (nonatomic) int followersCount;
@property (copy, nonatomic) NSString * fullName;
@property (copy, nonatomic) NSURL * profileImageUrl;
@property (copy, nonatomic) NSString * screenName;
@property (copy, nonatomic) NSNumber * userId;
@property (nonatomic) char verified;

+ (SAMicroblogTwitterPostAuthor *)twitterPostAuthor;
+ (NSDictionary *)twitterPostAuthorWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setUserId:(NSNumber *)arg0;
- (NSNumber *)userId;
- (void)setVerified:(char)arg0;
- (char)verified;
- (NSString *)fullName;
- (void)setFullName:(NSString *)arg0;
- (NSString *)encodedClassName;
- (void)updateUsingSet:(NSSet *)arg0 add:(int)arg1 remove:(NSIndexSet *)arg2;
- (int)followersCount;
- (void)setFollowersCount:(int)arg0;
- (NSURL *)profileImageUrl;
- (void)setProfileImageUrl:(NSURL *)arg0;
- (NSString *)screenName;
- (void)setScreenName:(NSString *)arg0;

@end
