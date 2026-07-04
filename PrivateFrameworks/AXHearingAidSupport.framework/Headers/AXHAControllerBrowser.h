/* Runtime dump - AXHAControllerBrowser
 * Image: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
 */

@interface AXHAControllerBrowser : NSObject <NSNetServiceBrowserDelegate, AXHARemoteControllerDelegate, AXHADeviceControllerProtocol>
{
    AXHATimer * _deviceUpdatesTimer;
    NSMutableDictionary * _deviceUpdatesDescription;
    int _state;
    AXHearingSlaveController * _slaveController;
    <AXHAControllerBrowserDelegateProtocol> * _delegate;
    NSNetServiceBrowser * _browser;
    NSMutableArray * _remoteControllers;
    NSMutableArray * _updateDeviceBlocks;
}

@property (nonatomic) int state;
@property (retain, nonatomic) AXHearingSlaveController * slaveController;
@property (nonatomic) <AXHAControllerBrowserDelegateProtocol> * delegate;
@property (retain, nonatomic) NSNetServiceBrowser * browser;
@property (retain, nonatomic) NSMutableArray * remoteControllers;
@property (retain, nonatomic) NSMutableArray * updateDeviceBlocks;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (AXHAControllerBrowser *)sharedInstance;

- (void)dealloc;
- (void)setDelegate:(<AXHAControllerBrowserDelegateProtocol> *)arg0;
- (AXHAControllerBrowser *)init;
- (<AXHAControllerBrowserDelegateProtocol> *)delegate;
- (int)state;
- (void)setState:(int)arg0;
- (void)stop;
- (void)writeValue:(id)arg0 forProperty:(int)arg1 forDeviceID:(NSString *)arg2;
- (void)updateProperty:(int)arg0 forDeviceID:(NSString *)arg1;
- (void)device:(NSObject *)arg0 didUpdateProperty:(int)arg1;
- (void)setSlaveController:(AXHearingSlaveController *)arg0;
- (void)setRemoteControllers:(NSMutableArray *)arg0;
- (void)setUpdateDeviceBlocks:(NSMutableArray *)arg0;
- (NSMutableArray *)remoteControllers;
- (AXHearingSlaveController *)slaveController;
- (void)sendObject:(NSObject *)arg0 toController:(BRController *)arg1 withCompletion:(id /* block */)arg2;
- (void)sendObject:(NSObject *)arg0 toController:(BRController *)arg1 withSendCompletion:(id /* block */)arg2;
- (void)clearControllers;
- (void)resolveMasterWithCompletion:(id /* block */)arg0;
- (NSString *)remoteControllerForHostname:(id)arg0;
- (void)writeValue:(id)arg0 forProperty:(int)arg1 forControllers:(id)arg2;
- (char)shouldRelinquishConnection;
- (NSMutableArray *)updateDeviceBlocks;
- (void)writePayload:(NSData *)arg0 toControllers:(id)arg1;
- (void)controller:(AXHARemoteController *)arg0 didReceiveData:(AXHARemoteMessage *)arg1;
- (void)controller:(AXHARemoteController *)arg0 didFinishSendingData:(AXHARemoteMessage *)arg1;
- (void)controllerDidFinishConnecting:(AXHARemoteController *)arg0;
- (void)controller:(AXHARemoteController *)arg0 didCloseConnectionWithError:(NSError *)arg1;
- (void)registerForPropertyUpdates:(id)arg0;
- (void)stopPropertyUpdates;
- (NSArray *)availableControllers;
- (NSArray *)availableRemoteControllers;
- (void)sendObject:(NSObject *)arg0 toAllControllersExcept:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)becomeMaster;
- (void)transitionToSlaveWithCompletion:(id /* block */)arg0;
- (void)netServiceBrowserWillSearch:(NSNetServiceBrowser *)arg0;
- (void)netServiceBrowserDidStopSearch:(NSNetServiceBrowser *)arg0;
- (void)netServiceBrowser:(NSNetServiceBrowser *)arg0 didNotSearch:(NSDictionary *)arg1;
- (void)netServiceBrowser:(NSNetServiceBrowser *)arg0 didFindService:(NSNetService *)arg1 moreComing:(char)arg2;
- (void)netServiceBrowser:(NSNetServiceBrowser *)arg0 didRemoveService:(NSNetService *)arg1 moreComing:(char)arg2;
- (NSNetServiceBrowser *)browser;
- (void)setBrowser:(NSNetServiceBrowser *)arg0;

@end
