/* Runtime dump - SADomainObjectRetrieveCompleted
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SADomainObjectRetrieveCompleted : SABaseCommand <SAServerBoundCommand, SADomainObjectCommand>

@property (copy, nonatomic) NSArray * objects;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * aceId;
@property (copy, nonatomic) NSString * refId;

+ (SADomainObjectRetrieveCompleted *)domainObjectRetrieveCompleted;
+ (NSDictionary *)domainObjectRetrieveCompletedWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSArray *)objects;
- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (void)setObjects:(NSArray *)arg0;

@end
