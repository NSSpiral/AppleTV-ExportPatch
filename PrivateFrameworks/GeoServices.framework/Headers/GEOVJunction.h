/* Runtime dump - GEOVJunction
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOVJunction : PBCodable <NSCopying>
{
    NSMutableArray * _connectingRoads;
    NSMutableArray * _laneConnections;
}

@property (retain, nonatomic) NSMutableArray * connectingRoads;
@property (retain, nonatomic) NSMutableArray * laneConnections;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOVJunction *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (NSMutableArray *)laneConnections;
- (unsigned int)laneConnectionsCount;
- (void)setConnectingRoads:(NSMutableArray *)arg0;
- (void)setLaneConnections:(NSMutableArray *)arg0;
- (void)addConnectingRoad:(id)arg0;
- (void)addLaneConnections:(NSArray *)arg0;
- (unsigned int)connectingRoadsCount;
- (void)clearConnectingRoads;
- (NSObject *)connectingRoadAtIndex:(unsigned int)arg0;
- (void)clearLaneConnections;
- (NSObject *)laneConnectionsAtIndex:(unsigned int)arg0;
- (NSMutableArray *)connectingRoads;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
