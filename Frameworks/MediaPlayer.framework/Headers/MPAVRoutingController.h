/* Runtime dump - MPAVRoutingController
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAVRoutingController : NSObject
{
    NSArray * _cachedRoutes;
    MPAVRoute * _cachedPickedRoute;
    NSMutableArray * _asyncFetchingCompletionHandlers;
    char _asyncFetchingRoutes;
    int _externalScreenType;
    char _hasExternalScreenType;
    char _scheduledSendDelegateRoutesChanged;
    char _pickedRouteHasVolumeControl;
    char _hasVolumeControlInfoForPickedRoute;
    int _deviceAvailabilityNotifyToken;
    char _deviceAvailabilityOverrideState;
    <MPAVRoutingControllerDelegate> * _delegate;
    NSString * _name;
    int _discoveryMode;
    NSString * _category;
}

@property (weak, nonatomic) <MPAVRoutingControllerDelegate> * delegate;
@property (copy, nonatomic) NSString * name;
@property (nonatomic) int discoveryMode;
@property (readonly, nonatomic) int externalScreenType;
@property (readonly, copy, nonatomic) NSArray * availableRoutes;
@property (copy, nonatomic) NSString * category;
@property (readonly, nonatomic) MPAVRoute * pickedRoute;
@property (readonly, nonatomic) char volumeControlIsAvailable;

- (char)pickBestDeviceRoute;
- (int)discoveryMode;
- (char)volumeControlIsAvailable;
- (MPAVRoute *)pickedRoute;
- (void)clearCachedRoutes;
- (int)externalScreenType;
- (NSArray *)availableRoutes;
- (char)airtunesRouteIsPicked;
- (char)wirelessDisplayRouteIsPicked;
- (char)routeOtherThanHandsetAndSpeakerAvailable;
- (void)_registerNotifications;
- (void)_unregisterNotifications;
- (char)routeOtherThanHandsetAvailable;
- (void)fetchAvailableRoutesWithCompletionHandler:(id /* block */)arg0;
- (void)_scheduleSendDelegateRoutesChanged;
- (void)_setExternalScreenType:(int)arg0;
- (void)_updateCachedRoutes;
- (id)_parseAVRouteDescriptions:(id)arg0;
- (char)pickRoute:(id)arg0 withPassword:(NSString *)arg1;
- (char)pickRoute:(id)arg0;
- (void)_pickableRoutesDidChangeNotification:(NSNotification *)arg0;
- (void)_routeStatusDidChangeNotification:(NSNotification *)arg0;
- (void)_externalScreenTypeDidChangeNotification:(NSNotification *)arg0;
- (void)_activeAudioRouteDidChangeNotification:(NSNotification *)arg0;
- (void)_mediaServerDiedNotification:(NSNotification *)arg0;
- (id)videoRouteForRoute:(id)arg0;
- (char)pickHandsetRoute;
- (char)pickSpeakerRoute;
- (char)speakerRouteIsPicked;
- (char)handsetRouteIsPicked;
- (char)receiverRouteIsPicked;
- (char)wirelessDisplayRoutesAvailable;
- (void)logCurrentRoutes;
- (void)dealloc;
- (void)setDelegate:(<MPAVRoutingControllerDelegate> *)arg0;
- (MPAVRoutingController *)init;
- (NSString *)description;
- (<MPAVRoutingControllerDelegate> *)delegate;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void)setCategory:(NSString *)arg0;
- (NSString *)category;
- (void).cxx_destruct;
- (MPAVRoutingController *)initWithName:(NSString *)arg0;
- (void)setDiscoveryMode:(int)arg0;

@end
