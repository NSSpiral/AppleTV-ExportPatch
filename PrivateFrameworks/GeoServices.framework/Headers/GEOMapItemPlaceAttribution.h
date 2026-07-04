/* Runtime dump - GEOMapItemPlaceAttribution
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapItemPlaceAttribution : GEOMapItemAttribution

@property (readonly, nonatomic) NSArray * checkInURLs;
@property (readonly, nonatomic) NSURL * webURL;

- (NSURL *)webURL;
- (GEOMapItemPlaceAttribution *)initWithSearchAttributionInfo:(NSDictionary *)arg0 attributionURLs:(NSArray *)arg1 poiID:(NSString *)arg2;
- (NSArray *)checkInURLs;
- (NSString *)urlsForDealWithIdentifier:(NSString *)arg0;

@end
