/* Runtime dump - EKTravelRealRoutePredictorInternalDelegate
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKTravelRealRoutePredictorInternalDelegate : NSObject <GEORouteHypothesizerDelegate>
{
    NSDate * _lastUpdateDate;
}

@property (readonly, nonatomic) NSDate * lastUpdateDate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSDate *)lastUpdateDate;
- (void)routeHypothesizerArrived:(id)arg0;
- (void)routeHypothesizer:(GEORouteHypothesizer *)arg0 matchedToRoute:(id)arg1;
- (void)routeHypothesizer:(GEORouteHypothesizer *)arg0 willRequestNewRoute:(id)arg1;
- (void)routeHypothesizerRerouted:(id)arg0 request:(NSURLRequest *)arg1 response:(NSURLResponse *)arg2;
- (void)routeHypothesizer:(GEORouteHypothesizer *)arg0 willSendETARequest:(NSURLRequest *)arg1;
- (void)routeHypothesizer:(GEORouteHypothesizer *)arg0 receivedETAResponse:(NSURLResponse *)arg1;
- (void)routeHypothesizer:(GEORouteHypothesizer *)arg0 receivedETAError:(NSError *)arg1;
- (void)routeHypothesizerUpdatedETA:(id)arg0 etaRoute:(GEOETARoute *)arg1;

@end
