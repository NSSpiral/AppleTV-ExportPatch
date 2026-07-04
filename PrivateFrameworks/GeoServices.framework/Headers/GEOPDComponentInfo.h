/* Runtime dump - GEOPDComponentInfo
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDComponentInfo : PBCodable <NSCopying>
{
    unsigned int _count;
    GEOPDComponentFilter * _filter;
    unsigned int _startIndex;
    int _type;
    int _urgency;
    char _includeSource;
    struct ? _has;
}

@property (nonatomic) char hasType;
@property (nonatomic) int type;
@property (nonatomic) char hasStartIndex;
@property (nonatomic) unsigned int startIndex;
@property (nonatomic) char hasCount;
@property (nonatomic) unsigned int count;
@property (readonly, nonatomic) char hasFilter;
@property (retain, nonatomic) GEOPDComponentFilter * filter;
@property (nonatomic) char hasIncludeSource;
@property (nonatomic) char includeSource;
@property (nonatomic) char hasUrgency;
@property (nonatomic) int urgency;

- (void)dealloc;
- (unsigned int)count;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)setType:(int)arg0;
- (int)type;
- (GEOPDComponentInfo *)copyWithZone:(struct _NSZone *)arg0;
- (void)setFilter:(GEOPDComponentFilter *)arg0;
- (void)setCount:(unsigned int)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (char)hasStartIndex;
- (unsigned int)startIndex;
- (void)setStartIndex:(unsigned int)arg0;
- (void)setHasStartIndex:(char)arg0;
- (void)setHasCount:(char)arg0;
- (char)hasCount;
- (char)hasFilter;
- (void)setIncludeSource:(char)arg0;
- (void)setHasIncludeSource:(char)arg0;
- (char)hasIncludeSource;
- (void)setUrgency:(int)arg0;
- (void)setHasUrgency:(char)arg0;
- (char)hasUrgency;
- (char)includeSource;
- (GEOPDComponentInfo *)initWithType:(int)arg0 count:(unsigned int)arg1;
- (void)setHasType:(char)arg0;
- (char)hasType;
- (int)urgency;
- (GEOPDComponentFilter *)filter;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
