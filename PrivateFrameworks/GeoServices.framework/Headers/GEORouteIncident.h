/* Runtime dump - GEORouteIncident
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORouteIncident : PBCodable <NSCopying>
{
    long long _endTime;
    long long _startTime;
    long long _updateTime;
    NSString * _crossStreet;
    NSString * _incidentId;
    NSString * _info;
    unsigned int _laneClosureCount;
    int _laneClosureType;
    GEOLatLng * _position;
    int _significance;
    NSString * _street;
    int _type;
    char _endTimeReliable;
    struct ? _has;
}

@property (readonly, nonatomic) char hasPosition;
@property (retain, nonatomic) GEOLatLng * position;
@property (readonly, nonatomic) char hasIncidentId;
@property (retain, nonatomic) NSString * incidentId;
@property (readonly, nonatomic) char hasInfo;
@property (retain, nonatomic) NSString * info;
@property (nonatomic) char hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) char hasStreet;
@property (retain, nonatomic) NSString * street;
@property (readonly, nonatomic) char hasCrossStreet;
@property (retain, nonatomic) NSString * crossStreet;
@property (nonatomic) char hasStartTime;
@property (nonatomic) long long startTime;
@property (nonatomic) char hasEndTime;
@property (nonatomic) long long endTime;
@property (nonatomic) char hasUpdateTime;
@property (nonatomic) long long updateTime;
@property (nonatomic) char hasLaneClosureType;
@property (nonatomic) int laneClosureType;
@property (nonatomic) char hasLaneClosureCount;
@property (nonatomic) unsigned int laneClosureCount;
@property (nonatomic) char hasEndTimeReliable;
@property (nonatomic) char endTimeReliable;
@property (nonatomic) char hasSignificance;
@property (nonatomic) int significance;

- (struct CGImage *)_mapKitImage;
- (void)setEndTime:(long long)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)setStartTime:(long long)arg0;
- (void)setType:(int)arg0;
- (int)type;
- (GEORouteIncident *)copyWithZone:(struct _NSZone *)arg0;
- (void)setPosition:(GEOLatLng *)arg0;
- (GEOLatLng *)position;
- (NSString *)info;
- (NSDictionary *)dictionaryRepresentation;
- (long long)startTime;
- (void)setInfo:(NSString *)arg0;
- (char)hasInfo;
- (void)setHasEndTime:(char)arg0;
- (void)setIncidentId:(NSString *)arg0;
- (void)setStreet:(NSString *)arg0;
- (void)setCrossStreet:(NSString *)arg0;
- (char)hasPosition;
- (char)hasIncidentId;
- (char)hasStreet;
- (char)hasCrossStreet;
- (void)setUpdateTime:(long long)arg0;
- (void)setHasUpdateTime:(char)arg0;
- (char)hasUpdateTime;
- (void)setLaneClosureType:(int)arg0;
- (void)setHasLaneClosureType:(char)arg0;
- (char)hasLaneClosureType;
- (void)setLaneClosureCount:(unsigned int)arg0;
- (void)setHasLaneClosureCount:(char)arg0;
- (char)hasLaneClosureCount;
- (void)setEndTimeReliable:(char)arg0;
- (void)setHasEndTimeReliable:(char)arg0;
- (char)hasEndTimeReliable;
- (void)setSignificance:(int)arg0;
- (void)setHasSignificance:(char)arg0;
- (char)hasSignificance;
- (char)endTimeReliable;
- (void)setHasStartTime:(char)arg0;
- (void)setHasType:(char)arg0;
- (char)hasType;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (char)hasStartTime;
- (char)hasEndTime;
- (long long)endTime;
- (int)significance;
- (int)laneClosureType;
- (unsigned int)laneClosureCount;
- (NSString *)incidentId;
- (NSString *)street;
- (NSString *)crossStreet;
- (long long)updateTime;

@end
