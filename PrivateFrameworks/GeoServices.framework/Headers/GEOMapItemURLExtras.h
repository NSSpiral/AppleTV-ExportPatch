/* Runtime dump - GEOMapItemURLExtras
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapItemURLExtras : NSObject

+ (NSObject *)urlToPresentAction:(NSObject *)arg0 present:(GEOURLPresent *)arg1;
+ (NSArray *)urlToPresentDirectionsForItems:(NSArray *)arg0 options:(NSDictionary *)arg1;
+ (NSArray *)urlToPresentDirectionsForMapItems:(NSArray *)arg0 options:(NSDictionary *)arg1;
+ (NSObject *)_mapItemsFromPresentAction:(NSObject *)arg0 hasCurrentLocation:(char *)arg1 currentLocationIndex:(unsigned int *)arg2 options:(id *)arg3;
+ (NSObject *)_mapItemsFromShowAction:(NSObject *)arg0 hasCurrentLocation:(char *)arg1 currentLocationIndex:(unsigned int *)arg2 options:(id *)arg3;
+ (NSObject *)_mapItemsFromDirectionsAction:(NSObject *)arg0 hasCurrentLocation:(char *)arg1 currentLocationIndex:(unsigned int *)arg2 options:(id *)arg3;
+ (NSDictionary *)urlToPresentCurrentLocationWithOptions:(NSDictionary *)arg0;
+ (NSObject *)urlToPresentMapItem:(NSObject *)arg0 withOptions:(unsigned long long)arg1;
+ (NSArray *)urlToPresentMapItems:(NSArray *)arg0 options:(NSDictionary *)arg1;
+ (NSArray *)urlToPresentCurrentLocationAndMapItems:(NSArray *)arg0 currentLocationIndex:(unsigned int)arg1 options:(NSDictionary *)arg2;
+ (NSObject *)urlToPresentDirectionsFromMapItem:(NSObject *)arg0 toMapItem:(NSObject *)arg1 options:(NSDictionary *)arg2;
+ (NSObject *)urlToPresentDirectionsFromMapItem:(NSObject *)arg0 toCurrentLocationWithOptions:(NSDictionary *)arg1;
+ (NSObject *)urlToPresentDirectionsFromCurrentLocationToMapItem:(NSObject *)arg0 withOptions:(unsigned long long)arg1;
+ (NSURL *)mapItemsFromURL:(NSURL *)arg0 hasCurrentLocation:(char *)arg1 currentLocationIndex:(unsigned int *)arg2 options:(id *)arg3;

@end
