/* Runtime dump - SAMicroblogSocialCredentialResult
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMicroblogSocialCredentialResult : SABaseCommand <SAServerBoundCommand>

@property (retain, nonatomic) SAMicroblogSocialCredential * socialCredential;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * aceId;
@property (copy, nonatomic) NSString * refId;

+ (NSObject *)socialCredentialResult;
+ (NSDictionary *)socialCredentialResultWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (SAMicroblogSocialCredential *)socialCredential;
- (void)setSocialCredential:(SAMicroblogSocialCredential *)arg0;

@end
