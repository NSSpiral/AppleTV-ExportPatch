/* Runtime dump - GEOETAResultByType
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOETAResultByType : PBCodable <NSCopying>
{
    unsigned int _distance;
    unsigned int _historicTravelTime;
    int _status;
    int _transportType;
    unsigned int _travelTimeBestEstimate;
    struct ? _has;
}

@property (nonatomic) char hasTransportType;
@property (nonatomic) int transportType;
@property (nonatomic) char hasStatus;
@property (nonatomic) int status;
@property (nonatomic) char hasTravelTimeBestEstimate;
@property (nonatomic) unsigned int travelTimeBestEstimate;
@property (nonatomic) char hasHistoricTravelTime;
@property (nonatomic) unsigned int historicTravelTime;
@property (nonatomic) char hasDistance;
@property (nonatomic) unsigned int distance;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOETAResultByType *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (int)status;
- (void)setStatus:(int)arg0;
- (void)setHasStatus:(char)arg0;
- (char)hasStatus;
- (void)setDistance:(unsigned int)arg0;
- (void)setHasDistance:(char)arg0;
- (char)hasDistance;
- (char)hasTransportType;
- (void)setHasTransportType:(char)arg0;
- (void)setHistoricTravelTime:(unsigned int)arg0;
- (void)setHasHistoricTravelTime:(char)arg0;
- (char)hasHistoricTravelTime;
- (unsigned int)historicTravelTime;
- (void)setTravelTimeBestEstimate:(unsigned int)arg0;
- (void)setHasTravelTimeBestEstimate:(char)arg0;
- (char)hasTravelTimeBestEstimate;
- (unsigned int)travelTimeBestEstimate;
- (void)setTransportType:(int)arg0;
- (unsigned int)distance;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (int)transportType;

@end
