/* Runtime dump - SADomainSearchResults
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SADomainSearchResults : SADomainCommand <SAServerBoundCommand>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * aceId;
@property (copy, nonatomic) NSString * refId;

- (NSString *)groupIdentifier;
- (SADomainSearchResults *)init;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end
