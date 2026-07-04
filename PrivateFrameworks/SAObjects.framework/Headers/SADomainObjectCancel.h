/* Runtime dump - SADomainObjectCancel
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SADomainObjectCancel : SABaseClientBoundCommand <SADomainObjectCommand>

@property (retain, nonatomic) SADomainObject * identifier;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SADomainObjectCancel *)domainObjectCancel;
+ (NSDictionary *)domainObjectCancelWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (SADomainObject *)identifier;
- (void)setIdentifier:(SADomainObject *)arg0;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end
