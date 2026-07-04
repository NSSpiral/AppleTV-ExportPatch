/* Runtime dump - SADynamiteClientState
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SADynamiteClientState : SAAceClientState

@property (retain, nonatomic) SACalendar * expirationDate;
@property (copy, nonatomic) NSString * status;

+ (NSString *)syncKey;
+ (SADynamiteClientState *)deliveryDeadline;
+ (NSObject *)persistencePolicy;
+ (NSString *)uniqueObjectIdentifier;
+ (NSObject *)dynamiteClientState;
+ (NSDictionary *)dynamiteClientStateWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)status;
- (void)setStatus:(NSString *)arg0;
- (void)setExpirationDate:(SACalendar *)arg0;
- (SACalendar *)expirationDate;
- (NSString *)encodedClassName;

@end
