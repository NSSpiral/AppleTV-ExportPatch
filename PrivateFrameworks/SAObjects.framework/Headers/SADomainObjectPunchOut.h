/* Runtime dump - SADomainObjectPunchOut
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SADomainObjectPunchOut : SABaseClientBoundCommand

@property (retain, nonatomic) SADomainObject * domainItem;

+ (SADomainObjectPunchOut *)domainObjectPunchOut;
+ (NSDictionary *)domainObjectPunchOutWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (SADomainObject *)domainItem;
- (void)setDomainItem:(SADomainObject *)arg0;

@end
