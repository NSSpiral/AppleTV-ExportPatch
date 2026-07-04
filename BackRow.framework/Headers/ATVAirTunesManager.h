/* Runtime dump - ATVAirTunesManager
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRSingleton.h>

@class ATVSliderMenuItemView, BRStateMachine;
@interface ATVAirTunesManager : BRSingleton
{
    BRStateMachine * _stateMachine;
    char _alternateSpeakersEnabled;
    char _shouldReconnectOnRouteChange;
    char _preparingToSleep;
    NSTimer * _speakerSleepTimer;
    NSDictionary * _previousRoute;
    NSTimer * _disableRouteTimer;
    char _discoveryActiveForVisibleList;
    char _destinationIsAppleTV;
    char _discoveryActiveForConnecting;
    ATVSliderMenuItemView * _onScreenVolumeSlider;
    NSArray * _pickableRoutes;
    NSArray * _pickableSpeakers;
    NSDictionary * _cachedDefaultRoute;
    NSTimer * _pendingRouteTimer;
    NSString * _pendingRouteUID;
}

@property (nonatomic) char discoveryActiveForVisibleList;
@property (nonatomic) char destinationIsAppleTV;
@property (retain, nonatomic) ATVSliderMenuItemView * onScreenVolumeSlider;
@property (retain, nonatomic) NSArray * pickableRoutes;
@property (retain, nonatomic) NSArray * pickableSpeakers;
@property (retain, nonatomic) NSDictionary * cachedDefaultRoute;
@property (retain, nonatomic) BRStateMachine * stateMachine;
@property (nonatomic) char discoveryActiveForConnecting;
@property (retain, nonatomic) NSTimer * pendingRouteTimer;
@property (retain, nonatomic) NSString * pendingRouteUID;

+ (ATVAirTunesManager *)singleton;
+ (void)setSingleton:(NSObject *)arg0;

- (char)isActivelyUsingAlternateSpeakers;
- (void)_initializeStateMachine:(NSObject *)arg0;
- (id)_selectedSpeakerUID;
- (void)_airPlayActiveAudioRouteChanged:(NSNotification *)arg0;
- (void)_deviceWillSleep:(id)arg0;
- (void)_deviceWillWake:(id)arg0;
- (void)_portStatusDidChange:(NSDictionary *)arg0;
- (void)_displayModeChanged:(NSNotification *)arg0;
- (void)_contextMenuBecameVisible:(id)arg0;
- (void)_contextMenuDismissed:(id)arg0;
- (void)_updatePickableRoutes;
- (char)speakerIsDefaultRoute:(id)arg0;
- (char)speakerHasPINCode:(id)arg0;
- (NSDictionary *)speakerNameForInfo:(NSDictionary *)arg0;
- (void)_updatePortDiscoveryStatus;
- (void)_airPlayPickableRoutesChanged:(NSNotification *)arg0;
- (NSArray *)pickableSpeakers;
- (NSDictionary *)speakerUIDForInfo:(NSDictionary *)arg0;
- (void)setPickableRoutes:(NSArray *)arg0;
- (char)speakerHasPassword:(NSString *)arg0;
- (char)speakerIsSelected:(id)arg0;
- (char)_isRouteToMe:(id)arg0;
- (id)pickableRouteForUID:(id)arg0;
- (id)cachedPasswordForSpeaker:(id)arg0;
- (id)_passwordDialogForSpeaker:(id)arg0;
- (void)setCachedPassword:(NSString *)arg0 forSpeaker:(id)arg1;
- (void)_setSelectedSpeakerUID:(id)arg0;
- (char)_selectRouteWithUID:(id)arg0;
- (NSDictionary *)_selectedSpeakerInfo;
- (char)disableSelectedRoute;
- (char)areAlternateSpeakersSelected;
- (void)_updateSpeakerSelectionAfterSleep:(id)arg0;
- (void)setDiscoveryActiveForVisibleList:(char)arg0;
- (void)setDiscoveryActiveForConnecting:(char)arg0;
- (char)speakerSupportsAirPlayVideo:(id)arg0;
- (id)defaultRoute;
- (char)selectRoute:(id)arg0;
- (id)_selectRoute:(id)arg0 withPassword:(NSString *)arg1 showDialog:(char)arg2 isTransient:(char)arg3;
- (char)enableSelectedRoute;
- (void)disableSelectedRouteWithDelay:(float)arg0;
- (NSObject *)bonjourDeviceID;
- (char)discoveryActiveForVisibleList;
- (char)destinationIsAppleTV;
- (void)setDestinationIsAppleTV:(char)arg0;
- (ATVSliderMenuItemView *)onScreenVolumeSlider;
- (void)setOnScreenVolumeSlider:(ATVSliderMenuItemView *)arg0;
- (NSArray *)pickableRoutes;
- (void)setPickableSpeakers:(NSArray *)arg0;
- (NSDictionary *)cachedDefaultRoute;
- (void)setCachedDefaultRoute:(NSDictionary *)arg0;
- (char)discoveryActiveForConnecting;
- (NSTimer *)pendingRouteTimer;
- (void)setPendingRouteTimer:(NSTimer *)arg0;
- (NSString *)pendingRouteUID;
- (void)setPendingRouteUID:(NSString *)arg0;
- (NSObject *)_cleanUpSpeakerState:(NSObject *)arg0;
- (void)_postSpeakerWasSelectedNotificationForSpeaker:(id)arg0;
- (void)_routeSearchTimedOut;
- (id)_airPlayAuthFailed:(id)arg0;
- (NSSet *)_supportedMediaTypes;
- (void)dealloc;
- (ATVAirTunesManager *)init;
- (void).cxx_destruct;
- (BRStateMachine *)stateMachine;
- (void)setStateMachine:(BRStateMachine *)arg0;
- (char)isMuted;
- (float)volume;

@end
