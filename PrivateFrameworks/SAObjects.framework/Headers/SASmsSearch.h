/* Runtime dump - SASmsSearch
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASmsSearch : SADomainCommand

@property (copy, nonatomic) NSDate * end;
@property (copy, nonatomic) NSString * message;
@property (copy, nonatomic) NSNumber * outgoing;
@property (copy, nonatomic) NSArray * recipients;
@property (copy, nonatomic) NSArray * senders;
@property (copy, nonatomic) NSDate * start;
@property (copy, nonatomic) NSString * subject;
@property (copy, nonatomic) NSNumber * unread;

+ (NSDictionary *)searchWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;
+ (NSString *)search;

- (void)setRecipients:(NSArray *)arg0;
- (NSString *)groupIdentifier;
- (NSString *)message;
- (void)setMessage:(NSString *)arg0;
- (NSDate *)start;
- (NSDate *)end;
- (void)setStart:(NSDate *)arg0;
- (void)setEnd:(NSDate *)arg0;
- (void)setSubject:(NSString *)arg0;
- (NSString *)subject;
- (NSArray *)senders;
- (void)setSenders:(NSArray *)arg0;
- (NSArray *)recipients;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (NSNumber *)outgoing;
- (NSNumber *)unread;
- (void)setUnread:(NSNumber *)arg0;
- (void)setOutgoing:(NSNumber *)arg0;

@end
