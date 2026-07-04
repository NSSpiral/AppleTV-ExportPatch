/* Runtime dump - SSMetricsClickEvent
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSMetricsClickEvent : SSMetricsBaseEvent

@property (retain, nonatomic) id actionDetails;
@property (retain, nonatomic) NSString * actionType;
@property (retain, nonatomic) id impressions;
@property (retain, nonatomic) NSString * locationDescription;
@property (retain, nonatomic) NSNumber * positionX;
@property (retain, nonatomic) NSNumber * positionY;
@property (retain, nonatomic) NSString * targetIdentifier;
@property (retain, nonatomic) NSString * targetType;
@property (retain, nonatomic) NSString * targetURL;

- (SSMetricsClickEvent *)init;
- (NSString *)description;
- (void)setActionType:(NSString *)arg0;
- (NSString *)actionType;
- (NSString *)targetType;
- (NSString *)targetIdentifier;
- (NSNumber *)positionX;
- (NSNumber *)positionY;
- (NSMutableSet *)impressions;
- (GEOPlaceActionDetails *)actionDetails;
- (NSString *)locationDescription;
- (void)setActionDetails:(GEOPlaceActionDetails *)arg0;
- (void)setImpressions:(NSMutableSet *)arg0;
- (void)setLocationDescription:(NSString *)arg0;
- (void)setLocationWithEventLocations:(NSString *)arg0;
- (void)setPositionX:(NSNumber *)arg0;
- (void)setPositionY:(NSNumber *)arg0;
- (void)setTargetIdentifier:(NSString *)arg0;
- (void)setTargetType:(NSString *)arg0;
- (void)setTargetURL:(NSString *)arg0;
- (NSString *)targetURL;

@end
