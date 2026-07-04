/* Runtime dump - WebMediaSessionHelper
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebMediaSessionHelper : NSObject
{
    struct MediaSessionManageriOS * _callback;
    struct RetainPtr<MPVolumeView> _volumeView;
    struct RetainPtr<MPAVRoutingController> _airPlayPresenceRoutingController;
}

- (void)dealloc;
- (void)applicationDidBecomeActive:(id)arg0;
- (void)applicationWillResignActive:(id)arg0;
- (void)applicationWillEnterForeground:(UIApplication *)arg0;
- (void).cxx_construct;
- (void).cxx_destruct;
- (WebMediaSessionHelper *)initWithCallback:(struct MediaSessionManageriOS *)arg0;
- (void)clearCallback;
- (char)hasWirelessTargetsAvailable;
- (void)startMonitoringAirPlayRoutes;
- (void)stopMonitoringAirPlayRoutes;
- (void)wirelessRoutesAvailableDidChange:(NSDictionary *)arg0;
- (void)interruption:(id)arg0;
- (void)allocateVolumeView;

@end
