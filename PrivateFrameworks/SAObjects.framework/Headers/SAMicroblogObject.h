/* Runtime dump - SAMicroblogObject
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMicroblogObject : SADomainObject

@property (copy, nonatomic) NSURL * attachment;
@property (copy, nonatomic) NSString * content;
@property (copy, nonatomic) NSDate * dateSent;
@property (copy, nonatomic) NSDictionary * hashtagAlternatives;
@property (retain, nonatomic) SALocation * location;
@property (copy, nonatomic) NSNumber * outgoing;
@property (copy, nonatomic) NSArray * recipients;
@property (copy, nonatomic) NSURL * refereceId;
@property (retain, nonatomic) SAPersonAttribute * sender;
@property (copy, nonatomic) NSString * serviceType;
@property (copy, nonatomic) NSDictionary * socialProfileReferences;
@property (copy, nonatomic) NSNumber * useLocation;

+ (NSObject *)object;
+ (NSDictionary *)objectWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (void)setRecipients:(NSArray *)arg0;
- (NSString *)groupIdentifier;
- (NSString *)content;
- (SALocation *)location;
- (SAPersonAttribute *)sender;
- (void)setSender:(SAPersonAttribute *)arg0;
- (void)setAttachment:(NSURL *)arg0;
- (NSURL *)attachment;
- (NSString *)serviceType;
- (void)setServiceType:(NSString *)arg0;
- (NSDate *)dateSent;
- (NSArray *)recipients;
- (void)setLocation:(SALocation *)arg0;
- (void)setContent:(NSString *)arg0;
- (NSString *)encodedClassName;
- (void)updateUsingSet:(NSSet *)arg0 add:(int)arg1 remove:(NSIndexSet *)arg2;
- (NSNumber *)outgoing;
- (void)setDateSent:(NSDate *)arg0;
- (NSDictionary *)hashtagAlternatives;
- (void)setHashtagAlternatives:(NSDictionary *)arg0;
- (NSURL *)refereceId;
- (void)setRefereceId:(NSURL *)arg0;
- (NSDictionary *)socialProfileReferences;
- (void)setSocialProfileReferences:(NSDictionary *)arg0;
- (NSNumber *)useLocation;
- (void)setUseLocation:(NSNumber *)arg0;
- (void)setOutgoing:(NSNumber *)arg0;

@end
