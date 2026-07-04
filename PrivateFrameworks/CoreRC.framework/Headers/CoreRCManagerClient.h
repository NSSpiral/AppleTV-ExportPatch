/* Runtime dump - CoreRCManagerClient
 * Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@interface CoreRCManagerClient : CoreRCManager <CoreRCXPCServiceCEC, CoreRCXPCClientCEC, CoreRCXPCServicePrivate, CoreRCXPCServiceCECPrivate, CoreRCXPCServiceIR, CoreRCXPCService, CoreRCXPCClient>
{
    NSXPCConnection * _connection;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)setDelegate:(<CoreRCManagerDelegate> *)arg0;
- (void)invalidate;
- (NSXPCConnection *)connection;
- (void)addExternalDeviceOnBusAsync:(CoreIRBus *)arg0 reply:(id /* block */)arg1;
- (void)performActiveSourceAsync:(CoreCECDevice *)arg0 withMenus:(char)arg1 reply:(id /* block */)arg2;
- (void)performDeckControlSetDeckStatusAsync:(unsigned int)arg0 forDevice:(CoreCECDevice *)arg1 reply:(id /* block */)arg2;
- (void)performDeckControlCommandAsync:(CoreCECDevice *)arg0 controlMode:(unsigned int)arg1 targetDevice:(CoreCECDevice *)arg2 reply:(id /* block */)arg3;
- (void)performDeckControlPlayAsync:(CoreCECDevice *)arg0 playMode:(unsigned int)arg1 targetDevice:(CoreCECDevice *)arg2 reply:(id /* block */)arg3;
- (void)performDeckControlRefreshStatusAsync:(CoreCECDevice *)arg0 targetDevice:(CoreCECDevice *)arg1 requestType:(unsigned int)arg2 reply:(id /* block */)arg3;
- (void)performInactiveSourceAsync:(CoreCECDevice *)arg0 reply:(id /* block */)arg1;
- (void)performRefreshDevicesAsync:(CoreCECDevice *)arg0 reply:(id /* block */)arg1;
- (void)performRefreshProperties:(NSArray *)arg0 ofDevice:(CoreCECDevice *)arg1 withDeviceAsync:(CoreCECDevice *)arg2 reply:(id /* block */)arg3;
- (void)performRequestActiveSourceAsync:(CoreCECDevice *)arg0 reply:(id /* block */)arg1;
- (void)performSetSystemAudioControlEnabled:(char)arg0 withDeviceAsync:(CoreCECDevice *)arg1 reply:(id /* block */)arg2;
- (void)performSystemAudioModeRequestAsync:(CoreCECDevice *)arg0 withDesiredState:(unsigned int)arg1 reply:(id /* block */)arg2;
- (void)performStandbyAsync:(CoreCECDevice *)arg0 targetDevice:(CoreCECDevice *)arg1 reply:(id /* block */)arg2;
- (void)queryLocalInstanceAsync:(unsigned int)arg0 bus:(CoreCECBus *)arg1 reply:(id /* block */)arg2;
- (void)setOsdNameAsync:(NSString *)arg0 forBus:(CoreCECBus *)arg1 reply:(id /* block */)arg2;
- (void)setTvLanguageCodeAsync:(NSString *)arg0 forBus:(CoreCECBus *)arg1 reply:(id /* block */)arg2;
- (void)cecBus:(CoreCECBus *)arg0 activeSourceHasChangedTo:(CoreCECDevice *)arg1 fromDevice:(CoreCECDevice *)arg2;
- (void)cecDevice:(CoreCECDevice *)arg0 activeSourceStatusHasChanged:(char)arg1;
- (void)cecDevice:(CoreCECDevice *)arg0 deckControlPlayHasBeenReceived:(unsigned int)arg1 fromDevice:(CoreCECDevice *)arg2;
- (void)cecDevice:(CoreCECDevice *)arg0 deckControlCommandHasBeenReceived:(unsigned int)arg1 fromDevice:(CoreCECDevice *)arg2;
- (void)cecDevice:(CoreCECDevice *)arg0 deckControlStatusHasBeenUpdated:(unsigned int)arg1 fromDevice:(CoreCECDevice *)arg2;
- (void)cecDevice:(CoreCECDevice *)arg0 featureAbort:(NSError *)arg1;
- (void)cecDevice:(CoreCECDevice *)arg0 standbyRequestHasBeenReceived:(CoreCECDevice *)arg1;
- (void)bus:(CoreRCBus *)arg0 deviceHasBeenAdded:(CoreRCDevice *)arg1;
- (void)bus:(CoreRCBus *)arg0 deviceHasBeenRemoved:(CoreRCDevice *)arg1;
- (void)bus:(CoreRCBus *)arg0 deviceHasBeenUpdated:(CoreRCDevice *)arg1;
- (void)device:(CoreRCDevice *)arg0 receivedHIDEvent:(CoreRCHIDEvent *)arg1 fromDevice:(CoreRCDevice *)arg2;
- (char)setProperty:(NSString *)arg0 forKey:(NSString *)arg1 ofBus:(CoreRCBus *)arg2 error:(id *)arg3;
- (NSString *)propertyForKey:(NSString *)arg0 ofBus:(CoreRCBus *)arg1 error:(id *)arg2;
- (void)queryLoggingAsync:(id)arg0;
- (void)setLoggingAsync:(NSString *)arg0 reply:(id /* block */)arg1;
- (void)fakeBusCreateAsync:(unsigned int)arg0 reply:(id /* block */)arg1;
- (void)fakeSetBusLinkStateAsync:(CoreCECBus *)arg0 newLinkState:(char)arg1 reply:(id /* block */)arg2;
- (void)fakeCreateRemoteInstanceAsync:(unsigned int)arg0 bus:(CoreCECBus *)arg1 withLogicalAddress:(unsigned char)arg2 withPhysicalAddress:(unsigned int)arg3 reply:(id /* block */)arg4;
- (void)fakeAssignLogicalAddressAsync:(CoreCECDevice *)arg0 logicalAddress:(unsigned char)arg1 reply:(id /* block */)arg2;
- (void)fakeDeviceRemoveAsync:(CoreCECDevice *)arg0 reply:(id /* block */)arg1;
- (char)sendHIDEvent:(NSObject *)arg0 fromDevice:(NSObject *)arg1 toDevice:(NSObject *)arg2 error:(id *)arg3;
- (NSSet *)buses;
- (void)setPropertyAsync:(id)arg0 forKey:(NSString *)arg1 ofBus:(CoreRCBus *)arg2 reply:(id /* block */)arg3;
- (void)getPropertyAsyncForKey:(NSString *)arg0 ofBus:(CoreRCBus *)arg1 reply:(id /* block */)arg2;
- (void)queryBusesAsync:(id)arg0;
- (void)synchBuses:(id)arg0;
- (void)mergeBus:(id)arg0;
- (void)sendHIDEventAsync:(CoreRCHIDEvent *)arg0 fromDevice:(CoreRCDevice *)arg1 toDevice:(CoreRCDevice *)arg2 reply:(id /* block */)arg3;
- (void)busHasBeenAdded:(CoreRCBus *)arg0;
- (void)busHasBeenRemoved:(CoreRCBus *)arg0;
- (void)busHasBeenUpdated:(CoreRCBus *)arg0;

@end
