/* Runtime dump - GEORouteHypothesizer
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORouteHypothesizer : NSObject <GEORouteHypothesizerUpdaterDelegate, GEOETAUpdaterDelegate>
{
    <GEORouteHypothesizerDelegate> * _delegate;
    id _handler;
    GEODirectionsRequestFeedback * _feedback;
    GEOLocationShifter * _locationShifter;
    GEOComposedWaypoint * _source;
    GEOComposedWaypoint * _destination;
    NSDate * _departureDate;
    NSDate * _arrivalDate;
    GEORouteHypothesis * _hypothesis;
    GEOLocation * _lastLocation;
    NSDate * _suggestedNextUpdateDate;
    NSDate * _lastETARequestDate;
    double _etaUpdateInterval;
    unsigned int _etaUpdateFrequency;
    GEOETAUpdater * _etaUpdater;
    GEOETARoute * _liveETARoute;
    GEOETARoute * _baselineETARoute;
    GEORouteAttributes * _routeAttributes;
    GEORouteHypothesizerUpdater * _updater;
    GEORoute * _existingRoute;
    NSData * _usualRouteData;
}

@property (nonatomic) <GEORouteHypothesizerDelegate> * delegate;
@property (nonatomic) unsigned int etaUpdateFrequency;
@property (retain, nonatomic) GEODirectionsRequestFeedback * feedback;
@property (readonly, nonatomic) char supportsLiveTraffic;
@property (readonly, nonatomic) char supportsDirections;
@property (readonly, nonatomic) GEOComposedWaypoint * source;
@property (readonly, nonatomic) GEOComposedWaypoint * destination;
@property (readonly, nonatomic) NSDate * departureDate;
@property (readonly, nonatomic) NSDate * arrivalDate;
@property (readonly, nonatomic) NSDate * suggestedNextUpdateDate;
@property (readonly, nonatomic) GEOComposedRoute * route;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)setDelegate:(<GEORouteHypothesizerDelegate> *)arg0;
- (<GEORouteHypothesizerDelegate> *)delegate;
- (void)_commonInit;
- (GEOComposedWaypoint *)source;
- (GEOComposedWaypoint *)destination;
- (void)setFeedback:(GEODirectionsRequestFeedback *)arg0;
- (GEODirectionsRequestFeedback *)feedback;
- (char)supportsLiveTraffic;
- (char)supportsDirections;
- (void)_updateLocation:(NSObject *)arg0 hypothesisHandler:(id /* block */)arg1;
- (void)_createUpdaterWithStartingLocation:(CLLocation *)arg0;
- (void)_updateETAWithRouteMatch:(GEOComposedRoute *)arg0;
- (void)_updateLocationAndETAUpdateInterval;
- (void)_refreshETAWithRouteMatch:(GEOComposedRoute *)arg0;
- (void)routeHypothesizerUpdater:(GEORouteHypothesizerUpdater *)arg0 willRequestNewRoute:(id)arg1;
- (void)routeHypothesizerUpdater:(GEORouteHypothesizerUpdater *)arg0 receivedNewRoute:(id)arg1 request:(NSURLRequest *)arg2 response:(NSURLResponse *)arg3;
- (NSURLRequest *)etaUpdaterRoutesForETATrafficUpdateRequest:(NSURLRequest *)arg0;
- (void)etaUpdater:(GEOETAUpdater *)arg0 willSendETATrafficUpdateRequest:(NSURLRequest *)arg1;
- (void)etaUpdater:(GEOETAUpdater *)arg0 receivedETATrafficUpdateResponse:(NSURLResponse *)arg1;
- (void)etaUpdater:(GEOETAUpdater *)arg0 receivedError:(NSError *)arg1;
- (void)etaUpdaterUpdatedETA:(id)arg0;
- (void)etaUpdaterReceivedInvalidRoute:(id)arg0 newRoute:(ATVRoute *)arg1 incidentsOnRoute:(id)arg2 incidentsOffRoute:(id)arg3;
- (GEORouteHypothesizer *)initWithSource:(GEOComposedWaypoint *)arg0 toDestination:(NSObject *)arg1 departureDate:(NSDate *)arg2 usualRouteData:(NSData *)arg3;
- (GEORouteHypothesizer *)initWithSource:(GEOComposedWaypoint *)arg0 toDestination:(NSObject *)arg1 arrivalDate:(NSDate *)arg2 usualRouteData:(NSData *)arg3;
- (GEORouteHypothesizer *)initWithExistingRoute:(GEORoute *)arg0 source:(GEOComposedWaypoint *)arg1 destination:(GEOComposedWaypoint *)arg2 etaUpdater:(GEOETAUpdater *)arg3;
- (void)updateLocation:(NSObject *)arg0 hypothesisHandler:(id /* block */)arg1;
- (NSDate *)departureDate;
- (NSDate *)arrivalDate;
- (NSDate *)suggestedNextUpdateDate;
- (unsigned int)etaUpdateFrequency;
- (void)setEtaUpdateFrequency:(unsigned int)arg0;
- (GEOComposedRoute *)route;

@end
