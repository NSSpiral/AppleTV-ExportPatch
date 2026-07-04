/* Runtime dump - VKPuckAnimator
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPuckAnimator : NSObject
{
    <VKPuckAnimatorTarget> * _target;
    VKAnimation * _animation;
    VKRunningCurve * _curve;
    VKPuckAnimatorLocationProjector * _locationProjector;
    double _vehicleHeading;
    <VKPuckAnimatorDelegate> * _delegate;
    int _pausedCount;
    char _suspended;
    double _tracePlaybackSpeedMultiplier;
    unsigned int _behavior;
    struct VKPoint _lastProjectedPosition;
    GEORouteMatch * _lastProjectedLocation;
}

@property (retain, nonatomic) <VKPuckAnimatorTarget> * target;
@property (nonatomic) <VKPuckAnimatorDelegate> * delegate;
@property (nonatomic) double tracePlaybackSpeedMultiplier;
@property (nonatomic) unsigned int behavior;
@property (retain, nonatomic) GEORouteMatch * lastProjectedLocation;

- (void)dealloc;
- (void)setDelegate:(<VKPuckAnimatorDelegate> *)arg0;
- (VKPuckAnimator *)init;
- (<VKPuckAnimatorDelegate> *)delegate;
- (void)setTarget:(<VKPuckAnimatorTarget> *)arg0;
- (void)stop;
- (<VKPuckAnimatorTarget> *)target;
- (void)start;
- (void)resume;
- (void).cxx_construct;
- (void)pause;
- (unsigned int)behavior;
- (void)_step;
- (void)setTracePlaybackSpeedMultiplier:(double)arg0;
- (double)tracePlaybackSpeedMultiplier;
- (void)updateLocation:(NSObject *)arg0 routeMatch:(GEORouteMatch *)arg1;
- (void)updateVehicleHeading:(double)arg0;
- (GEORouteMatch *)lastProjectedLocation;
- (void)setLastProjectedLocation:(GEORouteMatch *)arg0;
- (void)setBehavior:(unsigned int)arg0;

@end
