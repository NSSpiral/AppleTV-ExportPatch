/* Runtime dump - GEORPVisibleTileSet
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPVisibleTileSet : PBCodable <NSCopying>
{
    struct ? * _tileKeys;
    unsigned int _tileKeysCount;
    unsigned int _tileKeysSpace;
    unsigned int _identifier;
    int _style;
    struct ? _has;
}

@property (nonatomic) char hasStyle;
@property (nonatomic) int style;
@property (nonatomic) char hasIdentifier;
@property (nonatomic) unsigned int identifier;
@property (readonly, nonatomic) unsigned int tileKeysCount;
@property (readonly, nonatomic) struct ? * tileKeys;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (unsigned int)identifier;
- (GEORPVisibleTileSet *)copyWithZone:(struct _NSZone *)arg0;
- (int)style;
- (void)setIdentifier:(unsigned int)arg0;
- (void)setStyle:(int)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (char)hasIdentifier;
- (void)clearTileKeys;
- (void)setHasIdentifier:(char)arg0;
- (struct ? *)tileKeys;
- (void)setTileKeys:(struct ? *)arg0 count:(NSObject *)arg1;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (unsigned int)tileKeysCount;
- (struct ?)tileKeyAtIndex:(SEL)arg0;
- (void)addTileKey:(struct ?)arg0;
- (void)setHasStyle:(char)arg0;
- (char)hasStyle;

@end
