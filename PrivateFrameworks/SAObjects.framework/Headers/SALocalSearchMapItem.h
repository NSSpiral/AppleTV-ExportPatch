/* Runtime dump - SALocalSearchMapItem
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SALocalSearchMapItem : SADomainObject

@property (copy, nonatomic) NSArray * attributions;
@property (retain, nonatomic) <SAAceSerializable> * detail;
@property (copy, nonatomic) NSString * detailType;
@property (copy, nonatomic) NSString * directionRole;
@property (retain, nonatomic) SADistance * distance;
@property (copy, nonatomic) NSNumber * distanceInMiles;
@property (copy, nonatomic) NSString * extSessionGuid;
@property (copy, nonatomic) NSDate * extSessionGuidCreatedTimestamp;
@property (copy, nonatomic) NSString * label;
@property (copy, nonatomic) NSNumber * localSearchProviderId;
@property (retain, nonatomic) SALocation * location;
@property (copy, nonatomic) NSData * placeData;
@property (copy, nonatomic) NSData * placeData2;
@property (copy, nonatomic) NSNumber * placeId;
@property (copy, nonatomic) NSString * spokenAddress;
@property (copy, nonatomic) NSString * spokenName;

+ (MKMapItem *)mapItem;
+ (NSDictionary *)mapItemWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)label;
- (void)setDetail:(<SAAceSerializable> *)arg0;
- (void)setLabel:(NSString *)arg0;
- (SALocation *)location;
- (void)setDistance:(SADistance *)arg0;
- (void)setSpokenName:(NSString *)arg0;
- (void)setSpokenAddress:(NSString *)arg0;
- (NSString *)spokenName;
- (NSString *)spokenAddress;
- (NSData *)placeData;
- (void)setPlaceData:(NSData *)arg0;
- (void)setLocation:(SALocation *)arg0;
- (SADistance *)distance;
- (NSString *)encodedClassName;
- (void)updateUsingSet:(NSSet *)arg0 add:(int)arg1 remove:(NSIndexSet *)arg2;
- (NSString *)extSessionGuid;
- (void)setExtSessionGuid:(NSString *)arg0;
- (NSString *)detailType;
- (void)setDetailType:(NSString *)arg0;
- (NSString *)directionRole;
- (void)setDirectionRole:(NSString *)arg0;
- (NSNumber *)distanceInMiles;
- (void)setDistanceInMiles:(NSNumber *)arg0;
- (NSDate *)extSessionGuidCreatedTimestamp;
- (void)setExtSessionGuidCreatedTimestamp:(NSDate *)arg0;
- (NSNumber *)localSearchProviderId;
- (void)setLocalSearchProviderId:(NSNumber *)arg0;
- (NSData *)placeData2;
- (void)setPlaceData2:(NSData *)arg0;
- (NSNumber *)placeId;
- (void)setPlaceId:(NSNumber *)arg0;
- (NSArray *)attributions;
- (void)setAttributions:(NSArray *)arg0;
- (<SAAceSerializable> *)detail;

@end
