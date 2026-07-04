/* Runtime dump - GEOActionComponentMapEntry
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOActionComponentMapEntry : PBCodable <NSCopying>
{
    struct ? _placeDataComponents;
    int _actionComponent;
    struct ? _has;
}

@property (nonatomic) char hasActionComponent;
@property (nonatomic) int actionComponent;
@property (readonly, nonatomic) unsigned int placeDataComponentsCount;
@property (readonly, nonatomic) int * placeDataComponents;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOActionComponentMapEntry *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (unsigned int)placeDataComponentsCount;
- (void)clearPlaceDataComponents;
- (int)placeDataComponentsAtIndex:(unsigned int)arg0;
- (void)addPlaceDataComponents:(int)arg0;
- (void)setActionComponent:(int)arg0;
- (void)setHasActionComponent:(char)arg0;
- (char)hasActionComponent;
- (int *)placeDataComponents;
- (void)setPlaceDataComponents:(int *)arg0 count:(unsigned int)arg1;
- (int)actionComponent;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
