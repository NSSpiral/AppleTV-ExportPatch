/* Runtime dump - SAMicroblogSocialCredential
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMicroblogSocialCredential : AceObject <SABackgroundContextObject>

@property (copy, nonatomic) NSString * accessToken;
@property (copy, nonatomic) NSString * personalizationPermission;
@property (copy, nonatomic) NSString * socialNetwork;
@property (copy, nonatomic) NSString * tokenSecret;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SAMicroblogSocialCredential *)socialCredential;
+ (NSDictionary *)socialCredentialWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSString *)socialNetwork;
- (void)setSocialNetwork:(NSString *)arg0;
- (NSString *)personalizationPermission;
- (void)setPersonalizationPermission:(NSString *)arg0;
- (NSString *)tokenSecret;
- (void)setTokenSecret:(NSString *)arg0;
- (void)setAccessToken:(NSString *)arg0;
- (NSString *)accessToken;

@end
