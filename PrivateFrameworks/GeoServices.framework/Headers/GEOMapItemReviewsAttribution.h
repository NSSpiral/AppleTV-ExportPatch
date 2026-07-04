/* Runtime dump - GEOMapItemReviewsAttribution
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapItemReviewsAttribution : GEOMapItemAttribution

@property (readonly, nonatomic) NSArray * addReviewURLs;

- (GEOMapItemReviewsAttribution *)initWithSearchAttributionInfo:(NSDictionary *)arg0 attributionURLs:(NSArray *)arg1 yelpID:(NSString *)arg2;
- (GEOMapItemReviewsAttribution *)initWithSearchAttributionInfo:(NSDictionary *)arg0 attributionURLs:(NSArray *)arg1 poiID:(NSString *)arg2;
- (NSArray *)addReviewURLs;
- (NSString *)urlsForReviewWithIdentifier:(NSString *)arg0;
- (NSArray *)urlsForSelectedItemWithItems:(NSArray *)arg0;

@end
