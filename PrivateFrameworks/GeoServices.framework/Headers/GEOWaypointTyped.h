/* Runtime dump - GEOWaypointTyped
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOWaypointTyped : PBCodable <NSCopying>
{
    GEOWaypointID * _waypointId;
    GEOWaypointLocation * _waypointLocation;
    GEOWaypointPlace * _waypointPlace;
    int _waypointType;
    char _isCurrentLocation;
    struct ? _has;
}

@property (nonatomic) char hasWaypointType;
@property (nonatomic) int waypointType;
@property (readonly, nonatomic) char hasWaypointId;
@property (retain, nonatomic) GEOWaypointID * waypointId;
@property (readonly, nonatomic) char hasWaypointPlace;
@property (retain, nonatomic) GEOWaypointPlace * waypointPlace;
@property (readonly, nonatomic) char hasWaypointLocation;
@property (retain, nonatomic) GEOWaypointLocation * waypointLocation;
@property (nonatomic) char hasIsCurrentLocation;
@property (nonatomic) char isCurrentLocation;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOWaypointTyped *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (int)waypointType;
- (GEOWaypointPlace *)waypointPlace;
- (GEOWaypointLocation *)waypointLocation;
- (id)locationForWaypoint;
- (void)setWaypointId:(GEOWaypointID *)arg0;
- (void)setWaypointPlace:(GEOWaypointPlace *)arg0;
- (void)setWaypointLocation:(GEOWaypointLocation *)arg0;
- (void)setWaypointType:(int)arg0;
- (void)setHasWaypointType:(char)arg0;
- (char)hasWaypointType;
- (char)hasWaypointId;
- (char)hasWaypointPlace;
- (char)hasWaypointLocation;
- (void)setIsCurrentLocation:(char)arg0;
- (void)setHasIsCurrentLocation:(char)arg0;
- (char)hasIsCurrentLocation;
- (GEOWaypointID *)waypointId;
- (char)isCurrentLocation;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
