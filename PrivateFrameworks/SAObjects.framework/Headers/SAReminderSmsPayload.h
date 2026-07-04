/* Runtime dump - SAReminderSmsPayload
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAReminderSmsPayload : AceObject <SAReminderPayload>

@property (copy, nonatomic) NSString * message;
@property (copy, nonatomic) NSArray * recipients;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSData *)smsPayload;
+ (NSDictionary *)smsPayloadWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (void)setRecipients:(NSArray *)arg0;
- (NSString *)groupIdentifier;
- (NSString *)message;
- (void)setMessage:(NSString *)arg0;
- (NSArray *)recipients;
- (NSString *)encodedClassName;

@end
