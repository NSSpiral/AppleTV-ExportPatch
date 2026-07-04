/* Runtime dump - GEORegionalResourceTileData
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORegionalResourceTileData : PBCodable <NSCopying>
{
    NSMutableArray * _attributions;
    NSMutableArray * _icons;
}

@property (retain, nonatomic) NSMutableArray * icons;
@property (retain, nonatomic) NSMutableArray * attributions;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEORegionalResourceTileData *)copyWithZone:(struct _NSZone *)arg0;
- (NSMutableArray *)icons;
- (NSDictionary *)dictionaryRepresentation;
- (void)setIcons:(NSMutableArray *)arg0;
- (void)addAttribution:(GEOMapItemPhotosAttribution *)arg0;
- (void)clearAttributions;
- (NSObject *)attributionAtIndex:(unsigned int)arg0;
- (void)addIcon:(UIImage *)arg0;
- (NSObject *)iconAtIndex:(unsigned int)arg0;
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
