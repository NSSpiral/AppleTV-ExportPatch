/* Runtime dump - SSMetricsSearchEvent
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSMetricsSearchEvent : SSMetricsBaseEvent

@property (retain, nonatomic) NSString * searchTerm;
@property (retain, nonatomic) NSString * actionType;
@property (retain, nonatomic) id actionDetails;
@property (retain, nonatomic) NSString * targetIdentifier;
@property (retain, nonatomic) NSString * targetType;
@property (retain, nonatomic) NSString * targetURL;

- (NSString *)searchTerm;
- (void)setSearchTerm:(NSString *)arg0;
- (SSMetricsSearchEvent *)init;
- (void)setActionType:(NSString *)arg0;
- (NSString *)actionType;
- (NSString *)targetType;
- (NSString *)targetIdentifier;
- (GEOPlaceActionDetails *)actionDetails;
- (void)setActionDetails:(GEOPlaceActionDetails *)arg0;
- (void)setLocationWithEventLocations:(NSString *)arg0;
- (void)setTargetIdentifier:(NSString *)arg0;
- (void)setTargetType:(NSString *)arg0;
- (void)setTargetURL:(NSString *)arg0;
- (NSString *)targetURL;

@end
