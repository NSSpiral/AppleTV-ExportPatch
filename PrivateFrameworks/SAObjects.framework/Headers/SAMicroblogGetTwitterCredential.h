/* Runtime dump - SAMicroblogGetTwitterCredential
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMicroblogGetTwitterCredential : SAMicroblogGetSocialCredential

@property (copy, nonatomic) NSString * consumerKey;
@property (copy, nonatomic) NSString * consumerSecret;

+ (NSObject *)getTwitterCredential;
+ (NSDictionary *)getTwitterCredentialWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setConsumerKey:(NSString *)arg0;
- (void)setConsumerSecret:(NSString *)arg0;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (NSString *)consumerKey;
- (NSString *)consumerSecret;

@end
