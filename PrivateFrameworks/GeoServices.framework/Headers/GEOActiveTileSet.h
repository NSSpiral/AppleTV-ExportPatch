/* Runtime dump - GEOActiveTileSet
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOActiveTileSet : PBCodable <NSCopying>
{
    struct ? * _availableTiles;
    unsigned int _availableTilesCount;
    unsigned int _availableTilesSpace;
    NSString * _baseURL;
    NSString * _localizationURL;
    NSString * _multiTileURL;
    int _scale;
    NSMutableArray * _sentinelTiles;
    int _size;
    int _style;
    NSMutableArray * _supportedLanguages;
    unsigned int _timeToLiveSeconds;
    int _updateBehavior;
    unsigned int _version;
    char _multiTileURLUsesStatusCodes;
    struct ? _has;
}

@property (readonly, nonatomic) char hasBaseURL;
@property (retain, nonatomic) NSString * baseURL;
@property (readonly, nonatomic) char hasMultiTileURL;
@property (retain, nonatomic) NSString * multiTileURL;
@property (nonatomic) int style;
@property (nonatomic) int scale;
@property (nonatomic) int size;
@property (nonatomic) unsigned int version;
@property (nonatomic) char hasTimeToLiveSeconds;
@property (nonatomic) unsigned int timeToLiveSeconds;
@property (readonly, nonatomic) unsigned int availableTilesCount;
@property (readonly, nonatomic) struct ? * availableTiles;
@property (retain, nonatomic) NSMutableArray * sentinelTiles;
@property (readonly, nonatomic) char hasLocalizationURL;
@property (retain, nonatomic) NSString * localizationURL;
@property (retain, nonatomic) NSMutableArray * supportedLanguages;
@property (nonatomic) char hasMultiTileURLUsesStatusCodes;
@property (nonatomic) char multiTileURLUsesStatusCodes;
@property (nonatomic) char hasUpdateBehavior;
@property (nonatomic) int updateBehavior;

- (void)dealloc;
- (int)size;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (int)scale;
- (GEOActiveTileSet *)copyWithZone:(struct _NSZone *)arg0;
- (int)style;
- (void)setSize:(int)arg0;
- (void)setScale:(int)arg0;
- (void)setStyle:(int)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (NSString *)baseURL;
- (void)setVersion:(unsigned int)arg0;
- (unsigned int)version;
- (void)setBaseURL:(NSString *)arg0;
- (void)setMultiTileURL:(NSString *)arg0;
- (void)setLocalizationURL:(NSString *)arg0;
- (void)setSupportedLanguages:(NSMutableArray *)arg0;
- (void)addSupportedLanguage:(NSString *)arg0;
- (unsigned int)supportedLanguagesCount;
- (void)clearSupportedLanguages;
- (NSObject *)supportedLanguageAtIndex:(unsigned int)arg0;
- (char)hasBaseURL;
- (char)hasMultiTileURL;
- (char)hasLocalizationURL;
- (void)setMultiTileURLUsesStatusCodes:(char)arg0;
- (void)setHasMultiTileURLUsesStatusCodes:(char)arg0;
- (char)hasMultiTileURLUsesStatusCodes;
- (int)updateBehavior;
- (void)setUpdateBehavior:(int)arg0;
- (void)setHasUpdateBehavior:(char)arg0;
- (char)hasUpdateBehavior;
- (NSString *)multiTileURL;
- (NSString *)localizationURL;
- (NSMutableArray *)supportedLanguages;
- (char)multiTileURLUsesStatusCodes;
- (void)clearAvailableTiles;
- (unsigned int)availableTilesCount;
- (struct ?)availableTilesAtIndex:(unsigned int)arg0;
- (void)addAvailableTiles:(struct ?)arg0;
- (struct ? *)availableTiles;
- (void)setAvailableTiles:(struct ? *)arg0 count:(unsigned int)arg1;
- (void)setTimeToLiveSeconds:(unsigned int)arg0;
- (void)setHasTimeToLiveSeconds:(char)arg0;
- (char)hasTimeToLiveSeconds;
- (NSLocale *)_bestLanguageWithOverrideLocale:(char)arg0;
- (void)_resetBestLanguage;
- (NSMutableArray *)sentinelTiles;
- (void)addSentinelTile:(GEOSentinelTile *)arg0;
- (void)setSentinelTiles:(NSMutableArray *)arg0;
- (unsigned int)sentinelTilesCount;
- (void)clearSentinelTiles;
- (NSObject *)sentinelTileAtIndex:(unsigned int)arg0;
- (char)isAvailableForTileKey:(struct _GEOTileKey *)arg0;
- (unsigned int)maximumZoomLevelInRect:(struct ?)arg0;
- (char)isEquivalentTileSet:(NSSet *)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (NSObject *)dataForGenericTileType:(int)arg0 tileGroupIdentifier:(unsigned int)arg1;
- (unsigned int)minimumZoomLevelInRect:(struct ?)arg0;
- (unsigned int)timeToLiveSeconds;
- (unsigned int)largestZoomLevelLEQ:(unsigned int)arg0 inRect:(struct ?)arg1;

@end
