/* Runtime dump - VKPolylinePath
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPolylinePath : NSObject
{
    VKPolylineOverlay * _overlay;
    GEOComposedRouteSection * _section;
    GEOSnappedRoutePath * _snappedPath;
    struct Matrix<float, 2, 1> * _points;
    unsigned int _pointCount;
    char _ownsPoints;
    struct PolylineCoordinate _routeStart;
    struct PolylineCoordinate _routeEnd;
    char _trafficSpeed;
}

@property (readonly, nonatomic) struct Matrix<float, 2, 1> * points;
@property (readonly, nonatomic) unsigned int pointCount;
@property (nonatomic) struct PolylineCoordinate routeStart;
@property (nonatomic) struct PolylineCoordinate routeEnd;
@property (readonly) char hasCompletedMapMatching;
@property (readonly) char isMapMatched;
@property (readonly, nonatomic) GEOComposedRouteSection * section;
@property (readonly, nonatomic) GEOSnappedRoutePath * snappedPath;
@property (nonatomic) char trafficSpeed;

- (void)dealloc;
- (NSString *)description;
- (GEOComposedRouteSection *)section;
- (void).cxx_construct;
- (VKPolylinePath *)initWithOverlay:(VKPolylineOverlay *)arg0 section:(GEOComposedRouteSection *)arg1;
- (struct Matrix<float, 2, 1> *)points;
- (VKPolylinePath *)initWithOverlay:(VKPolylineOverlay *)arg0 section:(GEOComposedRouteSection *)arg1 routeStartIndex:(unsigned int)arg2 routeEndIndex:(unsigned int)arg3;
- (char)hasCompletedMapMatching;
- (char)isMapMatched;
- (void)setTrafficSpeed:(char)arg0;
- (void)assignTo:(id)arg0 withSegment:(struct TrafficSegment *)arg1;
- (void)setRouteStart:(struct PolylineCoordinate)arg0;
- (void)setRouteEnd:(struct PolylineCoordinate)arg0;
- (struct PolylineCoordinate)pathIndexFromRouteIndex:(struct PolylineCoordinate)arg0;
- (struct Matrix<float, 2, 1>)interpolateAt:(struct PolylineCoordinate *)arg0;
- (void)assignPoints:(struct Matrix<float, 2, 1> *)arg0 count:(unsigned int)arg1;
- (VKPolylinePath *)initWithOverlay:(VKPolylineOverlay *)arg0 snappedPath:(GEOSnappedRoutePath *)arg1;
- (void)splitTrafficSegmentationAndAddTo:(id)arg0 with:(id)arg1;
- (unsigned int)pointCount;
- (struct PolylineCoordinate)routeStart;
- (struct PolylineCoordinate)routeEnd;
- (GEOSnappedRoutePath *)snappedPath;
- (char)trafficSpeed;

@end
