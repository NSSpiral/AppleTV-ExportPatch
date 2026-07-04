/* Runtime dump - SAReminderAssistantPayload
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAReminderAssistantPayload : AceObject <SAReminderPayload>

@property (copy, nonatomic) NSString * utterance;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSData *)assistantPayload;
+ (NSDictionary *)assistantPayloadWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSString *)utterance;
- (void)setUtterance:(NSString *)arg0;

@end
