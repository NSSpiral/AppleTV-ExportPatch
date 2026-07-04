/* Runtime dump - BTDevicePicker
 * Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@interface BTDevicePicker : NSObject <UIAlertViewDelegate, UITableViewDelegate, UITableViewDataSource>
{
    UIAlertView * _alertView;
    UITableView * _tableView;
    NSMutableArray * _deviceList;
    <BTDevicePickerDelegate> * _delegate;
    NSString * _title;
    unsigned int _service;
    NSPredicate * _predicate;
    char _showingAlert;
    char _checkingPaired;
    PSSpecifierStub * _connectingSpec;
    BluetoothManager * _btManager;
    Class _btSSPRequestClass;
    Class _btAlertClass;
    id _btSSPAlert;
    id _btAlert;
}

@property (nonatomic) <BTDevicePickerDelegate> * delegate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)powerChanged:(NSNotification *)arg0;
- (void)deviceDiscoveryStoppedHandler:(id /* block */)arg0;
- (void)deviceFoundHandler:(id /* block */)arg0;
- (void)deviceLostHandler:(id /* block */)arg0;
- (void)deviceNameChangedHandler:(id /* block */)arg0;
- (void)authenticationRequestHandler:(id /* block */)arg0;
- (void)devicePairedHandler:(id /* block */)arg0;
- (void)deviceConnectionCompleteHandler:(id /* block */)arg0;
- (void)checkAttachTimeout;
- (void)showInternal;
- (void)cleanupPairing;
- (void)_btSSPConfirmationHandler:(id /* block */)arg0;
- (void)_btSSPNumericComparisonHandler:(id /* block */)arg0;
- (void)_btSSPPasskeyDisplayHandler:(id /* block */)arg0;
- (BTDevicePicker *)initWithTitle:(NSString *)arg0 service:(unsigned int)arg1 discoveryNameFilter:(NSObject *)arg2;
- (void)alertSheetDismissed:(id)arg0;
- (void)show;
- (void)dealloc;
- (void)setDelegate:(<BTDevicePickerDelegate> *)arg0;
- (void)tableView:(UITableView *)arg0 didSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (int)tableView:(UITableView *)arg0 numberOfRowsInSection:(int)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (<BTDevicePickerDelegate> *)delegate;
- (void)applicationWillResignActive:(id)arg0;
- (void)alertView:(UIAlertView *)arg0 clickedButtonAtIndex:(int)arg1;
- (void)dismissAnimated:(char)arg0;
- (void)startScanning;

@end
