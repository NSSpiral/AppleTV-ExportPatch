/* Runtime dump - SALocalSearchShowMapPoints
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SALocalSearchShowMapPoints : SADomainCommand

@property (copy, nonatomic) NSString * directionsType;
@property (retain, nonatomic) SALocalSearchMapItem * itemDestination;
@property (retain, nonatomic) SALocalSearchMapItem * itemSource;
@property (copy, nonatomic) NSString * language;
@property (copy, nonatomic) NSNumber * regionOfInterestRadiusInMiles;
@property (retain, nonatomic) SALocalSearchMapItemList * searchItems;
@property (nonatomic) char showDirections;
@property (nonatomic) char showTraffic;

+ (SALocalSearchShowMapPoints *)showMapPoints;
+ (NSDictionary *)showMapPointsWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (SALocalSearchMapItemList *)searchItems;
- (void)setSearchItems:(SALocalSearchMapItemList *)arg0;
- (NSString *)groupIdentifier;
- (NSString *)language;
- (void)setLanguage:(NSString *)arg0;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (NSNumber *)regionOfInterestRadiusInMiles;
- (void)setRegionOfInterestRadiusInMiles:(NSNumber *)arg0;
- (NSString *)directionsType;
- (void)setDirectionsType:(NSString *)arg0;
- (SALocalSearchMapItem *)itemDestination;
- (void)setItemDestination:(SALocalSearchMapItem *)arg0;
- (SALocalSearchMapItem *)itemSource;
- (void)setItemSource:(SALocalSearchMapItem *)arg0;
- (char)showDirections;
- (void)setShowDirections:(char)arg0;
- (char)showTraffic;
- (void)setShowTraffic:(char)arg0;

@end
