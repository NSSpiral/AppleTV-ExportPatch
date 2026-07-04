/* Runtime dump - EAAccessoryManager
 * Image: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
 */

@interface EAAccessoryManager : NSObject <EABluetoothAccessoryPickerDelegate>
{
    NSMutableArray * _connectedAccessories;
    NSMutableArray * _sequesteredAccessories;
    NSString * _selectedBluetoothAddress;
    EABluetoothAccessoryPicker * _picker;
    id _pickerCompletion;
    char _sequesterNewAccessories;
    NSTimer * _pickerTimer;
    NSObject<OS_dispatch_queue> * _connectionQueue;
}

@property (readonly, nonatomic) NSArray * connectedAccessories;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (EAAccessoryManager *)sharedAccessoryManager;
+ (void)registerCapabilities:(unsigned int)arg0;
+ (void)accessibilityStartListening;
+ (void)accessibilityStopListening;
+ (char)isLoggingEnabled;

- (void)_externalAccessoryConnected:(id)arg0;
- (void)_externalAccessoryUpdated:(id)arg0;
- (void)_externalAccessoryDisconnected:(id)arg0;
- (void)_pointOfInterestStatusReceived:(id)arg0;
- (void)_iapServerDied:(id)arg0;
- (void)_externalAccessoryReconnected:(id)arg0;
- (void)_timeSyncInfoUpdated:(id)arg0;
- (void)_vehicleDataUpdated:(id)arg0;
- (EAAccessoryManager *)_initFromSingletonCreationMethod;
- (void)unregisterForLocalNotifications;
- (void)_locationNmeaDataAvailable:(id)arg0;
- (void)_locationPointDataAvailable:(id)arg0;
- (void)_ephemerisURLAvailable:(id)arg0;
- (void)_nmeaFilteringSupportChanged:(NSNotification *)arg0;
- (void)_gpsTimeRequested:(id)arg0;
- (void)_removeAllAccessoriesFromArray:(NSArray *)arg0 notifyClients:(char)arg1;
- (void)_cleanUpForTaskSuspend;
- (void)_checkForConnectedAccessories;
- (char)_shouldCheckForConnectedAccessories;
- (char)_iAPAccessoriesMatchEAConnectedAccessoriesList:(NSArray *)arg0;
- (void)_notifyObserversThatAccessoryDisconnectedWithUserInfo:(NSDictionary *)arg0;
- (void)_integrateSequesteredAccessories;
- (NSArray *)connectedAccessories;
- (void)_handleAccessoryNotificationTimeout:(id)arg0;
- (void)devicePicker:(BTDevicePicker *)arg0 didSelectAddress:(NSString *)arg1 errorCode:(int)arg2;
- (void)showBluetoothAccessoryPickerWithNameFilter:(NSObject *)arg0 completion:(id /* block */)arg1;
- (void)registerForLocalNotifications;
- (id)availableAccessories;
- (void)openCompleteForSession:(unsigned int)arg0 connectionID:(unsigned int)arg1;
- (void)wakeAccessoryWithToken:(NSString *)arg0;
- (char)appDeclaresProtocol:(NSObject *)arg0;
- (NSArray *)_connectedAccessories;
- (char)shouldAllowInternalProtocols;
- (void)setShouldAllowInternalProtocols:(char)arg0;
- (char)shouldAllowCppRuntime;
- (void)setShouldAllowCppRuntime:(char)arg0;
- (char)areLocationAccessoriesEnabled;
- (void)setAreLocationAccessoriesEnabled:(char)arg0;
- (void)pointOfInterestSelection:(id)arg0;
- (void)initiateConnectionToIPAccessory:(id)arg0;
- (void)disconnectIPAccessory:(id)arg0;
- (void)startIPAccessoryDiscovery;
- (void)stopIPAccessoryDiscovery;
- (void)dealloc;
- (EAAccessoryManager *)init;
- (void)_applicationDidEnterBackground:(NSNotification *)arg0;
- (void)_applicationWillEnterForeground:(NSNotification *)arg0;
- (void)endSession:(unsigned int)arg0 forConnectionID:(unsigned int)arg1;
- (void)accessibilityContextChange:(NSDictionary *)arg0;
- (void)accessibilityAction:(NSObject *)arg0;
- (void)accessibilityItemPropertyRequest:(NSURLRequest *)arg0;
- (void)accessibilitySystemPropertyChange:(NSDictionary *)arg0;
- (void)accessibilitySystemPropertyRequest:(NSURLRequest *)arg0;

@end
