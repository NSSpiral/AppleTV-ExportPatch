/* Runtime dump - VKCameraContext
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKCameraContext : NSObject
{
    struct ? _pointOfReference;
    double _heading;
    struct ? _pointOfFocus;
    int _style;
    int _focusStyle;
    struct ? _courseTargetLocation;
    int _courseSource;
    double _lastCameraFocusCourse;
    char _animated;
    char _applied;
    struct vector<GEOLocationCoordinate2D, std::__1::allocator<GEOLocationCoordinate2D> > _pois;
    VKPuckAnimatorLocationProjector * _locationProjector;
    double _verticalGroundspanScale;
    char _allowVerticalPanning;
}

@property (readonly, nonatomic) struct ? pointOfReference;
@property (readonly, nonatomic) double heading;
@property (readonly, nonatomic) struct ? pointOfFocus;
@property (nonatomic) int style;
@property (nonatomic) int focusStyle;
@property (nonatomic) struct ? courseTargetLocation;
@property (nonatomic) int courseSource;
@property (readonly, nonatomic) char animated;
@property (nonatomic) char applied;
@property (readonly, nonatomic) double verticalGroundspanScale;
@property (readonly, nonatomic) char allowVerticalPanning;

- (void)dealloc;
- (VKCameraContext *)init;
- (NSString *)description;
- (int)style;
- (void)setStyle:(int)arg0;
- (char)animated;
- (void).cxx_construct;
- (void).cxx_destruct;
- (void)setApplied:(char)arg0;
- (struct ?)pointOfReference;
- (int)focusStyle;
- (double)verticalGroundspanScale;
- (struct ?)pointOfFocus;
- (void)enumeratePointsOfInterestUsingBlock:(id /* block */)arg0;
- (char)applied;
- (char)allowVerticalPanning;
- (double)heading;
- (void)_updateForLocation:(NSObject *)arg0 routeMatch:(GEORouteMatch *)arg1 isRouteMatch:(char)arg2 speedMultiplier:(double)arg3 onRoute:(char)arg4 animated:(char)arg5 defaultCourse:(double)arg6;
- (void)_setPointOfReference:(struct ?)arg0 heading:(double)arg1 routeMatch:(GEORouteMatch *)arg2 onRoute:(char)arg3;
- (void)updateForLocation:(NSObject *)arg0 routeMatch:(GEORouteMatch *)arg1 isRouteMatch:(char)arg2 speedMultiplier:(double)arg3 onRoute:(char)arg4 animated:(char)arg5;
- (void)clearPointsOfInterest;
- (void)addPointOfInterest:(struct ?)arg0;
- (void)setFocusStyle:(int)arg0;
- (struct ?)courseTargetLocation;
- (void)setCourseTargetLocation:(struct ?)arg0;
- (int)courseSource;
- (void)setCourseSource:(int)arg0;

@end
