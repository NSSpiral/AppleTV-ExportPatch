/* Runtime dump - SAAcknowledgeAlert
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAcknowledgeAlert : SABaseClientBoundCommand

@property (retain, nonatomic) SADomainObject * object;

+ (SAAcknowledgeAlert *)acknowledgeAlert;
+ (NSDictionary *)acknowledgeAlertWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (SADomainObject *)object;
- (void)setObject:(SADomainObject *)arg0;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end
