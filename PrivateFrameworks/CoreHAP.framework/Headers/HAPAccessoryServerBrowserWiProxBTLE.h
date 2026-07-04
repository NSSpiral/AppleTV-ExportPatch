/* Runtime dump - HAPAccessoryServerBrowserWiProxBTLE
 * Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPAccessoryServerBrowserWiProxBTLE : NSObject <WPHomeKitDelegate>
{
    char _scanInBackground;
    NSObject<OS_dispatch_queue> * _workQueue;
    <HAPAccessoryServerBrowserWiProxBTLEDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    WPHomeKit * _wpHomeKit;
    int _currentScanState;
    NSMutableSet * _trackedIdentifiers;
    NSMutableSet * _trackedPeripherals;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * workQueue;
@property (readonly, weak) <HAPAccessoryServerBrowserWiProxBTLEDelegate> * delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * delegateQueue;
@property (readonly, nonatomic) WPHomeKit * wpHomeKit;
@property (nonatomic) int currentScanState;
@property (nonatomic) char scanInBackground;
@property (readonly, nonatomic) NSMutableSet * trackedIdentifiers;
@property (readonly, nonatomic) NSMutableSet * trackedPeripherals;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (<HAPAccessoryServerBrowserWiProxBTLEDelegate> *)delegate;
- (void).cxx_destruct;
- (NSObject<OS_dispatch_queue> *)delegateQueue;
- (NSObject<OS_dispatch_queue> *)workQueue;
- (HAPAccessoryServerBrowserWiProxBTLE *)initWithDelegate:(<HAPAccessoryServerBrowserWiProxBTLEDelegate> *)arg0 queue:(NSObject *)arg1;
- (void)startBrowsingForHAPBLEAccessories;
- (void)stopBrowsingForHAPBLEAccessories;
- (void)startTrackingHAPBLEAccessoriesWithIdentifiers:(id)arg0;
- (void)stopTrackingHAPBLEAccessoriesWithIdentifiers:(id)arg0;
- (void)probeReachabilityForTrackedAccessories;
- (void)_startBrowsingForHAPBLEAccessories;
- (void)setCurrentScanState:(int)arg0;
- (WPHomeKit *)wpHomeKit;
- (void)_stopBrowsingForHAPBLEAccessories;
- (NSMutableSet *)trackedIdentifiers;
- (char)scanInBackground;
- (void)_startTrackingHAPBLEAccessoriesWithIdentifiers:(id)arg0;
- (int)currentScanState;
- (void)_stopTrackingHAPBLEAccessoriesWithIdentifiers:(id)arg0;
- (void)_removeTrackedPeripheral:(id)arg0;
- (void)_probeReachabilityForTrackedAccessories;
- (NSMutableSet *)trackedPeripherals;
- (void)_reportHAPPeripheral:(id)arg0;
- (void)setScanInBackground:(char)arg0;
- (NSData *)_parseAdvertisementData:(NSData *)arg0 forPeripheral:(CBPeripheral *)arg1;
- (NSString *)_getTrackedPeripheralWithIdentifier:(NSString *)arg0;
- (void)homeKitDidUpdateState:(WPHomeKit *)arg0;
- (void)homeKit:(WPHomeKit *)arg0 foundDevice:(NSUUID *)arg1 withData:(NSDictionary *)arg2;
- (void)homeKitStartedScanning:(WPHomeKit *)arg0;
- (void)homeKitStoppedScanning:(WPHomeKit *)arg0;
- (void)homeKit:(WPHomeKit *)arg0 failedToStartScanningWithError:(NSError *)arg1;
- (void)homeKit:(WPHomeKit *)arg0 allowDuplicate:(char)arg1;

@end
