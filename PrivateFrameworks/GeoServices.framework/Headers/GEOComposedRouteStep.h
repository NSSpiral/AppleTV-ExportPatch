/* Runtime dump - GEOComposedRouteStep
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOComposedRouteStep : NSObject
{
    GEOComposedRoute * _composedRoute;
    GEOStep * _geoStep;
    unsigned int _stepIndex;
    struct _NSRange _pointRange;
    struct _NSRange _maneuverPointRange;
    int _routeLegType;
}

@property (nonatomic) GEOComposedRoute * composedRoute;
@property (readonly, nonatomic) GEOComposedRouteStep * previousStep;
@property (readonly, nonatomic) GEOComposedRouteStep * nextStep;
@property (readonly, nonatomic) int routeLegType;
@property (readonly, nonatomic) int transportType;
@property (readonly, nonatomic) struct _NSRange pointRange;
@property (readonly, nonatomic) unsigned int startPointIndex;
@property (readonly, nonatomic) unsigned int endPointIndex;
@property (readonly, nonatomic) unsigned int pointCount;
@property (readonly, nonatomic) struct _NSRange maneuverPointRange;
@property (readonly, nonatomic) unsigned int maneuverStartPointIndex;
@property (readonly, nonatomic) unsigned int maneuverEndPointIndex;
@property (readonly, nonatomic) unsigned int stepIndex;
@property (readonly, nonatomic) char isUncertainArrival;
@property (readonly, nonatomic) struct ? startGeoCoordinate;
@property (readonly, nonatomic) struct ? endGeoCoordinate;
@property (readonly, nonatomic) GEOStep * geoStep;
@property (readonly, nonatomic) char hasDuration;
@property (readonly, nonatomic) unsigned int duration;
@property (readonly, nonatomic) unsigned int distance;

- (void)dealloc;
- (NSString *)description;
- (unsigned int)duration;
- (unsigned int)stepIndex;
- (unsigned int)maneuverEndPointIndex;
- (unsigned int)maneuverStartPointIndex;
- (GEOComposedRouteStep *)initWithComposedRoute:(GEOComposedRoute *)arg0 GEOStep:(NSObject *)arg1 routeLegType:(int)arg2 stepIndex:(unsigned int)arg3 pointRange:(struct _NSRange)arg4 maneuverPointRange:(struct _NSRange)arg5;
- (int)routeLegType;
- (void)setComposedRoute:(GEOComposedRoute *)arg0;
- (struct _NSRange)pointRange;
- (GEOComposedRouteStep *)initWithComposedRoute:(GEOComposedRoute *)arg0 routeLegType:(int)arg1 stepIndex:(unsigned int)arg2 pointRange:(struct _NSRange)arg3;
- (char)isUncertainArrival;
- (struct ?)startGeoCoordinate;
- (struct ?)endGeoCoordinate;
- (NSObject *)getPreviousStep;
- (NSObject *)getNextStep;
- (id)firstNameOrBranch;
- (struct _NSRange)maneuverPointRange;
- (char)hasDuration;
- (unsigned int)distance;
- (unsigned int)startPointIndex;
- (unsigned int)pointCount;
- (GEOComposedRoute *)composedRoute;
- (unsigned int)endPointIndex;
- (int)transportType;
- (GEOStep *)geoStep;

@end
