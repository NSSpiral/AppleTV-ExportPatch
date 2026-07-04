/* Runtime dump - SAReminderEmailPayload
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAReminderEmailPayload : AceObject <SAReminderPayload>

@property (copy, nonatomic) NSArray * recipientsTo;
@property (copy, nonatomic) NSString * subject;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSData *)emailPayload;
+ (NSDictionary *)emailPayloadWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setSubject:(NSString *)arg0;
- (NSString *)subject;
- (NSString *)encodedClassName;
- (NSArray *)recipientsTo;
- (void)setRecipientsTo:(NSArray *)arg0;

@end
