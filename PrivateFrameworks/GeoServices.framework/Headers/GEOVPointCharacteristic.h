/* Runtime dump - GEOVPointCharacteristic
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOVPointCharacteristic : PBCodable <NSCopying>
{
    GEOVLaneCharacteristic * _laneCharacteristic;
    int _roadLaneCount;
    int _roadOffset;
    int _sectionIndex;
    int _vertexIndex;
    int _zLevel;
    char _brunnelEntry;
    char _castShadow;
    char _cropped;
    char _shouldDrawLanes;
    struct ? _has;
}

@property (nonatomic) char hasSectionIndex;
@property (nonatomic) int sectionIndex;
@property (nonatomic) char hasVertexIndex;
@property (nonatomic) int vertexIndex;
@property (nonatomic) char hasRoadLaneCount;
@property (nonatomic) int roadLaneCount;
@property (nonatomic) char hasRoadOffset;
@property (nonatomic) int roadOffset;
@property (nonatomic) char hasZLevel;
@property (nonatomic) int zLevel;
@property (nonatomic) char hasCropped;
@property (nonatomic) char cropped;
@property (readonly, nonatomic) char hasLaneCharacteristic;
@property (retain, nonatomic) GEOVLaneCharacteristic * laneCharacteristic;
@property (nonatomic) char hasShouldDrawLanes;
@property (nonatomic) char shouldDrawLanes;
@property (nonatomic) char hasCastShadow;
@property (nonatomic) char castShadow;
@property (nonatomic) char hasBrunnelEntry;
@property (nonatomic) char brunnelEntry;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOVPointCharacteristic *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setRoadLaneCount:(int)arg0;
- (void)setHasRoadLaneCount:(char)arg0;
- (char)hasRoadLaneCount;
- (int)roadLaneCount;
- (void)setLaneCharacteristic:(GEOVLaneCharacteristic *)arg0;
- (void)setHasSectionIndex:(char)arg0;
- (char)hasSectionIndex;
- (void)setVertexIndex:(int)arg0;
- (void)setHasVertexIndex:(char)arg0;
- (char)hasVertexIndex;
- (void)setRoadOffset:(int)arg0;
- (void)setHasRoadOffset:(char)arg0;
- (char)hasRoadOffset;
- (void)setZLevel:(int)arg0;
- (void)setHasZLevel:(char)arg0;
- (char)hasZLevel;
- (void)setCropped:(char)arg0;
- (void)setHasCropped:(char)arg0;
- (char)hasCropped;
- (char)hasLaneCharacteristic;
- (void)setShouldDrawLanes:(char)arg0;
- (void)setHasShouldDrawLanes:(char)arg0;
- (char)hasShouldDrawLanes;
- (void)setCastShadow:(char)arg0;
- (void)setHasCastShadow:(char)arg0;
- (char)hasCastShadow;
- (void)setBrunnelEntry:(char)arg0;
- (void)setHasBrunnelEntry:(char)arg0;
- (char)hasBrunnelEntry;
- (int)vertexIndex;
- (int)roadOffset;
- (int)zLevel;
- (char)cropped;
- (GEOVLaneCharacteristic *)laneCharacteristic;
- (char)shouldDrawLanes;
- (char)castShadow;
- (char)brunnelEntry;
- (int)sectionIndex;
- (void)setSectionIndex:(int)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
