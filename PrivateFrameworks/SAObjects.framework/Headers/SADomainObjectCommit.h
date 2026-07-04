/* Runtime dump - SADomainObjectCommit
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SADomainObjectCommit : SABaseClientBoundCommand <SADomainObjectCommand>

@property (retain, nonatomic) SADomainObject * identifier;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SADomainObjectCommit *)domainObjectCommit;
+ (NSDictionary *)domainObjectCommitWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (SADomainObject *)identifier;
- (void)setIdentifier:(SADomainObject *)arg0;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end
