/* Runtime dump - EKTravelAdvisor
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKTravelAdvisor : NSObject
{
    NSMutableArray * _queue;
    EKTravelAgendaItem * _nextAgendaItem;
    char _queueDirty;
    EKTravelPrediction * _prediction;
    <EKTravelAdvisorWorld> * _world;
    Class _routePredictorClass;
    <EKTravelRoutePredictor> * _routePredictor;
    char _invalidated;
}

- (void)removeAgendaItem:(NSObject *)arg0;
- (void)setLocationAuthorizationCallback:(id /* block */)arg0;
- (char)authorizedToAcquireLocation;
- (void)addAgendaItem:(NSObject *)arg0;
- (EKTravelAdvisor *)initWithWorld:(<EKTravelAdvisorWorld> *)arg0 routePredictorClass:(Class)arg1;
- (void)_forceInvalidatePrediction;
- (void)_updatePrediction;
- (void)_updatePredictionFromCurrentLocation:(NSObject *)arg0;
- (void)_setWakeupCriteriaForPeriodWhileWaitingForRouteHypothesis;
- (void)_setWakeupCriteriaFromCurrentPrediction;
- (void)dealloc;
- (EKTravelAdvisor *)init;
- (void)invalidate;

@end
