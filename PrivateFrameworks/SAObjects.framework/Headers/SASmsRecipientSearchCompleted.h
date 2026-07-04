/* Runtime dump - SASmsRecipientSearchCompleted
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASmsRecipientSearchCompleted : SABaseCommand <SAServerBoundCommand>

@property (copy, nonatomic) NSArray * recipients;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * aceId;
@property (copy, nonatomic) NSString * refId;

+ (SASmsRecipientSearchCompleted *)recipientSearchCompleted;
+ (NSDictionary *)recipientSearchCompletedWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (void)setRecipients:(NSArray *)arg0;
- (NSString *)groupIdentifier;
- (NSArray *)recipients;
- (NSString *)encodedClassName;

@end
