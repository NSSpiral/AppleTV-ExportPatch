/* Runtime dump - GEOCompanionRouteStatus
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOCompanionRouteStatus : PBCodable <NSCopying>
{
    double _timestamp;
    unsigned int _distanceRemainingOnRoute;
    unsigned int _distanceToManeuver;
    unsigned int _distanceToRoute;
    int _feedbackType;
    GEOLocation * _location;
    unsigned int _remainingTime;
    NSData * _routeID;
    unsigned int _routeLocationIndex;
    float _routeLocationOffset;
    GEOLatLng * _routeMatchCoordinate;
    unsigned int _stepID;
    struct ? _has;
}

@property (readonly, nonatomic) char isPreviewingNavigation;
@property (readonly, nonatomic) char isNavigating;
@property (readonly, nonatomic) char hasEffectiveStepID;
@property (readonly, nonatomic) unsigned int effectiveStepID;
@property (readonly, nonatomic) char hasEffectiveDistanceToManeuver;
@property (readonly, nonatomic) unsigned int effectiveDistanceToManeuver;
@property (nonatomic) char hasFeedbackType;
@property (nonatomic) int feedbackType;
@property (nonatomic) char hasStepID;
@property (nonatomic) unsigned int stepID;
@property (nonatomic) char hasDistanceToManeuver;
@property (nonatomic) unsigned int distanceToManeuver;
@property (nonatomic) char hasDistanceToRoute;
@property (nonatomic) unsigned int distanceToRoute;
@property (nonatomic) char hasDistanceRemainingOnRoute;
@property (nonatomic) unsigned int distanceRemainingOnRoute;
@property (nonatomic) char hasRemainingTime;
@property (nonatomic) unsigned int remainingTime;
@property (readonly, nonatomic) char hasLocation;
@property (retain, nonatomic) GEOLocation * location;
@property (nonatomic) char hasRouteLocationIndex;
@property (nonatomic) unsigned int routeLocationIndex;
@property (nonatomic) char hasRouteLocationOffset;
@property (nonatomic) float routeLocationOffset;
@property (nonatomic) char hasTimestamp;
@property (nonatomic) double timestamp;
@property (readonly, nonatomic) char hasRouteMatchCoordinate;
@property (retain, nonatomic) GEOLatLng * routeMatchCoordinate;
@property (readonly, nonatomic) char hasRouteID;
@property (retain, nonatomic) NSData * routeID;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (double)timestamp;
- (void)setTimestamp:(double)arg0;
- (GEOCompanionRouteStatus *)copyWithZone:(struct _NSZone *)arg0;
- (GEOLocation *)location;
- (NSDictionary *)dictionaryRepresentation;
- (char)hasTimestamp;
- (void)setRouteID:(NSData *)arg0;
- (char)hasRouteID;
- (NSData *)routeID;
- (char)hasFeedbackType;
- (void)setRemainingTime:(unsigned int)arg0;
- (unsigned int)distanceToRoute;
- (unsigned int)distanceRemainingOnRoute;
- (unsigned int)remainingTime;
- (unsigned int)stepID;
- (void)setDistanceToRoute:(unsigned int)arg0;
- (void)setDistanceRemainingOnRoute:(unsigned int)arg0;
- (char)isNavigating;
- (GEOCompanionRouteStatus *)initWithRoute:(GEOComposedRoute *)arg0 routeID:(NSData *)arg1;
- (void)updateWithRoute:(id)arg0 routeID:(NSData *)arg1;
- (void)setStepID:(unsigned int)arg0;
- (void)setRouteLocationIndex:(unsigned int)arg0;
- (void)setRouteLocationOffset:(float)arg0;
- (void)setRouteMatchCoordinate:(GEOLatLng *)arg0;
- (void)setDistanceToManeuver:(unsigned int)arg0;
- (void)updateFeedbackWithNavigationState:(int)arg0 locationUnreliable:(char)arg1 announcementStage:(unsigned int)arg2 nextAnnouncementStage:(unsigned int)arg3 nextAnnouncementTime:(double)arg4;
- (void)setHasTimestamp:(char)arg0;
- (void)setHasStepID:(char)arg0;
- (char)hasStepID;
- (void)setFeedbackType:(int)arg0;
- (void)setHasFeedbackType:(char)arg0;
- (int)feedbackType;
- (void)setHasDistanceToManeuver:(char)arg0;
- (void)setHasDistanceToRoute:(char)arg0;
- (char)hasDistanceToRoute;
- (char)hasDistanceToManeuver;
- (unsigned int)distanceToManeuver;
- (GEOCompanionRouteStatus *)initWithRouteID:(NSData *)arg0;
- (char)isPreviewingNavigation;
- (char)hasEffectiveStepID;
- (unsigned int)effectiveStepID;
- (char)hasEffectiveDistanceToManeuver;
- (unsigned int)effectiveDistanceToManeuver;
- (char)hasRouteLocationIndex;
- (char)hasRouteLocationOffset;
- (unsigned int)routeLocationIndex;
- (float)routeLocationOffset;
- (void)setHasDistanceRemainingOnRoute:(char)arg0;
- (char)hasDistanceRemainingOnRoute;
- (void)setHasRemainingTime:(char)arg0;
- (char)hasRemainingTime;
- (void)setHasRouteLocationIndex:(char)arg0;
- (void)setHasRouteLocationOffset:(char)arg0;
- (char)hasRouteMatchCoordinate;
- (GEOLatLng *)routeMatchCoordinate;
- (void)setLocation:(GEOLocation *)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (char)hasLocation;

@end
