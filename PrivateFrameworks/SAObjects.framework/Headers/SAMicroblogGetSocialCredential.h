/* Runtime dump - SAMicroblogGetSocialCredential
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMicroblogGetSocialCredential : SABaseClientBoundCommand

@property (copy, nonatomic) NSString * explicitUserPermission;
@property (copy, nonatomic) NSString * socialNetwork;

+ (NSObject *)getSocialCredential;
+ (NSDictionary *)getSocialCredentialWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (NSString *)explicitUserPermission;
- (void)setExplicitUserPermission:(NSString *)arg0;
- (NSString *)socialNetwork;
- (void)setSocialNetwork:(NSString *)arg0;

@end
