/* Runtime dump - GEOWaypointPlace
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOWaypointPlace : PBCodable <NSCopying>
{
    GEOLatLng * _center;
    NSMutableArray * _roadAccessPoints;
}

@property (readonly, nonatomic) char hasCenter;
@property (retain, nonatomic) GEOLatLng * center;
@property (retain, nonatomic) NSMutableArray * roadAccessPoints;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOWaypointPlace *)copyWithZone:(struct _NSZone *)arg0;
- (GEOLatLng *)center;
- (void)setCenter:(GEOLatLng *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setRoadAccessPoints:(NSMutableArray *)arg0;
- (void)addRoadAccessPoint:(NSObject *)arg0;
- (unsigned int)roadAccessPointsCount;
- (void)clearRoadAccessPoints;
- (NSObject *)roadAccessPointAtIndex:(unsigned int)arg0;
- (char)hasCenter;
- (NSMutableArray *)roadAccessPoints;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
