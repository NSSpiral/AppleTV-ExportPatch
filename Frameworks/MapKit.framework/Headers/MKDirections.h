/* Runtime dump - MKDirections
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKDirections : NSObject
{
    MKDirectionsRequest * _request;
    GEODirectionsRouteRequest * _geoRequest;
    GEOQuickETARequest * _etaRequest;
    GEOQuickETARequester * _etaRequester;
    <MKLocationManagerOperation> * _locationOperation;
    NSObject<OS_dispatch_group> * _waypointsDispatchGroup;
}

@property (readonly, nonatomic) char calculating;

- (void)calculateETAWithCompletionHandler:(id /* block */)arg0;
- (void)_cleanupLocationOperation;
- (char)isCalculating;
- (void)_establishCurrentLocationAndThen:(id)arg0;
- (void)_performWithValidCurrentLocationAndWaypointsForQuickETA:(char)arg0 handler:(id /* block */)arg1;
- (void)_calculateETAWithCompletionHandler:(id /* block */)arg0;
- (void)calculateDirectionsWithCompletionHandler:(id /* block */)arg0;
- (void)cancel;
- (void)dealloc;
- (MKDirections *)initWithRequest:(MKDirectionsRequest *)arg0;
- (void).cxx_destruct;

@end
