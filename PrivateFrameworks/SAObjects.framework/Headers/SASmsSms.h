/* Runtime dump - SASmsSms
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASmsSms : SADomainObject

@property (copy, nonatomic) NSURL * attachment;
@property (copy, nonatomic) NSString * chatIdentifier;
@property (copy, nonatomic) NSDate * dateSent;
@property (copy, nonatomic) NSString * message;
@property (copy, nonatomic) NSArray * msgRecipients;
@property (retain, nonatomic) SAPersonAttribute * msgSender;
@property (copy, nonatomic) NSNumber * outgoing;
@property (copy, nonatomic) NSArray * recipients;
@property (copy, nonatomic) NSString * sender;
@property (copy, nonatomic) NSString * subject;
@property (copy, nonatomic) NSString * timezoneId;

+ (SASmsSms *)sms;
+ (NSDictionary *)smsWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (id)af_messageValue;
- (void)setRecipients:(NSArray *)arg0;
- (NSString *)groupIdentifier;
- (NSString *)message;
- (void)setMessage:(NSString *)arg0;
- (NSString *)sender;
- (void)setSubject:(NSString *)arg0;
- (void)setSender:(NSString *)arg0;
- (NSString *)subject;
- (void)setAttachment:(NSURL *)arg0;
- (NSURL *)attachment;
- (NSDate *)dateSent;
- (NSArray *)recipients;
- (NSString *)encodedClassName;
- (void)updateUsingSet:(NSSet *)arg0 add:(int)arg1 remove:(NSIndexSet *)arg2;
- (NSNumber *)outgoing;
- (NSString *)chatIdentifier;
- (void)setChatIdentifier:(NSString *)arg0;
- (void)setDateSent:(NSDate *)arg0;
- (NSArray *)msgRecipients;
- (void)setMsgRecipients:(NSArray *)arg0;
- (SAPersonAttribute *)msgSender;
- (void)setMsgSender:(SAPersonAttribute *)arg0;
- (NSString *)timezoneId;
- (void)setTimezoneId:(NSString *)arg0;
- (void)setOutgoing:(NSNumber *)arg0;

@end
