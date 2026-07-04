/* Runtime dump - GEONavigationDetails
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEONavigationDetails : NSObject
{
    GEOComposedRoute * _route;
    NSString * _destinationName;
    GEOLocation * _location;
    GEORouteMatch * _routeMatch;
    double _distanceToManeuverStart;
    double _distanceToManeuverEnd;
    double _distanceToRoute;
    double _distanceRemainingOnRoute;
    double _remainingTime;
    char _locationUnreliable;
    unsigned int _annoucementStage;
    unsigned int _nextAnnoucementStage;
    double _timeUntilNextAnnouncement;
    GEONavigationRouteSummary * _routeSummary;
    GEONavigationGuidanceState * _guidanceState;
    GEOCompanionRouteDetails * _companionRoute;
    GEOCompanionRouteStatus * _companionStatus;
}

@property (retain, nonatomic) GEOComposedRoute * route;
@property (readonly, nonatomic) NSString * destinationName;
@property (retain, nonatomic) GEOLocation * location;
@property (retain, nonatomic) GEORouteMatch * routeMatch;
@property (nonatomic) double distanceToManeuverStart;
@property (nonatomic) double distanceToManeuverEnd;
@property (nonatomic) double distanceToRoute;
@property (nonatomic) double distanceRemainingOnRoute;
@property (nonatomic) double remainingTime;
@property (nonatomic) char locationUnreliable;
@property (nonatomic) int navigationState;
@property (nonatomic) unsigned int announcementStage;
@property (readonly, nonatomic) unsigned int nextAnnouncementStage;
@property (readonly, nonatomic) double timeUntilNextAnnouncement;
@property (readonly, nonatomic) GEONavigationRouteSummary * routeSummary;
@property (readonly, nonatomic) GEONavigationGuidanceState * guidanceState;
@property (readonly, nonatomic) GEOCompanionRouteDetails * companionRoute;
@property (readonly, nonatomic) GEOCompanionRouteStatus * companionStatus;

- (void)dealloc;
- (GEOLocation *)location;
- (GEOCompanionRouteStatus *)companionStatus;
- (GEOCompanionRouteDetails *)companionRoute;
- (NSString *)destinationName;
- (GEONavigationDetails *)initWithRoute:(GEOComposedRoute *)arg0 destinationName:(NSString *)arg1;
- (GEONavigationRouteSummary *)routeSummary;
- (void)setRemainingTime:(double)arg0;
- (double)distanceToManeuverStart;
- (double)distanceToManeuverEnd;
- (double)distanceToRoute;
- (double)distanceRemainingOnRoute;
- (double)remainingTime;
- (int)navigationState;
- (char)locationUnreliable;
- (void)setNavigationState:(int)arg0;
- (GEONavigationGuidanceState *)guidanceState;
- (unsigned int)announcementStage;
- (void)setAnnouncementStage:(unsigned int)arg0;
- (unsigned int)nextAnnouncementStage;
- (void)setNextAnnouncementStage:(unsigned int)arg0 andTime:(double)arg1;
- (double)timeUntilNextAnnouncement;
- (void)setLocationUnreliable:(char)arg0;
- (void)setDistanceToManeuverStart:(double)arg0;
- (void)setDistanceToManeuverEnd:(double)arg0;
- (void)setDistanceToRoute:(double)arg0;
- (void)setDistanceRemainingOnRoute:(double)arg0;
- (void)setLocation:(GEOLocation *)arg0;
- (void)setRoute:(GEOComposedRoute *)arg0;
- (GEOComposedRoute *)route;
- (GEORouteMatch *)routeMatch;
- (void)setRouteMatch:(GEORouteMatch *)arg0;

@end
