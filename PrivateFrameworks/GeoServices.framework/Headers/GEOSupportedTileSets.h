/* Runtime dump - GEOSupportedTileSets
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSupportedTileSets : PBCodable <NSCopying>
{
    NSMutableArray * _tileSets;
}

@property (retain, nonatomic) NSMutableArray * tileSets;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOSupportedTileSets *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setTileSets:(NSMutableArray *)arg0;
- (void)addTileSet:(NSSet *)arg0;
- (unsigned int)tileSetsCount;
- (void)clearTileSets;
- (NSObject *)tileSetAtIndex:(unsigned int)arg0;
- (NSMutableArray *)tileSets;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
