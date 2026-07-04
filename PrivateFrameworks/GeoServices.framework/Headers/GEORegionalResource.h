/* Runtime dump - GEORegionalResource
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORegionalResource : PBCodable <NSCopying>
{
    struct ? * _tileRanges;
    unsigned int _tileRangesCount;
    unsigned int _tileRangesSpace;
    struct ? _validSubManifestVersions;
    NSMutableArray * _attributions;
    NSMutableArray * _iconChecksums;
    NSMutableArray * _icons;
    unsigned int _x;
    unsigned int _y;
    unsigned int _z;
    struct ? _has;
}

@property (nonatomic) char hasX;
@property (nonatomic) unsigned int x;
@property (nonatomic) char hasY;
@property (nonatomic) unsigned int y;
@property (nonatomic) char hasZ;
@property (nonatomic) unsigned int z;
@property (retain, nonatomic) NSMutableArray * icons;
@property (retain, nonatomic) NSMutableArray * attributions;
@property (retain, nonatomic) NSMutableArray * iconChecksums;
@property (readonly, nonatomic) unsigned int tileRangesCount;
@property (readonly, nonatomic) struct ? * tileRanges;
@property (readonly, nonatomic) unsigned int validSubManifestVersionsCount;
@property (readonly, nonatomic) unsigned int * validSubManifestVersions;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEORegionalResource *)copyWithZone:(struct _NSZone *)arg0;
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
- (unsigned int)tileRangesCount;
- (struct ?)tileRangeAtIndex:(unsigned int)arg0;
- (struct ? *)tileRanges;
- (void)setTileRanges:(struct ? *)arg0 count:(unsigned int)arg1;
- (char)hasX;
- (char)hasY;
- (char)hasZ;
- (void)clearTileRanges;
- (void)addTileRange:(struct ?)arg0;
- (unsigned int)validSubManifestVersionsCount;
- (void)clearValidSubManifestVersions;
- (unsigned int)validSubManifestVersionAtIndex:(unsigned int)arg0;
- (void)addValidSubManifestVersion:(unsigned int)arg0;
- (void)setHasX:(char)arg0;
- (void)setHasY:(char)arg0;
- (void)setHasZ:(char)arg0;
- (unsigned int *)validSubManifestVersions;
- (void)setValidSubManifestVersions:(unsigned int *)arg0 count:(unsigned int)arg1;
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
