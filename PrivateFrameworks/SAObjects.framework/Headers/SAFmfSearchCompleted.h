/* Runtime dump - SAFmfSearchCompleted
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAFmfSearchCompleted : SABaseCommand <SAServerBoundCommand>

@property (copy, nonatomic) NSNumber * atRequestedLocation;
@property (copy, nonatomic) NSArray * fmfLocations;
@property (copy, nonatomic) NSURL * searchContext;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * aceId;
@property (copy, nonatomic) NSString * refId;

+ (SAFmfSearchCompleted *)searchCompleted;
+ (NSDictionary *)searchCompletedWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setSearchContext:(NSURL *)arg0;
- (NSURL *)searchContext;
- (NSString *)encodedClassName;
- (NSNumber *)atRequestedLocation;
- (void)setAtRequestedLocation:(NSNumber *)arg0;
- (NSArray *)fmfLocations;
- (void)setFmfLocations:(NSArray *)arg0;

@end
