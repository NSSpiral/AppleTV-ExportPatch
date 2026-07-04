/* Runtime dump - SALocalSearchMapItemSnippet
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SALocalSearchMapItemSnippet : SAUISnippet

@property (copy, nonatomic) NSArray * items;
@property (copy, nonatomic) NSArray * providerCommand;
@property (copy, nonatomic) NSNumber * regionOfInterestRadiusInMiles;
@property (retain, nonatomic) SALocation * searchRegionCenter;
@property (copy, nonatomic) NSNumber * userCurrentLocation;

+ (SALocalSearchMapItemSnippet *)mapItemSnippet;
+ (NSDictionary *)mapItemSnippetWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSArray *)items;
- (void)setItems:(NSArray *)arg0;
- (NSString *)encodedClassName;
- (NSArray *)providerCommand;
- (void)setProviderCommand:(NSArray *)arg0;
- (NSNumber *)regionOfInterestRadiusInMiles;
- (void)setRegionOfInterestRadiusInMiles:(NSNumber *)arg0;
- (SALocation *)searchRegionCenter;
- (void)setSearchRegionCenter:(SALocation *)arg0;
- (NSNumber *)userCurrentLocation;
- (void)setUserCurrentLocation:(NSNumber *)arg0;

@end
