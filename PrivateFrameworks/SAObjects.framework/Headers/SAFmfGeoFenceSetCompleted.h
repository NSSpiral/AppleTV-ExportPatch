/* Runtime dump - SAFmfGeoFenceSetCompleted
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAFmfGeoFenceSetCompleted : SADomainCommand <SAServerBoundCommand>

@property (retain, nonatomic) SAFmfGeoFence * geoFence;
@property (copy, nonatomic) NSURL * searchContext;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * aceId;
@property (copy, nonatomic) NSString * refId;

+ (SAFmfGeoFenceSetCompleted *)geoFenceSetCompleted;
+ (NSDictionary *)geoFenceSetCompletedWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setSearchContext:(NSURL *)arg0;
- (NSURL *)searchContext;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (SAFmfGeoFence *)geoFence;
- (void)setGeoFence:(SAFmfGeoFence *)arg0;

@end
