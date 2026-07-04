/* Runtime dump - SADomainObjectCancelCompleted
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SADomainObjectCancelCompleted : SABaseCommand <SAServerBoundCommand, SADomainObjectCommand>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * aceId;
@property (copy, nonatomic) NSString * refId;

+ (SADomainObjectCancelCompleted *)domainObjectCancelCompleted;
+ (NSDictionary *)domainObjectCancelCompletedWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;

@end
