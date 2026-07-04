/* Runtime dump - SADomainObjectCreate
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SADomainObjectCreate : SADomainCommand <SADomainObjectCommand>

@property (retain, nonatomic) SADomainObject * object;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SADomainObjectCreate *)domainObjectCreate;
+ (NSDictionary *)domainObjectCreateWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (SADomainObject *)object;
- (void)setObject:(SADomainObject *)arg0;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end
