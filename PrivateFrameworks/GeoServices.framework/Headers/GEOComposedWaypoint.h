/* Runtime dump - GEOComposedWaypoint
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOComposedWaypoint : PBCodable <NSCopying>
{
    GEOLatLng * _latLng;
    GEOMapItemStorage * _mapItemStorage;
    GEOWaypointTyped * _waypoint;
}

@property (readonly, nonatomic) char hasWaypoint;
@property (retain, nonatomic) GEOWaypointTyped * waypoint;
@property (readonly, nonatomic) char hasMapItemStorage;
@property (retain, nonatomic) GEOMapItemStorage * mapItemStorage;
@property (readonly, nonatomic) char hasLatLng;
@property (retain, nonatomic) GEOLatLng * latLng;

+ (void)composedWaypointForMapItem:(NSObject *)arg0 forQuickETA:(char)arg1 completionHandler:(id /* block */)arg2 networkActivityHandler:(/* block */ id)arg3;
+ (void)composedWaypointForMapServiceResponse:(NSURLResponse *)arg0 clientAttributes:(NSDictionary *)arg1 error:(NSError *)arg2 handler:(id /* block */)arg3;
+ (NSObject *)composedWaypointForLocation:(NSObject *)arg0 mapItem:(MKMapItem *)arg1 traits:(NSArray *)arg2 completionHandler:(id /* block */)arg3 networkActivityHandler:(/* block */ id)arg4;
+ (GEOComposedWaypoint *)composedWaypointForMapItemToRefine:(id)arg0 traits:(NSArray *)arg1 clientAttributes:(NSDictionary *)arg2 completionHandler:(id /* block */)arg3 networkActivityHandler:(/* block */ id)arg4;
+ (void)composedWaypointForID:(unsigned long long)arg0 traits:(NSArray *)arg1 clientAttributes:(NSDictionary *)arg2 completionHandler:(id /* block */)arg3 networkActivityHandler:(/* block */ id)arg4;
+ (NSObject *)composedWaypointForCurrentLocation:(NSObject *)arg0 traits:(NSArray *)arg1 completionHandler:(id /* block */)arg2 networkActivityHandler:(/* block */ id)arg3;
+ (NSString *)composedWaypointForAddressString:(NSString *)arg0 traits:(NSArray *)arg1 clientAttributes:(NSDictionary *)arg2 completionHandler:(id /* block */)arg3 networkActivityHandler:(/* block */ id)arg4;
+ (NSString *)composedWaypointForSearchString:(NSString *)arg0 completionItem:(NSObject *)arg1 traits:(NSArray *)arg2 clientAttributes:(NSDictionary *)arg3 completionHandler:(id /* block */)arg4 networkActivityHandler:(/* block */ id)arg5;
+ (NSObject *)composedWaypointForMapItem:(NSObject *)arg0 traits:(NSArray *)arg1 clientAttributes:(NSDictionary *)arg2 completionHandler:(id /* block */)arg3 networkActivityHandler:(/* block */ id)arg4;
+ (NSObject *)composedWaypointForIncompleteMapItem:(NSObject *)arg0 traits:(NSArray *)arg1 clientAttributes:(NSDictionary *)arg2 completionHandler:(id /* block */)arg3 networkActivityHandler:(/* block */ id)arg4;
+ (GEOComposedWaypoint *)composedWaypointForCoordinate:(struct ?)arg0 addressDictionary:(NSDictionary *)arg1 placeName:(NSString *)arg2 traits:(NSArray *)arg3 completionHandler:(id /* block */)arg4 networkActivityHandler:(/* block */ id)arg5;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOComposedWaypoint *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (GEOLatLng *)latLng;
- (GEOTimezone *)timezone;
- (GEOMapItemStorage *)mapItemStorage;
- (void)setMapItemStorage:(GEOMapItemStorage *)arg0;
- (char)hasMapItemStorage;
- (void)setWaypoint:(GEOWaypointTyped *)arg0;
- (char)hasWaypoint;
- (char)hasLatLng;
- (GEOWaypointTyped *)waypoint;
- (GEOComposedWaypoint *)initWithLocation:(NSObject *)arg0 isCurrentLocation:(char)arg1;
- (void)setIsCurrentLocation:(char)arg0;
- (char)isCurrentLocation;
- (GEOComposedWaypoint *)initWithMapItem:(MKMapItem *)arg0;
- (<GEOMapItemPrivate> *)geoMapItem;
- (void)setLatLng:(GEOLatLng *)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
