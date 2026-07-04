/* Runtime dump - GEORouteHypothesis
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORouteHypothesis : NSObject
{
    GEOLocation * _lastLocation;
    NSDate * _suggestedDepartureDate;
    NSDate * _estimatedArrivalDate;
    unsigned int _currentTrafficDensity;
    unsigned int _historicTrafficDensity;
    char _hasTrafficIncidentOnRoute;
    int _routeIncidentType;
    int _routeIncidentSignificance;
    NSString * _routeIncidentStreetName;
    unsigned int _travelState;
    double _travelStateScore;
}

@property (retain, nonatomic) GEOLocation * lastLocation;
@property (readonly, nonatomic) NSDate * suggestedDepartureDate;
@property (readonly, nonatomic) NSDate * estimatedArrivalDate;
@property (readonly, nonatomic) unsigned int currentTrafficDensity;
@property (readonly, nonatomic) unsigned int historicTrafficDensity;
@property (readonly, nonatomic) char hasTrafficIncidentOnRoute;
@property (readonly, nonatomic) int routeIncidentType;
@property (readonly, nonatomic) int routeIncidentSignificance;
@property (readonly, nonatomic) NSString * routeIncidentStreetName;
@property (readonly, nonatomic) unsigned int travelState;
@property (readonly, nonatomic) double travelStateScore;

- (void)dealloc;
- (NSString *)description;
- (unsigned int)travelState;
- (NSDate *)suggestedDepartureDate;
- (NSDate *)estimatedArrivalDate;
- (unsigned int)currentTrafficDensity;
- (unsigned int)historicTrafficDensity;
- (char)hasTrafficIncidentOnRoute;
- (int)routeIncidentType;
- (NSString *)routeIncidentStreetName;
- (double)travelStateScore;
- (void)updateDepartureAndArrivalSuggestions:(id)arg0 arrivalDate:(NSDate *)arg1 travelTimeWithTraffic:(double)arg2;
- (void)updateCurrentTrafficDensity:(double)arg0 staticTravelTime:(double)arg1;
- (void)updateHistoricTrafficDensity:(double)arg0 staticTravelTime:(double)arg1;
- (void)updateTrafficIncidents:(id)arg0;
- (void)updateTravelState:(NSObject *)arg0;
- (GEOLocation *)lastLocation;
- (void)setLastLocation:(GEOLocation *)arg0;
- (int)routeIncidentSignificance;

@end
