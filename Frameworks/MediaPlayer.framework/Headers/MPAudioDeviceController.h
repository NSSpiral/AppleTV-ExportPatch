/* Runtime dump - MPAudioDeviceController
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAudioDeviceController : NSObject
{
    NSString * _category;
    id _delegate;
    char _determiningPickableRoutes;
    char _fakeRouteAvailable;
    NSArray * _pickableRoutes;
    NSDictionary * _pickedRoute;
    char _pickedRouteHasVolumeControl;
    char _pickedRouteHasVolumeControlIsValid;
    NSMutableArray * _pickableRoutesCompletionHandlers;
    char _scheduledSendAudioRoutesDidChange;
}

@property (weak, nonatomic) id delegate;
@property (nonatomic) char routeDiscoveryEnabled;

+ (MPAudioDeviceController *)_routeDiscoveryModeStack;
+ (void)_internalPushRouteDiscoveryMode:(int)arg0;
+ (int)routeDiscoveryMode;
+ (void)_internalSetSystemRouteDiscoveryMode:(int)arg0;
+ (void)setRouteDiscoveryMode:(int)arg0;
+ (char)routeDiscoveryEnabled;
+ (void)setRouteDiscoveryEnabled:(char)arg0;
+ (void)pushRouteDiscoveryMode:(int)arg0;
+ (void)restoreRouteDiscoveryMode;

- (char)pickBestDeviceRoute;
- (char)volumeControlIsAvailable;
- (NSDictionary *)_pickedRoute;
- (void)clearCachedRoutes;
- (char)airtunesRouteIsPicked;
- (void)_activeAudioRouteDidChange:(NSDictionary *)arg0;
- (void)_registerNotifications;
- (void)_unregisterNotifications;
- (char)pickRoute:(id)arg0 withPassword:(NSString *)arg1;
- (char)pickRoute:(id)arg0;
- (void)_mediaServerDiedNotification:(NSNotification *)arg0;
- (char)pickHandsetRoute;
- (char)pickSpeakerRoute;
- (char)speakerRouteIsPicked;
- (char)handsetRouteIsPicked;
- (char)receiverRouteIsPicked;
- (void)logCurrentRoutes;
- (NSArray *)_pickableRoutes;
- (char)_routeIsHandset:(NSSet *)arg0;
- (char)_routeIsSpeaker:(id)arg0;
- (char)_routeIsDisplayPort:(NSObject *)arg0;
- (char)routeDiscoveryEnabled;
- (void)setRouteDiscoveryEnabled:(char)arg0;
- (char)pickRouteAtIndex:(unsigned int)arg0 withPassword:(NSString *)arg1;
- (char)_routeIsHeadphones:(id)arg0;
- (int)indexOfPickedRoute;
- (NSObject *)routeNameAtIndex:(unsigned int)arg0 isPicked:(char *)arg1;
- (char)_routeIsReceiver:(NSObject *)arg0;
- (char)_routeIsWireless:(id)arg0;
- (NSString *)pickedRouteDescription;
- (void)_scheduleSendDelegateAudioRoutesChanged;
- (void)determinePickableRoutesWithCompletionHandler:(id /* block */)arg0;
- (void)_pickableRoutesChangedNotification:(NSNotification *)arg0;
- (void)_portStatusDidChangeNotification:(NSNotification *)arg0;
- (void)_routeDiscoveryDidEndNotification:(NSNotification *)arg0;
- (unsigned int)numberOfAudioRoutes;
- (char)routeOtherThanHandsetIsAvailable;
- (char)routeOtherThanHandsetAndSpeakerIsAvailable;
- (NSObject *)routeDescriptionAtIndex:(unsigned int)arg0;
- (char)routeRequiresPasswordAtIndex:(unsigned int)arg0;
- (NSObject *)routeTypeAtIndex:(unsigned int)arg0;
- (int)indexOfRouteWithName:(NSString *)arg0;
- (char)pickRouteAtIndex:(unsigned int)arg0;
- (void)restorePickedRoute;
- (id)nameOfPickedRoute;
- (char)wirelessRouteIsPicked;
- (char)isPickedRouteDistinctFromRoute:(id)arg0;
- (void)_sendFakeRouteChange;
- (void)dealloc;
- (void)setDelegate:(NSObject *)arg0;
- (MPAudioDeviceController *)init;
- (NSObject *)delegate;
- (void)setCategory:(NSString *)arg0;
- (void)alertView:(UIAlertView *)arg0 didDismissWithButtonIndex:(int)arg1;
- (void).cxx_destruct;

@end
