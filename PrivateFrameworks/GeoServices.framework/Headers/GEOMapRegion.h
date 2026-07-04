/* Runtime dump - GEOMapRegion
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapRegion : PBCodable <NSCopying>
{
    double _eastLng;
    double _northLat;
    double _southLat;
    double _westLng;
    NSMutableArray * _vertexs;
    struct ? _has;
}

@property (readonly, nonatomic) double centerLat;
@property (readonly, nonatomic) double centerLng;
@property (readonly, nonatomic) double spanLat;
@property (readonly, nonatomic) double spanLng;
@property (nonatomic) char hasSouthLat;
@property (nonatomic) double southLat;
@property (nonatomic) char hasWestLng;
@property (nonatomic) double westLng;
@property (nonatomic) char hasNorthLat;
@property (nonatomic) double northLat;
@property (nonatomic) char hasEastLng;
@property (nonatomic) double eastLng;
@property (retain, nonatomic) NSMutableArray * vertexs;

+ (NSObject *)_mapkit_mapRegionForCoordinateRegion:(struct ?)arg0;
+ (NSArray *)_mapkit_mapRegionEnclosingAnnotations:(NSArray *)arg0;
+ (NSObject *)_mapkit_mapRegionForGEOCoordinateRegion:(struct ?)arg0;
+ (GEOMapRegion *)_mapkit_mapRegionForLatitude:(double)arg0 longitude:(double)arg1 latSpan:(double)arg2 longSpan:(double)arg3;

- (NSObject *)_initWithCLRegion:(NSObject *)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOMapRegion *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setMapRect:(struct ?)arg0;
- (GEOMapRegion *)initWithRadialPlace:(id)arg0;
- (double)centerLat;
- (double)centerLng;
- (double)spanLat;
- (double)spanLng;
- (char)containsCoordinate:(struct ?)arg0;
- (char)containsMapRect:(struct ?)arg0;
- (void)setVertexs:(NSMutableArray *)arg0;
- (unsigned int)vertexsCount;
- (void)clearVertexs;
- (NSObject *)vertexAtIndex:(unsigned int)arg0;
- (void)setHasSouthLat:(char)arg0;
- (char)hasSouthLat;
- (void)setHasWestLng:(char)arg0;
- (char)hasWestLng;
- (void)setHasNorthLat:(char)arg0;
- (char)hasNorthLat;
- (void)setHasEastLng:(char)arg0;
- (char)hasEastLng;
- (NSMutableArray *)vertexs;
- (GEOMapRegion *)initWithLatitude:(double)arg0 longitude:(double)arg1;
- (double)northLat;
- (double)westLng;
- (double)southLat;
- (double)eastLng;
- (void)setNorthLat:(double)arg0;
- (void)setSouthLat:(double)arg0;
- (void)setEastLng:(double)arg0;
- (void)setWestLng:(double)arg0;
- (GEOMapRegion *)initWithMapRect:(struct ?)arg0;
- (void)addVertex:(SALocalSearchMapViewportVertex *)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (GEOMapRegion *)initWithCoordinateRegion:(struct ?)arg0;

@end
