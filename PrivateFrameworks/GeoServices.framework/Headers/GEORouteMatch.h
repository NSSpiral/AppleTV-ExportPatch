/* Runtime dump - GEORouteMatch
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORouteMatch : NSObject
{
    GEOComposedRoute * _route;
    struct PolylineCoordinate _routeCoordinate;
    struct ? _locationCoordinate;
    unsigned int _stepIndex;
    double _matchedCourse;
    double _distanceFromRoute;
    double _modifiedHorizontalAccuracy;
    double _modifiedCourseAccuracy;
    unsigned int _consecutiveProgressionsOffRoute;
    double _distanceTraveledOffRoute;
    char _isGoodMatch;
    struct ? * _road;
    double _roadWidth;
    GEORouteMatch * _projectedFrom;
    NSDate * _timestamp;
}

@property (readonly, nonatomic) GEOComposedRoute * route;
@property (nonatomic) struct ? locationCoordinate;
@property (readonly, nonatomic) struct PolylineCoordinate routeCoordinate;
@property (nonatomic) unsigned int stepIndex;
@property (readonly, nonatomic) double matchedCourse;
@property (nonatomic) double distanceFromRoute;
@property (nonatomic) struct ? * road;
@property (readonly, nonatomic) double roadWidth;
@property (readonly, nonatomic) char routeMatchedToEnd;
@property (readonly, nonatomic) char projectedPastEndOfLeg;
@property (retain, nonatomic) GEORouteMatch * projectedFrom;
@property (nonatomic) char isGoodMatch;
@property (nonatomic) unsigned int consecutiveProgressionsOffRoute;
@property (nonatomic) double distanceTraveledOffRoute;
@property (nonatomic) double modifiedHorizontalAccuracy;
@property (nonatomic) double modifiedCourseAccuracy;
@property (readonly, nonatomic) NSDate * timestamp;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSDate *)timestamp;
- (void).cxx_construct;
- (unsigned int)stepIndex;
- (GEORouteMatch *)initWithRoute:(GEOComposedRoute *)arg0 routeCoordinate:(struct PolylineCoordinate)arg1 locationCoordinate:(struct ?)arg2 stepIndex:(unsigned int)arg3 matchedCourse:(double)arg4 timestamp:(NSDate *)arg5;
- (void)setRoad:(struct ? *)arg0;
- (GEORouteMatch *)projectedFrom;
- (void)setProjectedFrom:(GEORouteMatch *)arg0;
- (char)isGoodMatch;
- (void)setIsGoodMatch:(char)arg0;
- (double)modifiedHorizontalAccuracy;
- (void)setModifiedHorizontalAccuracy:(double)arg0;
- (double)modifiedCourseAccuracy;
- (void)setModifiedCourseAccuracy:(double)arg0;
- (struct ? *)road;
- (void)setLocationCoordinate:(struct ?)arg0;
- (double)distanceFromRoute;
- (unsigned int)consecutiveProgressionsOffRoute;
- (void)setConsecutiveProgressionsOffRoute:(unsigned int)arg0;
- (double)distanceTraveledOffRoute;
- (void)setDistanceTraveledOffRoute:(double)arg0;
- (char)isEqualIgnoringScore:(id)arg0;
- (void)updateOffRouteProgress:(id)arg0 minDistanceToGetOnRoute:(double)arg1;
- (double)fractionOfCurrentStepTraveled;
- (char)routeMatchedToEnd;
- (char)projectedPastEndOfLeg;
- (void)setStepIndex:(unsigned int)arg0;
- (void)setDistanceFromRoute:(double)arg0;
- (GEORouteMatch *)initWithComposedRoute:(GEOComposedRoute *)arg0 routeStatus:(GEOCompanionRouteStatus *)arg1;
- (NSString *)step;
- (GEOComposedRoute *)route;
- (double)roadWidth;
- (struct PolylineCoordinate)routeCoordinate;
- (struct ?)locationCoordinate;
- (double)matchedCourse;
- (char)routeMatchBehind:(id)arg0;

@end
