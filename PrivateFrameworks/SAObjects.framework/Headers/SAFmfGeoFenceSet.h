/* Runtime dump - SAFmfGeoFenceSet
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAFmfGeoFenceSet : SADomainCommand

@property (copy, nonatomic) NSNumber * enable;
@property (copy, nonatomic) NSString * fenceType;
@property (retain, nonatomic) SAPerson * friend;
@property (copy, nonatomic) NSString * geoFenceTrigger;
@property (copy, nonatomic) NSNumber * oneTimeOnly;
@property (retain, nonatomic) SALocation * requestedLocation;

+ (NSSet *)geoFenceSet;
+ (NSDictionary *)geoFenceSetWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSNumber *)enable;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (void)setEnable:(NSNumber *)arg0;
- (SAPerson *)friend;
- (void)setFriend:(SAPerson *)arg0;
- (SALocation *)requestedLocation;
- (void)setRequestedLocation:(SALocation *)arg0;
- (NSString *)geoFenceTrigger;
- (void)setGeoFenceTrigger:(NSString *)arg0;
- (NSString *)fenceType;
- (void)setFenceType:(NSString *)arg0;
- (NSNumber *)oneTimeOnly;
- (void)setOneTimeOnly:(NSNumber *)arg0;

@end
