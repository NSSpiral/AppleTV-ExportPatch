/* Runtime dump - GEOTileSetVersion
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTileSetVersion : PBCodable <NSCopying>
{
    struct ? * _availableTiles;
    unsigned int _availableTilesCount;
    unsigned int _availableTilesSpace;
    struct ? * _genericTiles;
    unsigned int _genericTilesCount;
    unsigned int _genericTilesSpace;
    unsigned int _identifier;
    unsigned int _supportedLanguagesVersion;
    unsigned int _timeToLiveSeconds;
    struct ? _has;
}

@property (nonatomic) unsigned int identifier;
@property (readonly, nonatomic) unsigned int availableTilesCount;
@property (readonly, nonatomic) struct ? * availableTiles;
@property (nonatomic) char hasTimeToLiveSeconds;
@property (nonatomic) unsigned int timeToLiveSeconds;
@property (readonly, nonatomic) unsigned int genericTilesCount;
@property (readonly, nonatomic) struct ? * genericTiles;
@property (nonatomic) char hasSupportedLanguagesVersion;
@property (nonatomic) unsigned int supportedLanguagesVersion;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (unsigned int)identifier;
- (GEOTileSetVersion *)copyWithZone:(struct _NSZone *)arg0;
- (void)setIdentifier:(unsigned int)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)clearAvailableTiles;
- (void)clearGenericTiles;
- (unsigned int)availableTilesCount;
- (struct ?)availableTilesAtIndex:(unsigned int)arg0;
- (void)addAvailableTiles:(struct ?)arg0;
- (unsigned int)genericTilesCount;
- (struct ?)genericTileAtIndex:(SEL)arg0;
- (void)addGenericTile:(struct ?)arg0;
- (struct ? *)availableTiles;
- (void)setAvailableTiles:(struct ? *)arg0 count:(unsigned int)arg1;
- (void)setTimeToLiveSeconds:(unsigned int)arg0;
- (void)setHasTimeToLiveSeconds:(char)arg0;
- (char)hasTimeToLiveSeconds;
- (struct ? *)genericTiles;
- (void)setGenericTiles:(struct ? *)arg0 count:(NSObject *)arg1;
- (void)setSupportedLanguagesVersion:(unsigned int)arg0;
- (void)setHasSupportedLanguagesVersion:(char)arg0;
- (char)hasSupportedLanguagesVersion;
- (unsigned int)supportedLanguagesVersion;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (unsigned int)timeToLiveSeconds;

@end
