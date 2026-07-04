/* Runtime dump - GEOPDViewportInfo
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDViewportInfo : PBCodable <NSCopying>
{
    int _mapMode;
    GEOMapRegion * _mapRegion;
    unsigned int _timeSinceMapViewportChanged;
    struct ? _has;
}

@property (readonly, nonatomic) char hasMapRegion;
@property (retain, nonatomic) GEOMapRegion * mapRegion;
@property (nonatomic) char hasTimeSinceMapViewportChanged;
@property (nonatomic) unsigned int timeSinceMapViewportChanged;
@property (nonatomic) char hasMapMode;
@property (nonatomic) int mapMode;

+ (NSArray *)viewportInfoForTraits:(NSArray *)arg0;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOPDViewportInfo *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (GEOPDViewportInfo *)initWithTraits:(NSArray *)arg0;
- (char)hasMapRegion;
- (void)setTimeSinceMapViewportChanged:(unsigned int)arg0;
- (void)setHasTimeSinceMapViewportChanged:(char)arg0;
- (char)hasTimeSinceMapViewportChanged;
- (unsigned int)timeSinceMapViewportChanged;
- (void)setHasMapMode:(char)arg0;
- (char)hasMapMode;
- (GEOMapRegion *)mapRegion;
- (void)setMapRegion:(GEOMapRegion *)arg0;
- (void)setMapMode:(int)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (int)mapMode;

@end
