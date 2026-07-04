/* Runtime dump - SADomainObjectRetrieve
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SADomainObjectRetrieve : SABaseClientBoundCommand <SADomainObjectCommand>

@property (copy, nonatomic) NSArray * identifiers;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SADomainObjectRetrieve *)domainObjectRetrieve;
+ (NSDictionary *)domainObjectRetrieveWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (NSArray *)identifiers;
- (void)setIdentifiers:(NSArray *)arg0;

@end
