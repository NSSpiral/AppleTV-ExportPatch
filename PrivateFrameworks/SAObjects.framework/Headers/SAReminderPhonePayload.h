/* Runtime dump - SAReminderPhonePayload
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAReminderPhonePayload : AceObject <SAReminderPayload>

@property (copy, nonatomic) NSString * recipient;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSData *)phonePayload;
+ (NSDictionary *)phonePayloadWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (void)setRecipient:(NSString *)arg0;
- (NSString *)groupIdentifier;
- (NSString *)recipient;
- (NSString *)encodedClassName;

@end
