/* Runtime dump - GEOComposedWalkingRouteStep
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOComposedWalkingRouteStep : GEOComposedRouteStep
{
    char _isUncertainArrival;
}

- (GEOComposedWalkingRouteStep *)initWithComposedRoute:(GEOComposedRoute *)arg0 GEOStep:(NSObject *)arg1 stepIndex:(unsigned int)arg2 pointRange:(struct _NSRange)arg3 maneuverPointRange:(struct _NSRange)arg4 isUncertainArrival:(char)arg5;
- (char)isUncertainArrival;

@end
