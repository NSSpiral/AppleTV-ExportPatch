/* Runtime dump - GEONavigation
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEONavigation : NSObject
{
    GEONavigationDetails * _details;
    NSObject<OS_xpc_object> * _geodConnection;
    NSXPCConnection * _nanomapscdConnection;
    NSLock * _connectionLock;
    int _navigationStartedToken;
    char _hasNavigationStartedToken;
    char _shouldSendRouteWithStatus;
    NSData * _lastSentRouteContext;
    <GEONavigationDelegate> * _delegate;
}

@property (readonly, nonatomic) GEOComposedRoute * route;
@property (readonly, nonatomic) NSString * destinationName;
@property (readonly, nonatomic) GEOLocation * location;
@property (readonly, nonatomic) GEORouteMatch * routeMatch;
@property (readonly, nonatomic) double distanceToManeuverStart;
@property (readonly, nonatomic) double distanceToManeuverEnd;
@property (readonly, nonatomic) double distanceToRoute;
@property (readonly, nonatomic) double distanceRemainingOnRoute;
@property (readonly, nonatomic) double remainingTime;
@property (readonly, nonatomic) char isNavigating;
@property (readonly, nonatomic) char locationUnreliable;
@property (nonatomic) int navigationTransportType;
@property (nonatomic) int navigationState;
@property (nonatomic) unsigned int announcementStage;
@property (readonly, nonatomic) unsigned int nextAnnouncementStage;
@property (readonly, nonatomic) double timeUntilNextAnnouncement;
@property (nonatomic) <GEONavigationDelegate> * delegate;

+ (GEONavigation *)sharedInstance;

- (void)dealloc;
- (void)setDelegate:(<GEONavigationDelegate> *)arg0;
- (GEONavigation *)init;
- (<GEONavigationDelegate> *)delegate;
- (GEOLocation *)location;
- (void)_closeGeodConnection;
- (void)_closeNanomapscdConnection;
- (void)_updateNavigationRouteStatus;
- (void)_updateNavigationRouteDetails:(id)arg0 routeStatus:(GEOCompanionRouteStatus *)arg1 routeContext:(NSObject *)arg2;
- (NSString *)destinationName;
- (void)_createGeodConnection;
- (void)_sendMessage:(NSString *)arg0 data:(NSData *)arg1;
- (void)_createNanomapscdConnection;
- (void)_invalidateNavigationSessionWithRouteContext:(GEOComposedRoute *)arg0;
- (void)updateLocation:(NSObject *)arg0 routeMatch:(GEORouteMatch *)arg1 etaRoute:(GEOETARoute *)arg2 locationUnreliable:(char)arg3;
- (void)setRoute:(GEOComposedRoute *)arg0 toDestinationName:(NSString *)arg1;
- (double)distanceToManeuverStart;
- (double)distanceToManeuverEnd;
- (double)distanceToRoute;
- (double)distanceRemainingOnRoute;
- (double)remainingTime;
- (int)navigationState;
- (char)locationUnreliable;
- (void)setNavigationState:(int)arg0;
- (int)navigationTransportType;
- (unsigned int)announcementStage;
- (void)setAnnouncementStage:(unsigned int)arg0;
- (void)_setNeedsNavigationStatusUpdate;
- (unsigned int)nextAnnouncementStage;
- (void)setNextAnnouncementStage:(unsigned int)arg0 andTime:(double)arg1;
- (double)timeUntilNextAnnouncement;
- (void)recalculatedToRoute:(id)arg0 location:(GEOLocation *)arg1 routeMatch:(GEORouteMatch *)arg2;
- (void)updatedETA:(id)arg0;
- (void)clearRoute;
- (char)isNavigating;
- (void)setNavigationTransportType:(int)arg0;
- (void)startNavigationForTransportType:(int)arg0 state:(int)arg1;
- (void)endNavigation;
- (GEOComposedRoute *)route;
- (GEORouteMatch *)routeMatch;

@end
