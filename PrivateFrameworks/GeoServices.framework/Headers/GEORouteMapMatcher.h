/* Runtime dump - GEORouteMapMatcher
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORouteMapMatcher : NSObject
{
    GEOComposedRoute * _route;
}

@property (readonly, nonatomic) GEOComposedRoute * route;

- (GEORouteMapMatcher *)initWithRoute:(GEOComposedRoute *)arg0;
- (NSObject *)matchToRouteWithLocation:(NSObject *)arg0 trackedLocation:(NSObject *)arg1 onDate:(NSDate *)arg2 maxDistance:(double)arg3;
- (char)isLocationCoordinate:(struct ?)arg0 withinDistance:(double)arg1 alongRoute:(double)arg2;
- (char)_clampSegment:(struct PolylineCoordinate *)arg0 endCoord:(struct PolylineCoordinate *)arg1 outSegmentLength:(double *)arg2 firstAllowedMatch:(struct PolylineCoordinate)arg3 maxDistance:(double)arg4;
- (void)_closestPointFromCoordinate:(struct ? *)arg0 toSegmentStart:(struct ?)arg1 toSegmentEnd:(struct PolylineCoordinate *)arg2 outRouteCoordinate:(struct PolylineCoordinate)arg3 outLocationCoordinate:(struct PolylineCoordinate *)arg4 outDistanceFromSegment:(struct PolylineCoordinate)arg5;
- (double)_closestDistanceFromCoordinate:(struct ?)arg0 alongRoute:(double)arg1;
- (struct ?)_locationCoordinateFromRouteCoordinate:(struct PolylineCoordinate *)arg0;
- (void)_enumerateRouteSegmentsNearLocation:(NSObject *)arg0 withHandler:(id /* block */)arg1;
- (double)_modifiedHorizontalAccuracy:(double)arg0 routeIndex:(unsigned int)arg1;
- (GEOComposedRoute *)route;

@end
