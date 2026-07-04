/* Runtime dump - SAEmailEmail
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAEmailEmail : SADomainObject

@property (copy, nonatomic) NSDate * dateSent;
@property (retain, nonatomic) SAPersonAttribute * fromEmail;
@property (copy, nonatomic) NSString * message;
@property (copy, nonatomic) NSString * messagePreview;
@property (copy, nonatomic) NSNumber * outgoing;
@property (copy, nonatomic) NSArray * receivingAddresses;
@property (copy, nonatomic) NSArray * recipientsBcc;
@property (copy, nonatomic) NSArray * recipientsCc;
@property (copy, nonatomic) NSArray * recipientsTo;
@property (copy, nonatomic) NSURL * referenceId;
@property (copy, nonatomic) NSString * subject;
@property (copy, nonatomic) NSString * timeZoneId;
@property (copy, nonatomic) NSString * type;

+ (SAEmail *)email;
+ (NSDictionary *)emailWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setType:(NSString *)arg0;
- (NSString *)type;
- (NSString *)message;
- (void)setMessage:(NSString *)arg0;
- (void)setSubject:(NSString *)arg0;
- (NSString *)subject;
- (NSDate *)dateSent;
- (NSString *)encodedClassName;
- (void)updateUsingSet:(NSSet *)arg0 add:(int)arg1 remove:(NSIndexSet *)arg2;
- (NSString *)timeZoneId;
- (void)setTimeZoneId:(NSString *)arg0;
- (NSNumber *)outgoing;
- (void)setDateSent:(NSDate *)arg0;
- (NSArray *)recipientsTo;
- (void)setRecipientsTo:(NSArray *)arg0;
- (SAPersonAttribute *)fromEmail;
- (void)setFromEmail:(SAPersonAttribute *)arg0;
- (NSString *)messagePreview;
- (void)setMessagePreview:(NSString *)arg0;
- (NSArray *)receivingAddresses;
- (void)setReceivingAddresses:(NSArray *)arg0;
- (NSArray *)recipientsBcc;
- (void)setRecipientsBcc:(NSArray *)arg0;
- (NSArray *)recipientsCc;
- (void)setRecipientsCc:(NSArray *)arg0;
- (NSURL *)referenceId;
- (void)setReferenceId:(NSURL *)arg0;
- (void)setOutgoing:(NSNumber *)arg0;

@end
