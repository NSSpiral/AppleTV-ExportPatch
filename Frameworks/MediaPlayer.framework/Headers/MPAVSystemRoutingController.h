/* Runtime dump - MPAVSystemRoutingController
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAVSystemRoutingController : NSObject
{
    NSPointerArray * _clientRoutingControllers;
    int _clientDiscoveryMode;
    NSObject<OS_dispatch_queue> * _serialQueue;
    int _debugNotifyToken;
}

+ (MPAVSystemRoutingController *)sharedRoutingController;

- (void)_clientRoutingControllerDidUpdateDiscoveryModeNotification:(NSNotification *)arg0;
- (void)_debugLogSystemControllerState;
- (void)_onQueueUpdateClientRouteDiscoveryMode;
- (void)_updateClientRouteDiscoveryMode;
- (void)registerClientRoutingController:(BRController *)arg0;
- (void)unregisterClientRoutingController:(BRController *)arg0;
- (void)dealloc;
- (MPAVSystemRoutingController *)init;
- (MPAVSystemRoutingController *)_init;
- (void).cxx_destruct;

@end
