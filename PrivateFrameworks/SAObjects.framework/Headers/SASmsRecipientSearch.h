/* Runtime dump - SASmsRecipientSearch
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASmsRecipientSearch : SADomainCommand

@property (copy, nonatomic) NSArray * recipients;

+ (SASmsRecipientSearch *)recipientSearch;
+ (NSDictionary *)recipientSearchWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (void)setRecipients:(NSArray *)arg0;
- (NSString *)groupIdentifier;
- (NSArray *)recipients;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end
