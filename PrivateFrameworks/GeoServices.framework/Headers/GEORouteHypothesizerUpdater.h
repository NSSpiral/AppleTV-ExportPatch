/* Runtime dump - GEORouteHypothesizerUpdater
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORouteHypothesizerUpdater : NSObject
{
    <GEORouteHypothesizerUpdaterDelegate> * _delegate;
    GEODirectionsRequestFeedback * _feedback;
    GEOComposedWaypoint * _source;
    GEOComposedWaypoint * _destination;
    GEODirectionsRouteRequest * _currentRequest;
    GEORouteAttributes * _routeAttributes;
    GEOLocation * _originLocation;
    GEOComposedRoute * _route;
    GEORouteMatch * _routeMatch;
    char _isTraveling;
    char _hasArrived;
    GEOMapRegion * _arrivalMapRegion;
    double _score;
    NSMutableArray * _rerouteEntries;
    char _shouldThrottleReroutes;
    NSDate * _lastRerouteDate;
    unsigned int _numThrottledReroutes;
    NSLock * _requestLock;
}

@property (weak, nonatomic) <GEORouteHypothesizerUpdaterDelegate> * delegate;
@property (retain, nonatomic) GEODirectionsRequestFeedback * feedback;
@property (readonly, nonatomic) GEOComposedRoute * route;
@property (readonly, nonatomic) GEORouteMatch * routeMatch;
@property (readonly, nonatomic) double score;
@property (readonly, nonatomic) char isTraveling;
@property (readonly, nonatomic) char hasArrived;

- (void)dealloc;
- (void)setDelegate:(<GEORouteHypothesizerUpdaterDelegate> *)arg0;
- (<GEORouteHypothesizerUpdaterDelegate> *)delegate;
- (void)setFeedback:(GEODirectionsRequestFeedback *)arg0;
- (GEODirectionsRequestFeedback *)feedback;
- (char)hasArrived;
- (char)isTraveling;
- (void)cancelCurrentRequest;
- (void)updateForLocation:(NSObject *)arg0;
- (GEORouteHypothesizerUpdater *)initWithSource:(GEOComposedWaypoint *)arg0 destination:(GEOComposedWaypoint *)arg1 routeAttributes:(GEORouteAttributes *)arg2;
- (void)startUpdatingFromLocation:(NSObject *)arg0 existingRoute:(GEORoute *)arg1 usualRouteData:(NSData *)arg2;
- (void)_requestNewRouteFromLocation:(NSObject *)arg0 usualRouteData:(NSData *)arg1;
- (void)_updateScoreForLocation:(NSObject *)arg0;
- (NSObject *)_routeMatchForLocation:(NSObject *)arg0;
- (char)_checkForArrival:(id)arg0 routeMatch:(GEORouteMatch *)arg1;
- (double)score;
- (GEOComposedRoute *)route;
- (GEORouteMatch *)routeMatch;

@end
