/* Runtime dump - GEORegionalResourceRegion
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORegionalResourceRegion : PBCodable <NSCopying>
{
    struct ? * _tileRanges;
    unsigned int _tileRangesCount;
    unsigned int _tileRangesSpace;
    NSMutableArray * _attributions;
    NSMutableArray * _iconChecksums;
    NSMutableArray * _icons;
}

@property (readonly, nonatomic) unsigned int tileRangesCount;
@property (readonly, nonatomic) struct ? * tileRanges;
@property (retain, nonatomic) NSMutableArray * icons;
@property (retain, nonatomic) NSMutableArray * attributions;
@property (retain, nonatomic) NSMutableArray * iconChecksums;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEORegionalResourceRegion *)copyWithZone:(struct _NSZone *)arg0;
- (NSMutableArray *)icons;
- (NSDictionary *)dictionaryRepresentation;
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
- (void)clearTileRanges;
- (void)addTileRange:(struct ?)arg0;
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
