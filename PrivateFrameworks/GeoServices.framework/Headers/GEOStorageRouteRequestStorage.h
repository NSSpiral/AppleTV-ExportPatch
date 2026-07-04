/* Runtime dump - GEOStorageRouteRequestStorage
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOStorageRouteRequestStorage : PBCodable <NSCopying>
{
    PBUnknownFields * _unknownFields;
    GEOURLRouteHandle * _routeHandle;
    int _transportType;
    NSMutableArray * _waypoints;
    struct ? _has;
}

@property (retain, nonatomic) NSMutableArray * waypoints;
@property (nonatomic) char hasTransportType;
@property (nonatomic) int transportType;
@property (readonly, nonatomic) char hasRouteHandle;
@property (retain, nonatomic) GEOURLRouteHandle * routeHandle;
@property (readonly, nonatomic) PBUnknownFields * unknownFields;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOStorageRouteRequestStorage *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setRouteHandle:(GEOURLRouteHandle *)arg0;
- (char)hasRouteHandle;
- (GEOURLRouteHandle *)routeHandle;
- (char)hasTransportType;
- (PBUnknownFields *)unknownFields;
- (void)setHasTransportType:(char)arg0;
- (void)setWaypoints:(NSMutableArray *)arg0;
- (void)addWaypoints:(id)arg0;
- (unsigned int)waypointsCount;
- (void)clearWaypoints;
- (NSObject *)waypointsAtIndex:(unsigned int)arg0;
- (NSMutableArray *)waypoints;
- (void)setTransportType:(int)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (int)transportType;

@end
