/* Runtime dump - GEOMapItemRoutineAttributes
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapItemRoutineAttributes : PBCodable <NSCopying>
{
    double _eventDate;
    NSString * _eventName;
    int _loiType;
    char _isEventAllDay;
    struct ? _has;
}

@property (nonatomic) char hasLoiType;
@property (nonatomic) int loiType;
@property (readonly, nonatomic) char hasEventName;
@property (retain, nonatomic) NSString * eventName;
@property (nonatomic) char hasEventDate;
@property (nonatomic) double eventDate;
@property (nonatomic) char hasIsEventAllDay;
@property (nonatomic) char isEventAllDay;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOMapItemRoutineAttributes *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (NSString *)eventName;
- (double)eventDate;
- (char)isEventAllDay;
- (int)loiType;
- (void)setEventName:(NSString *)arg0;
- (void)setLoiType:(int)arg0;
- (void)setHasLoiType:(char)arg0;
- (char)hasLoiType;
- (char)hasEventName;
- (void)setEventDate:(double)arg0;
- (void)setHasEventDate:(char)arg0;
- (char)hasEventDate;
- (void)setIsEventAllDay:(char)arg0;
- (void)setHasIsEventAllDay:(char)arg0;
- (char)hasIsEventAllDay;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
