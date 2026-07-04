/* Runtime dump - MPRemoteRadioController
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPRemoteRadioController : NSObject <MPServiceRadioController, NSXPCListenerDelegate>
{
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSMutableSet * _connections;
    char _hasRefreshedStations;
    NSXPCListener * _listener;
    RadioAvailabilityController * _availabilityController;
    RadioRecentStationsController * _recentStationsController;
}

@property (retain, nonatomic) RadioAvailabilityController * availabilityController;
@property (retain, nonatomic) RadioRecentStationsController * recentStationsController;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)serviceRadioControllerGetRecentStationGroupsWithCompletionHandler:(id /* block */)arg0;
- (void)serviceRadioControllerGetRadioAvailabilityWithCompletionHandler:(id /* block */)arg0;
- (char)_isRadioAvailable;
- (void)_removeConnection:(NSURLConnection *)arg0;
- (void)_addConnection:(NSURLConnection *)arg0;
- (void)_radioAvailabilityControllerRadioAvailableDidChangeNotification:(NSNotification *)arg0;
- (void)_recentStationsControllerDidChangeStationsNotification:(NSNotification *)arg0;
- (void)setAvailabilityController:(RadioAvailabilityController *)arg0;
- (void)setRecentStationsController:(RadioRecentStationsController *)arg0;
- (RadioAvailabilityController *)availabilityController;
- (RadioRecentStationsController *)recentStationsController;
- (void)dealloc;
- (MPRemoteRadioController *)init;
- (void)start;
- (void).cxx_destruct;
- (char)listener:(NSXPCListener *)arg0 shouldAcceptNewConnection:(NSXPCConnection *)arg1;

@end
