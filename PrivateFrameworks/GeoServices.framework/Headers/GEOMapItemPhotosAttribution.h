/* Runtime dump - GEOMapItemPhotosAttribution
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapItemPhotosAttribution : GEOMapItemAttribution

@property (readonly, nonatomic) NSArray * addPhotoURLs;

- (GEOMapItemPhotosAttribution *)initWithSearchAttributionInfo:(NSDictionary *)arg0 attributionURLs:(NSArray *)arg1 yelpID:(NSString *)arg2;
- (GEOMapItemPhotosAttribution *)initWithSearchAttributionInfo:(NSDictionary *)arg0 attributionURLs:(NSArray *)arg1 poiID:(NSString *)arg2;
- (NSArray *)addPhotoURLs;
- (NSString *)urlsForPhotoWithIdentifier:(NSString *)arg0;

@end
