/* Runtime dump - GEOVTile
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOVTile : PBCodable <NSCopying>
{
    NSMutableArray * _coastlines;
    GEOVConnectivity * _connectivity;
    NSMutableArray * _labelLanguages;
    NSData * _labels;
    NSMutableArray * _lines;
    int _minZ;
    NSMutableArray * _points;
    NSMutableArray * _polygons;
    unsigned int _sectionDeltaLengthBits;
    unsigned int _vertexBits;
    NSData * _vertices;
    int _zBits;
    struct ? _has;
}

@property (retain, nonatomic) NSMutableArray * lines;
@property (retain, nonatomic) NSMutableArray * polygons;
@property (retain, nonatomic) NSMutableArray * points;
@property (readonly, nonatomic) char hasLabels;
@property (retain, nonatomic) NSData * labels;
@property (readonly, nonatomic) char hasVertices;
@property (retain, nonatomic) NSData * vertices;
@property (readonly, nonatomic) char hasConnectivity;
@property (retain, nonatomic) GEOVConnectivity * connectivity;
@property (nonatomic) char hasMinZ;
@property (nonatomic) int minZ;
@property (nonatomic) char hasZBits;
@property (nonatomic) int zBits;
@property (retain, nonatomic) NSMutableArray * coastlines;
@property (retain, nonatomic) NSMutableArray * labelLanguages;
@property (nonatomic) char hasVertexBits;
@property (nonatomic) unsigned int vertexBits;
@property (nonatomic) char hasSectionDeltaLengthBits;
@property (nonatomic) unsigned int sectionDeltaLengthBits;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOVTile *)copyWithZone:(struct _NSZone *)arg0;
- (void)addPoint:(struct CGPoint)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setVertices:(NSData *)arg0;
- (char)hasVertices;
- (void)setLines:(NSMutableArray *)arg0;
- (void)setPolygons:(NSMutableArray *)arg0;
- (void)setPoints:(NSMutableArray *)arg0;
- (void)setLabels:(NSData *)arg0;
- (void)setConnectivity:(GEOVConnectivity *)arg0;
- (void)setCoastlines:(NSMutableArray *)arg0;
- (void)setLabelLanguages:(NSMutableArray *)arg0;
- (void)addPolygon:(MKPolygon *)arg0;
- (void)addCoastlines:(id)arg0;
- (void)addLabelLanguage:(NSString *)arg0;
- (void)clearLines;
- (NSObject *)lineAtIndex:(unsigned int)arg0;
- (void)clearPolygons;
- (NSObject *)polygonAtIndex:(unsigned int)arg0;
- (unsigned int)pointsCount;
- (void)clearPoints;
- (NSObject *)pointAtIndex:(unsigned int)arg0;
- (void)clearCoastlines;
- (NSObject *)coastlinesAtIndex:(unsigned int)arg0;
- (unsigned int)labelLanguagesCount;
- (void)clearLabelLanguages;
- (NSObject *)labelLanguageAtIndex:(unsigned int)arg0;
- (char)hasLabels;
- (char)hasConnectivity;
- (void)setHasMinZ:(char)arg0;
- (char)hasMinZ;
- (void)setZBits:(int)arg0;
- (void)setHasZBits:(char)arg0;
- (char)hasZBits;
- (unsigned int)vertexBits;
- (void)setVertexBits:(unsigned int)arg0;
- (void)setHasVertexBits:(char)arg0;
- (char)hasVertexBits;
- (unsigned int)sectionDeltaLengthBits;
- (void)setSectionDeltaLengthBits:(unsigned int)arg0;
- (void)setHasSectionDeltaLengthBits:(char)arg0;
- (char)hasSectionDeltaLengthBits;
- (GEOVConnectivity *)connectivity;
- (int)zBits;
- (NSMutableArray *)labelLanguages;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (int)minZ;
- (void)setMinZ:(int)arg0;
- (unsigned int)linesCount;
- (NSMutableArray *)lines;
- (unsigned int)polygonsCount;
- (NSMutableArray *)polygons;
- (unsigned int)coastlinesCount;
- (NSMutableArray *)coastlines;
- (NSMutableArray *)points;
- (NSData *)vertices;
- (void)addLine:(struct __CFString *)arg0;
- (NSData *)labels;

@end
