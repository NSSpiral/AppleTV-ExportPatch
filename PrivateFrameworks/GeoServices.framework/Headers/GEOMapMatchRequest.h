/* Runtime dump - GEOMapMatchRequest
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapMatchRequest : PBRequest <NSCopying>
{
    NSMutableArray * _locations;
    NSMutableArray * _waypoints;
}

@property (retain, nonatomic) NSMutableArray * waypoints;
@property (retain, nonatomic) NSMutableArray * locations;

- (void)dealloc;
- (void)setLocations:(NSMutableArray *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOMapMatchRequest *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (unsigned int)locationsCount;
- (NSObject *)locationAtIndex:(unsigned int)arg0;
- (NSMutableArray *)locations;
- (void)setWaypoints:(NSMutableArray *)arg0;
- (unsigned int)waypointsCount;
- (void)clearWaypoints;
- (NSMutableArray *)waypoints;
- (void)addLocation:(NSObject *)arg0;
- (void)clearLocations;
- (void)addWaypoint:(GEOComposedWaypoint *)arg0;
- (NSObject *)waypointAtIndex:(unsigned int)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
