/* Runtime dump - VKPuckAnimatorLocationProjector
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPuckAnimatorLocationProjector : NSObject
{
    GEORouteMatch * _routeMatch;
    GEORouteMatch * _projectedRouteMatch;
    struct VKPoint _projectedPosition;
    double _projectedCourse;
}

@property (retain, nonatomic) GEORouteMatch * projectedRouteMatch;
@property (readonly, nonatomic) struct VKPoint projectedPosition;
@property (readonly, nonatomic) struct ? projectedLocation;
@property (readonly, nonatomic) double projectedCourse;
@property (readonly, nonatomic) char projectedLocationOnRoute;
@property (retain, nonatomic) GEORouteMatch * routeMatch;

- (void)dealloc;
- (VKPuckAnimatorLocationProjector *)init;
- (void)reset;
- (void).cxx_construct;
- (double)projectedCourse;
- (char)projectedLocationOnRoute;
- (void)projectFromLocation:(NSObject *)arg0 routeMatch:(GEORouteMatch *)arg1 speedMultiplier:(double)arg2;
- (struct VKPoint)projectedPosition;
- (GEORouteMatch *)routeMatch;
- (void)setRouteMatch:(GEORouteMatch *)arg0;
- (void)setProjectedRouteMatch:(GEORouteMatch *)arg0;
- (void)_updateCourseAndPositionFromRouteMatch;
- (struct ?)projectedLocation;
- (GEORouteMatch *)projectedRouteMatch;

@end
