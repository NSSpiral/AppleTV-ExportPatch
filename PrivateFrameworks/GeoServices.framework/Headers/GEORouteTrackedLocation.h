/* Runtime dump - GEORouteTrackedLocation
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORouteTrackedLocation : NSObject
{
    GEOComposedRoute * _route;
    GEORouteMatch * _routeMatch;
    GEOLocation * _rawLocation;
    NSDate * _lastTimeInTunnel;
    struct PolylineCoordinate _lastGoodMatchCoordinate;
    struct PolylineCoordinate _newStepLastRouteCoord;
    struct ? _newStepLastGeoCoord;
    unsigned int _newStepProgressions;
    double _newStepDistanceTraveled;
}

@property (readonly, nonatomic) GEOComposedRoute * route;
@property (readonly, nonatomic) GEORouteMatch * routeMatch;
@property (readonly, nonatomic) GEOLocation * rawLocation;
@property (readonly, nonatomic) struct PolylineCoordinate lastGoodMatchCoordinate;
@property (retain, nonatomic) NSDate * lastTimeInTunnel;
@property (readonly, nonatomic) double timeSinceTunnel;
@property (readonly, nonatomic) unsigned int newStepProgressions;
@property (readonly, nonatomic) double newStepDistanceTraveled;
@property (readonly, nonatomic) struct PolylineCoordinate newStepLastRouteCoord;
@property (readonly, nonatomic) struct ? newStepLastGeoCoord;

- (void)dealloc;
- (NSString *)description;
- (void).cxx_construct;
- (GEORouteTrackedLocation *)initWithRoute:(GEOComposedRoute *)arg0;
- (void)setLastTimeInTunnel:(NSDate *)arg0;
- (void)updateWithRouteMatch:(GEORouteMatch *)arg0;
- (double)timeSinceTunnel;
- (void)forceGoodRouteMatch;
- (void)updateWithRouteMatch:(GEORouteMatch *)arg0 rawLocation:(GEOLocation *)arg1 newStepProgressions:(unsigned int)arg2 newStepDistanceTraveled:(double)arg3 newStepLastRouteCoord:(struct PolylineCoordinate)arg4 newStepLastGeoCoord:(struct ?)arg5;
- (void)updateWithProjectedRouteMatch:(GEORouteMatch *)arg0;
- (GEOLocation *)rawLocation;
- (struct PolylineCoordinate)lastGoodMatchCoordinate;
- (NSDate *)lastTimeInTunnel;
- (unsigned int)newStepProgressions;
- (double)newStepDistanceTraveled;
- (struct ?)newStepLastGeoCoord;
- (struct PolylineCoordinate)newStepLastRouteCoord;
- (GEOComposedRoute *)route;
- (GEORouteMatch *)routeMatch;

@end
