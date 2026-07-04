/* Runtime dump - GEOComposedDrivingRouteStep
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOComposedDrivingRouteStep : GEOComposedRouteStep
{
    int _drivingSide;
}

@property (readonly, nonatomic) int drivingSide;

- (GEOComposedDrivingRouteStep *)initWithComposedRoute:(GEOComposedRoute *)arg0 GEOStep:(NSObject *)arg1 stepIndex:(unsigned int)arg2 pointRange:(struct _NSRange)arg3 maneuverPointRange:(struct _NSRange)arg4;
- (int)drivingSide;

@end
