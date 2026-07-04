/* Runtime dump - SAFmfSearch
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAFmfSearch : SABaseClientBoundCommand

@property (copy, nonatomic) NSURL * targetAppId;
@property (retain, nonatomic) SALocation * currentLocation;
@property (copy, nonatomic) NSArray * emailAddresses;
@property (copy, nonatomic) NSArray * friends;
@property (copy, nonatomic) NSString * proximity;
@property (retain, nonatomic) SALocation * requestedLocation;

+ (NSDictionary *)searchWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;
+ (NSString *)search;

- (SALocation *)currentLocation;
- (void)setCurrentLocation:(SALocation *)arg0;
- (NSString *)proximity;
- (void)setProximity:(NSString *)arg0;
- (NSString *)groupIdentifier;
- (NSArray *)friends;
- (void)setFriends:(NSArray *)arg0;
- (NSArray *)emailAddresses;
- (void)setEmailAddresses:(NSArray *)arg0;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (NSURL *)targetAppId;
- (void)setTargetAppId:(NSURL *)arg0;
- (SALocation *)requestedLocation;
- (void)setRequestedLocation:(SALocation *)arg0;

@end
