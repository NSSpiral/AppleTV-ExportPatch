/* Runtime dump - SAPhonePlayVoiceMail
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAPhonePlayVoiceMail : SADomainCommand

@property (copy, nonatomic) NSURL * voiceMailId;

+ (SAPhonePlayVoiceMail *)playVoiceMail;
+ (NSDictionary *)playVoiceMailWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (NSURL *)voiceMailId;
- (void)setVoiceMailId:(NSURL *)arg0;

@end
