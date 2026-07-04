/* Runtime dump - SAFmfVisibilitySetCompleted
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAFmfVisibilitySetCompleted : SADomainCommand <SAServerBoundCommand>

@property (copy, nonatomic) NSURL * searchContext;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * aceId;
@property (copy, nonatomic) NSString * refId;

+ (SAFmfVisibilitySetCompleted *)visibilitySetCompleted;
+ (NSDictionary *)visibilitySetCompletedWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setSearchContext:(NSURL *)arg0;
- (NSURL *)searchContext;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end
