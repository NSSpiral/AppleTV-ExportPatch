/* Runtime dump - GEOETAUpdater
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOETAUpdater : NSObject
{
    <GEOETAUpdaterDelegate> * _delegate;
    GEOETATrafficUpdateRequest * _currentETARequest;
    GEOLocation * _userLocation;
    GEORouteMatch * _routeMatch;
    GEOComposedRoute * _route;
    GEOComposedWaypoint * _destination;
    GEORouteAttributes * _routeAttributes;
    int _etaState;
    char _allowRequests;
    char _shouldUseConditionalRequest;
    double _requestInterval;
    NSTimer * _etaIdleTimer;
    double _lastETARequestTime;
    double _debugTimeWindowDuration;
    NSData * _directionsResponseID;
}

@property (nonatomic) <GEOETAUpdaterDelegate> * delegate;
@property (retain, nonatomic) GEOComposedRoute * route;
@property (retain, nonatomic) GEORouteMatch * routeMatch;
@property (retain, nonatomic) GEOLocation * userLocation;
@property (retain, nonatomic) GEOComposedWaypoint * destination;
@property (retain, nonatomic) GEORouteAttributes * routeAttributes;
@property (retain, nonatomic) NSData * directionsResponseID;
@property (nonatomic) char allowRequests;
@property (nonatomic) char shouldUseConditionalRequest;
@property (nonatomic) double requestInterval;
@property (nonatomic) double debugTimeWindowDuration;

- (void)dealloc;
- (void)setDelegate:(<GEOETAUpdaterDelegate> *)arg0;
- (GEOETAUpdater *)init;
- (<GEOETAUpdaterDelegate> *)delegate;
- (void)reset;
- (GEOComposedWaypoint *)destination;
- (void)setDestination:(GEOComposedWaypoint *)arg0;
- (void)setDirectionsResponseID:(NSData *)arg0;
- (NSData *)directionsResponseID;
- (void)setUserLocation:(GEOLocation *)arg0;
- (GEOLocation *)userLocation;
- (void)setRouteAttributes:(GEORouteAttributes *)arg0;
- (GEORouteAttributes *)routeAttributes;
- (void)requestUpdate;
- (void)_clearCurrentETARequest;
- (void)_continueUpdateRequests;
- (void)_createETARequest;
- (char)_sendETARequest:(NSURLRequest *)arg0 isUpdate:(char)arg1;
- (void)_updateCurrentETARequest;
- (char)_shouldStartConditionalETARequest;
- (void)_startConditionalConnectionETARequest;
- (unsigned int)currentStep;
- (double)percentageOfCurrentStepRemaining;
- (NSURLRequest *)routesForETAUpdateRequest;
- (char)_updateETAResponse:(NSURLResponse *)arg0 withRemainingDistanceFromRequest:(NSURLRequest *)arg1;
- (char)updateRouteWithETATrafficUpdateResponse:(NSURLResponse *)arg0 step:(NSString *)arg1 percentOfStepRemaining:(double)arg2;
- (double)_calculateNextTransitionTime;
- (void)_startStateWaitingForBestTimeStart:(id)arg0;
- (char)_updateRouteWithETATrafficUpdateResponse:(NSURLResponse *)arg0;
- (GEOETAUpdater *)initWithRoute:(GEOComposedRoute *)arg0 destination:(GEOComposedWaypoint *)arg1 routeAttributes:(GEORouteAttributes *)arg2;
- (void)startUpdateRequests;
- (void)stopUpdateRequests;
- (char)allowRequests;
- (void)setAllowRequests:(char)arg0;
- (char)shouldUseConditionalRequest;
- (void)setShouldUseConditionalRequest:(char)arg0;
- (double)requestInterval;
- (void)setRequestInterval:(double)arg0;
- (double)debugTimeWindowDuration;
- (void)setDebugTimeWindowDuration:(double)arg0;
- (void)_clearTimer;
- (void)setRoute:(GEOComposedRoute *)arg0;
- (GEOComposedRoute *)route;
- (GEORouteMatch *)routeMatch;
- (void)setRouteMatch:(GEORouteMatch *)arg0;

@end
