/* Runtime dump - SADomainObjectCommitCompleted
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SADomainObjectCommitCompleted : SABaseCommand <SAServerBoundCommand, SADomainObjectCommand>

@property (copy, nonatomic) NSURL * identifier;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * aceId;
@property (copy, nonatomic) NSString * refId;

+ (SADomainObjectCommitCompleted *)domainObjectCommitCompleted;
+ (NSDictionary *)domainObjectCommitCompletedWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSURL *)identifier;
- (void)setIdentifier:(NSURL *)arg0;
- (NSString *)encodedClassName;

@end
