/* Runtime dump - GEOHours
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOHours : PBCodable <NSCopying>
{
    struct ? _days;
    NSMutableArray * _timeRanges;
}

@property (readonly, nonatomic) unsigned int daysCount;
@property (readonly, nonatomic) int * days;
@property (retain, nonatomic) NSMutableArray * timeRanges;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOHours *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (int *)days;
- (unsigned int)daysCount;
- (void)setDays:(int *)arg0 count:(unsigned int)arg1;
- (NSMutableArray *)timeRanges;
- (unsigned int)timeRangesCount;
- (void)addTimeRange:(NSObject *)arg0;
- (GEOHours *)initWithPlaceDataHours:(id)arg0;
- (void)clearTimeRanges;
- (void)clearDays;
- (int)dayAtIndex:(unsigned int)arg0;
- (void)addDay:(int)arg0;
- (NSObject *)timeRangeAtIndex:(unsigned int)arg0;
- (void)setTimeRanges:(NSMutableArray *)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
