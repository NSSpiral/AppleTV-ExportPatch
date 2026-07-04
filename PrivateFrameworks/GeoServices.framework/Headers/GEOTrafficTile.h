/* Runtime dump - GEOTrafficTile
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTrafficTile : PBCodable <NSCopying>
{
    NSMutableArray * _trafficIncidents;
    NSMutableArray * _trafficSegments;
    NSData * _vertices;
}

@property (readonly, nonatomic) char hasVertices;
@property (retain, nonatomic) NSData * vertices;
@property (retain, nonatomic) NSMutableArray * trafficSegments;
@property (retain, nonatomic) NSMutableArray * trafficIncidents;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOTrafficTile *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setVertices:(NSData *)arg0;
- (void)setTrafficSegments:(NSMutableArray *)arg0;
- (void)setTrafficIncidents:(NSMutableArray *)arg0;
- (void)addTrafficSegment:(GEOVoltaireRasterTileTrafficSegment *)arg0;
- (void)addTrafficIncident:(GEOTrafficIncident *)arg0;
- (unsigned int)trafficSegmentsCount;
- (void)clearTrafficSegments;
- (NSObject *)trafficSegmentAtIndex:(unsigned int)arg0;
- (unsigned int)trafficIncidentsCount;
- (void)clearTrafficIncidents;
- (NSObject *)trafficIncidentAtIndex:(unsigned int)arg0;
- (char)hasVertices;
- (struct ? *)createUnpackedVerticesWithGutterSize:(int)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (NSMutableArray *)trafficSegments;
- (NSData *)vertices;
- (NSMutableArray *)trafficIncidents;

@end
