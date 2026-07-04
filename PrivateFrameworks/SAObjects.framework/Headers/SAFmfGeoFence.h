/* Runtime dump - SAFmfGeoFence
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAFmfGeoFence : SADomainObject

@property (retain, nonatomic) SAPersonAttribute * friend;
@property (copy, nonatomic) NSString * geoFenceTrigger;
@property (retain, nonatomic) SALocation * location;

+ (SAFmfGeoFence *)geoFence;
+ (NSDictionary *)geoFenceWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (SALocation *)location;
- (void)setLocation:(SALocation *)arg0;
- (NSString *)encodedClassName;
- (void)updateUsingSet:(NSSet *)arg0 add:(int)arg1 remove:(NSIndexSet *)arg2;
- (SAPersonAttribute *)friend;
- (void)setFriend:(SAPersonAttribute *)arg0;
- (NSString *)geoFenceTrigger;
- (void)setGeoFenceTrigger:(NSString *)arg0;

@end
