/* Runtime dump - SADomainObjectUpdate
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SADomainObjectUpdate : SABaseClientBoundCommand <SADomainObjectCommand>

@property (retain, nonatomic) SADomainObject * addFields;
@property (retain, nonatomic) SADomainObject * identifier;
@property (retain, nonatomic) SADomainObject * removeFields;
@property (retain, nonatomic) SADomainObject * setFields;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSDate *)domainObjectUpdate;
+ (NSDictionary *)domainObjectUpdateWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (SADomainObject *)identifier;
- (void)setIdentifier:(SADomainObject *)arg0;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (SADomainObject *)addFields;
- (void)setAddFields:(SADomainObject *)arg0;
- (SADomainObject *)removeFields;
- (void)setRemoveFields:(SADomainObject *)arg0;
- (SADomainObject *)setFields;
- (void)setSetFields:(SADomainObject *)arg0;

@end
