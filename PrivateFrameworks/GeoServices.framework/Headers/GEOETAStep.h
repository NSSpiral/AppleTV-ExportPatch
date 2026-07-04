/* Runtime dump - GEOETAStep
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOETAStep : PBCodable <NSCopying>
{
    unsigned int _distanceRemaining;
    unsigned int _expectedTime;
    unsigned int _stepID;
    GEOTimeCheckpoints * _timeCheckpoints;
    int _zilchPointIndex;
    struct ? _has;
}

@property (nonatomic) char hasDistanceRemaining;
@property (nonatomic) unsigned int distanceRemaining;
@property (nonatomic) char hasStepID;
@property (nonatomic) unsigned int stepID;
@property (nonatomic) char hasExpectedTime;
@property (nonatomic) unsigned int expectedTime;
@property (nonatomic) char hasZilchPointIndex;
@property (nonatomic) int zilchPointIndex;
@property (readonly, nonatomic) char hasTimeCheckpoints;
@property (retain, nonatomic) GEOTimeCheckpoints * timeCheckpoints;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOETAStep *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (unsigned int)expectedTime;
- (unsigned int)stepID;
- (void)setStepID:(unsigned int)arg0;
- (void)setExpectedTime:(unsigned int)arg0;
- (void)setHasExpectedTime:(char)arg0;
- (char)hasExpectedTime;
- (void)setTimeCheckpoints:(GEOTimeCheckpoints *)arg0;
- (void)setHasStepID:(char)arg0;
- (char)hasStepID;
- (char)hasTimeCheckpoints;
- (GEOTimeCheckpoints *)timeCheckpoints;
- (int)zilchPointIndex;
- (void)setZilchPointIndex:(int)arg0;
- (void)setHasZilchPointIndex:(char)arg0;
- (char)hasZilchPointIndex;
- (unsigned int)distanceRemaining;
- (void)setDistanceRemaining:(unsigned int)arg0;
- (void)setHasDistanceRemaining:(char)arg0;
- (char)hasDistanceRemaining;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
