/* Runtime dump - GEOVLaneCharacteristic
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOVLaneCharacteristic : PBCodable <NSCopying>
{
    NSMutableArray * _laneDirections;
    NSMutableArray * _laneDividers;
    NSMutableArray * _laneTypes;
    unsigned int _roadLaneCount;
    struct ? _has;
}

@property (nonatomic) char hasRoadLaneCount;
@property (nonatomic) unsigned int roadLaneCount;
@property (retain, nonatomic) NSMutableArray * laneDividers;
@property (retain, nonatomic) NSMutableArray * laneDirections;
@property (retain, nonatomic) NSMutableArray * laneTypes;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOVLaneCharacteristic *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setLaneDividers:(NSMutableArray *)arg0;
- (void)setLaneDirections:(NSMutableArray *)arg0;
- (void)setLaneTypes:(NSMutableArray *)arg0;
- (void)addLaneDivider:(id)arg0;
- (void)addLaneDirection:(id)arg0;
- (void)addLaneType:(NSObject *)arg0;
- (unsigned int)laneDividersCount;
- (void)clearLaneDividers;
- (NSObject *)laneDividerAtIndex:(unsigned int)arg0;
- (unsigned int)laneDirectionsCount;
- (void)clearLaneDirections;
- (NSObject *)laneDirectionAtIndex:(unsigned int)arg0;
- (unsigned int)laneTypesCount;
- (void)clearLaneTypes;
- (NSObject *)laneTypeAtIndex:(unsigned int)arg0;
- (void)setRoadLaneCount:(unsigned int)arg0;
- (void)setHasRoadLaneCount:(char)arg0;
- (char)hasRoadLaneCount;
- (unsigned int)roadLaneCount;
- (NSMutableArray *)laneDividers;
- (NSMutableArray *)laneDirections;
- (NSMutableArray *)laneTypes;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
