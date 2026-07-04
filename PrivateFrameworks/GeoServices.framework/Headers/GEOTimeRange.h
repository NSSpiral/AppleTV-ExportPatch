/* Runtime dump - GEOTimeRange
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTimeRange : PBCodable <NSCopying>
{
    unsigned int _from;
    unsigned int _to;
    char _allDay;
    struct ? _has;
}

@property (nonatomic) char hasFrom;
@property (nonatomic) unsigned int from;
@property (nonatomic) char hasTo;
@property (nonatomic) unsigned int to;
@property (nonatomic) char hasAllDay;
@property (nonatomic) char allDay;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOTimeRange *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setFrom:(unsigned int)arg0;
- (char)hasFrom;
- (unsigned int)from;
- (void)setTo:(unsigned int)arg0;
- (void)setAllDay:(char)arg0;
- (GEOTimeRange *)initWithPlaceDataTimeRange:(struct ? *)arg0;
- (unsigned int)to;
- (char)isAdjacentToTimeRange:(NSObject *)arg0;
- (void)setHasFrom:(char)arg0;
- (void)setHasTo:(char)arg0;
- (char)hasTo;
- (void)setHasAllDay:(char)arg0;
- (char)hasAllDay;
- (char)allDay;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
