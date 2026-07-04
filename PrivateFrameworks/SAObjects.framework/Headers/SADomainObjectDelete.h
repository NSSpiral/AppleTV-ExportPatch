/* Runtime dump - SADomainObjectDelete
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SADomainObjectDelete : SABaseClientBoundCommand <SADomainObjectCommand>

@property (retain, nonatomic) SADomainObject * identifier;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SADomainObjectDelete *)domainObjectDelete;
+ (NSDictionary *)domainObjectDeleteWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (SADomainObject *)identifier;
- (void)setIdentifier:(SADomainObject *)arg0;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end
