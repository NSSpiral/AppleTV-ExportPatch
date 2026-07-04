/* Runtime dump - EKTravelPredictionCar
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKTravelPredictionCar : EKTravelPrediction <NSSecureCoding>
{
    char _hasTrafficIncidentOnRoute;
    unsigned int _currentTrafficDensity;
    unsigned int _historicTrafficDensity;
    int _routeIncidentType;
    int _routeIncidentSignificance;
    NSString * _routeIncidentStreetName;
    unsigned int _travelState;
    double _travelStateScore;
}

@property (readonly, nonatomic) unsigned int currentTrafficDensity;
@property (readonly, nonatomic) unsigned int historicTrafficDensity;
@property (readonly, nonatomic) char hasTrafficIncidentOnRoute;
@property (readonly, nonatomic) int routeIncidentType;
@property (readonly, nonatomic) int routeIncidentSignificance;
@property (readonly, nonatomic) NSString * routeIncidentStreetName;
@property (readonly, nonatomic) unsigned int travelState;
@property (readonly, nonatomic) double travelStateScore;

- (void)setTrafficConditionsCurrent:(unsigned int)arg0 historic:(unsigned int)arg1;
- (void)addTrafficIncidentOfType:(int)arg0 withSignificance:(int)arg1 onStreet:(id)arg2;
- (void)setTravelState:(unsigned int)arg0 withConfidence:(double)arg1;
- (EKTravelPredictionCar *)initWithDepartureDate:(NSDate *)arg0 arrivalDate:(NSDate *)arg1 startingLocation:(CLLocation *)arg2 predictionDate:(NSDate *)arg3 hypothesizer:(GEORouteHypothesizer *)arg4;
- (<EKTravelAdvice> *)advice;
- (void)dealloc;
- (EKTravelPredictionCar *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (unsigned int)travelState;
- (unsigned int)currentTrafficDensity;
- (unsigned int)historicTrafficDensity;
- (char)hasTrafficIncidentOnRoute;
- (int)routeIncidentType;
- (NSString *)routeIncidentStreetName;
- (double)travelStateScore;
- (int)routeIncidentSignificance;

@end
