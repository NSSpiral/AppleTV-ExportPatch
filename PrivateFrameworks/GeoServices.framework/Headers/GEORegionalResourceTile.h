/* Runtime dump - GEORegionalResourceTile
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORegionalResourceTile : PBCodable <NSCopying>
{
    NSMutableArray * _attributions;
    NSMutableArray * _childrens;
    NSMutableArray * _iconChecksums;
    NSMutableArray * _icons;
    unsigned int _x;
    unsigned int _y;
    unsigned int _z;
}

@property (nonatomic) unsigned int x;
@property (nonatomic) unsigned int y;
@property (nonatomic) unsigned int z;
@property (retain, nonatomic) NSMutableArray * childrens;
@property (retain, nonatomic) NSMutableArray * icons;
@property (retain, nonatomic) NSMutableArray * attributions;
@property (retain, nonatomic) NSMutableArray * iconChecksums;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEORegionalResourceTile *)copyWithZone:(struct _NSZone *)arg0;
- (NSMutableArray *)icons;
- (NSDictionary *)dictionaryRepresentation;
- (unsigned int)x;
- (void)setX:(unsigned int)arg0;
- (unsigned int)y;
- (void)setY:(unsigned int)arg0;
- (unsigned int)z;
- (void)setZ:(unsigned int)arg0;
- (void)setIcons:(NSMutableArray *)arg0;
- (void)addAttribution:(GEOMapItemPhotosAttribution *)arg0;
- (void)clearAttributions;
- (NSObject *)attributionAtIndex:(unsigned int)arg0;
- (void)setIconChecksums:(NSMutableArray *)arg0;
- (void)addIcon:(UIImage *)arg0;
- (void)addIconChecksum:(id)arg0;
- (NSObject *)iconAtIndex:(unsigned int)arg0;
- (unsigned int)iconChecksumsCount;
- (void)clearIconChecksums;
- (NSObject *)iconChecksumAtIndex:(unsigned int)arg0;
- (NSMutableArray *)iconChecksums;
- (char)containsTileKey:(struct _GEOTileKey *)arg0;
- (NSMutableArray *)childrens;
- (unsigned int)childrensCount;
- (void)addChildren:(NSArray *)arg0;
- (void)setChildrens:(NSMutableArray *)arg0;
- (void)clearChildrens;
- (NSObject *)childrenAtIndex:(unsigned int)arg0;
- (NSMutableArray *)attributions;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (unsigned int)iconsCount;
- (void)clearIcons;
- (unsigned int)attributionsCount;
- (void)setAttributions:(NSMutableArray *)arg0;

@end
