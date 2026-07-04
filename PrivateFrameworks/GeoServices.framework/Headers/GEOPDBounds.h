/* Runtime dump - GEOPDBounds
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDBounds : PBCodable <NSCopying>
{
    GEOMapRegion * _displayMapRegion;
    GEOMapRegion * _mapRegion;
}

@property (readonly, nonatomic) char hasMapRegion;
@property (retain, nonatomic) GEOMapRegion * mapRegion;
@property (readonly, nonatomic) char hasDisplayMapRegion;
@property (retain, nonatomic) GEOMapRegion * displayMapRegion;

+ (NSData *)boundsInfoForPlaceData:(NSData *)arg0;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOPDBounds *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (char)hasMapRegion;
- (void)setDisplayMapRegion:(GEOMapRegion *)arg0;
- (char)hasDisplayMapRegion;
- (GEOMapRegion *)displayMapRegion;
- (GEOMapRegion *)mapRegion;
- (void)setMapRegion:(GEOMapRegion *)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
