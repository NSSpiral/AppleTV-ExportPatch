/* Runtime dump - EKTravelRealRoutePredictor
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKTravelRealRoutePredictor : NSObject <EKTravelRoutePredictor>
{
    char _hypothesisInProgress;
    NSDate * _arrivalDate;
    GEORouteHypothesizer * _hypothesizer;
    EKTravelRealRoutePredictorInternalDelegate * _hypothesizerDelegate;
    GEOComposedWaypoint * _sourceWaypoint;
    GEOComposedWaypoint * _destinationWaypoint;
    GEOQuickETARequester * _quickHypothesizer;
    EKTravelAgendaItem * _agendaItem;
    int _travelMethod;
}

@property (nonatomic) EKTravelAgendaItem * agendaItem;
@property (readonly, nonatomic) int travelMethod;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (int)travelMethod;
- (void)_newHypothesizer;
- (void)_newQuickHypothesizerWithRequest:(NSURLRequest *)arg0;
- (void)_getAutomobilePredictionFrom:(NSObject *)arg0 handler:(id /* block */)arg1;
- (void)_getOneshotPredictionFrom:(NSObject *)arg0 transportType:(int)arg1 handler:(id /* block */)arg2;
- (EKTravelRealRoutePredictor *)initWithSource:(NSObject *)arg0 destination:(NSObject *)arg1 arrivalDate:(NSDate *)arg2 travelMethod:(int)arg3;
- (void)updateLocation:(NSObject *)arg0 handler:(id /* block */)arg1;
- (EKTravelAgendaItem *)agendaItem;
- (void)setAgendaItem:(EKTravelAgendaItem *)arg0;
- (void)dealloc;

@end
