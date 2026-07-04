/* Runtime dump - GEOPDETA
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDETA : PBCodable <NSCopying>
{
    unsigned int _distance;
    unsigned int _time;
    int _transportType;
    struct ? _has;
}

@property (nonatomic) char hasTime;
@property (nonatomic) unsigned int time;
@property (nonatomic) char hasDistance;
@property (nonatomic) unsigned int distance;
@property (nonatomic) char hasTransportType;
@property (nonatomic) int transportType;

+ (NSData *)etaForPlaceData:(NSData *)arg0 transportType:(int)arg1;
+ (int)recommendedTransportTypeForPlaceData:(NSData *)arg0;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOPDETA *)copyWithZone:(struct _NSZone *)arg0;
- (void)setTime:(unsigned int)arg0;
- (unsigned int)time;
- (NSDictionary *)dictionaryRepresentation;
- (void)setHasTime:(char)arg0;
- (char)hasTime;
- (void)setDistance:(unsigned int)arg0;
- (void)setHasDistance:(char)arg0;
- (char)hasDistance;
- (char)hasTransportType;
- (void)setHasTransportType:(char)arg0;
- (void)setTransportType:(int)arg0;
- (unsigned int)distance;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (int)transportType;

@end
