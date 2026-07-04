/* Runtime dump - AXHAController
 * Image: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
 */

@interface AXHAController : NSObject <AXHAControllerBrowserDelegateProtocol>
{
    char _isListening;
    AXHATimer * _liveListenLevelsTimer;
    AXHearingAidDevice * _pairedDevice;
    NSMutableArray * _clients;
    NSMutableDictionary * _handlers;
    NSDictionary * _availableDevicesDescription;
}

@property (retain, nonatomic) AXHearingAidDevice * pairedDevice;
@property (retain, nonatomic) NSMutableArray * clients;
@property (retain, nonatomic) NSMutableDictionary * handlers;
@property (retain, nonatomic) NSDictionary * availableDevicesDescription;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (AXHAController *)sharedController;
+ (NSString *)entitlementsForMessageID:(unsigned long long)arg0;

- (void)dealloc;
- (void)availableRemoteControllersDidChange;
- (AXHearingAidDevice *)pairedDevice;
- (void)connectToPairedDevice;
- (void)passConnectionToController:(BRController *)arg0;
- (NSObject *)currentDeviceController;
- (void)setPairedHearingAid:(id)arg0;
- (void)startSearchCycle;
- (NSObject *)connectToControllerWithID:(int)arg0;
- (id)registerForAvailableDevicesUpdates:(id)arg0;
- (void)addHandler:(id /* block */)arg0 andSelector:(SEL)arg1 forMessageIdentifier:(unsigned long long)arg2;
- (id)registerForDeviceUpdates:(id)arg0;
- (NSObject *)readDeviceProperty:(NSObject *)arg0;
- (NSObject *)writeDeviceProperty:(NSObject *)arg0;
- (id)readAvailableDevices:(id)arg0;
- (id)toggleLiveListen:(id)arg0;
- (id)registerForLiveListenUpdates:(id)arg0;
- (NSArray *)readAvailableControllers:(id)arg0;
- (id)disconnectAndForceSlave:(id)arg0;
- (char)hearingAidsPaired;
- (void)setListenForAvailableDeviceUpdates:(char)arg0;
- (void)trustChainAvailabilityDidChange:(NSDictionary *)arg0;
- (void)setPairedDevice:(AXHearingAidDevice *)arg0;
- (void)setAvailableDevicesDescription:(NSDictionary *)arg0;
- (void)sendUpdateMessage:(NSString *)arg0 forIdentifier:(unsigned long long)arg1;
- (NSObject *)liveListenController;
- (void)readLiveListenLevels;
- (char)connection:(NSURLConnection *)arg0 hasEntitlementForMessage:(unsigned long long)arg1;
- (void)handleMessage:(NSString *)arg0 forIdentifier:(unsigned long long)arg1;
- (NSDictionary *)availableDevicesDescription;
- (char)message:(NSString *)arg0 hasEntitlement:(id)arg1;
- (void)sendUpdatesForProperties:(NSDictionary *)arg0 excludingClient:(NSObject *)arg1;
- (void)startServer;
- (void)handleNewConnection:(NSURLConnection *)arg0;
- (void)sendMessage:(NSString *)arg0 withError:(id *)arg1;
- (void)setHandlers:(NSMutableDictionary *)arg0;
- (NSMutableDictionary *)handlers;
- (void)setClients:(NSMutableArray *)arg0;
- (NSMutableArray *)clients;

@end
