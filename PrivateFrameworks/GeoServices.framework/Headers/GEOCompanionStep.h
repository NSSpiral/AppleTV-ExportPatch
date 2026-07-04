/* Runtime dump - GEOCompanionStep
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOCompanionStep : PBCodable <NSCopying>
{
    unsigned int _distance;
    GEOCompanionDriveStep * _driveStep;
    unsigned int _endCoordinateIndex;
    GEOCompanionFerryStep * _ferryStep;
    unsigned int _maneuverStartCoordinateIndex;
    NSString * _roadName;
    unsigned int _startCoordinateIndex;
    unsigned int _stepID;
    unsigned int _time;
    GEOCompanionWalkStep * _walkStep;
    struct ? _has;
}

@property (nonatomic) char hasStepID;
@property (nonatomic) unsigned int stepID;
@property (nonatomic) char hasDistance;
@property (nonatomic) unsigned int distance;
@property (nonatomic) char hasTime;
@property (nonatomic) unsigned int time;
@property (readonly, nonatomic) char hasRoadName;
@property (retain, nonatomic) NSString * roadName;
@property (readonly, nonatomic) char hasDriveStep;
@property (retain, nonatomic) GEOCompanionDriveStep * driveStep;
@property (readonly, nonatomic) char hasWalkStep;
@property (retain, nonatomic) GEOCompanionWalkStep * walkStep;
@property (readonly, nonatomic) char hasFerryStep;
@property (retain, nonatomic) GEOCompanionFerryStep * ferryStep;
@property (nonatomic) char hasStartCoordinateIndex;
@property (nonatomic) unsigned int startCoordinateIndex;
@property (nonatomic) char hasManeuverStartCoordinateIndex;
@property (nonatomic) unsigned int maneuverStartCoordinateIndex;
@property (nonatomic) char hasEndCoordinateIndex;
@property (nonatomic) unsigned int endCoordinateIndex;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOCompanionStep *)copyWithZone:(struct _NSZone *)arg0;
- (void)setTime:(unsigned int)arg0;
- (unsigned int)time;
- (NSDictionary *)dictionaryRepresentation;
- (void)setHasTime:(char)arg0;
- (char)hasTime;
- (unsigned int)stepID;
- (void)setStepID:(unsigned int)arg0;
- (void)setDistance:(unsigned int)arg0;
- (void)setHasDistance:(char)arg0;
- (char)hasDistance;
- (void)setHasStepID:(char)arg0;
- (char)hasStepID;
- (GEOCompanionStep *)initWithStep:(NSString *)arg0 route:(ATVRoute *)arg1;
- (void)setStartCoordinateIndex:(unsigned int)arg0;
- (void)setManeuverStartCoordinateIndex:(unsigned int)arg0;
- (void)setEndCoordinateIndex:(unsigned int)arg0;
- (void)setDriveStep:(GEOCompanionDriveStep *)arg0;
- (void)setWalkStep:(GEOCompanionWalkStep *)arg0;
- (void)setFerryStep:(GEOCompanionFerryStep *)arg0;
- (void)setRoadName:(NSString *)arg0;
- (char)hasDriveStep;
- (GEOCompanionDriveStep *)driveStep;
- (char)hasWalkStep;
- (GEOCompanionWalkStep *)walkStep;
- (unsigned int)endCoordinateIndex;
- (NSObject *)maneuverStep;
- (char)hasRoadName;
- (char)hasFerryStep;
- (void)setHasStartCoordinateIndex:(char)arg0;
- (char)hasStartCoordinateIndex;
- (void)setHasManeuverStartCoordinateIndex:(char)arg0;
- (char)hasManeuverStartCoordinateIndex;
- (void)setHasEndCoordinateIndex:(char)arg0;
- (char)hasEndCoordinateIndex;
- (GEOCompanionFerryStep *)ferryStep;
- (unsigned int)startCoordinateIndex;
- (unsigned int)maneuverStartCoordinateIndex;
- (unsigned int)distance;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (GEOStep *)geoStep;
- (NSString *)roadName;

@end
