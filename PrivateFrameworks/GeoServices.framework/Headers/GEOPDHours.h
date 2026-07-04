/* Runtime dump - GEOPDHours
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDHours : PBCodable <NSCopying>
{
    struct ? _days;
    struct ? * _timeRanges;
    unsigned int _timeRangesCount;
    unsigned int _timeRangesSpace;
}

@property (readonly, nonatomic) unsigned int daysCount;
@property (readonly, nonatomic) int * days;
@property (readonly, nonatomic) unsigned int timeRangesCount;
@property (readonly, nonatomic) struct ? * timeRanges;

+ (char)operatingHoursAvailableForPlaceData:(NSData *)arg0;
+ (char)currentOperatingHoursAvailableForPlaceData:(NSData *)arg0 withTimeZone:(NSObject *)arg1;
+ (GEOPDHours *)currentOperatingHoursForPlaceData:(NSData *)arg0 withTimeZone:(NSObject *)arg1;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOPDHours *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (int *)days;
- (unsigned int)daysCount;
- (void)setDays:(int *)arg0 count:(unsigned int)arg1;
- (struct ? *)timeRanges;
- (unsigned int)timeRangesCount;
- (void)addTimeRange:(struct ?)arg0;
- (void)clearTimeRanges;
- (void)clearDays;
- (int)dayAtIndex:(unsigned int)arg0;
- (void)addDay:(int)arg0;
- (struct ?)timeRangeAtIndex:(SEL)arg0;
- (void)setTimeRanges:(struct ? *)arg0 count:(NSObject *)arg1;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
