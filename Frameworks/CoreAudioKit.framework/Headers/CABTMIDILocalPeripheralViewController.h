/* Runtime dump - CABTMIDILocalPeripheralViewController
 * Image: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
 */

@interface CABTMIDILocalPeripheralViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate>
{
    AMSBTLEAdvertisementManager * advertisingManager;
    NSString * statusString;
    UITextField * serviceNameField;
    char advertising;
    char isErrorMessage;
    UIActivityIndicatorView * indicator;
    NSString * theServiceName;
    int advertiseTimeout;
    NSTimer * advertiseTimer;
    NSTimer * messageTimer;
    char didCleanup;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)didChangePreferredContentSize:(NSObject *)arg0;
- (NSString *)advertisedServiceName;
- (void)advertiseTimerFired:(id)arg0;
- (void)updateAdvertiseUI;
- (void)activateController:(BRController *)arg0;
- (void)deactivateController:(BRController *)arg0;
- (char)advertiseServiceWithName:(NSString *)arg0 completionBlock:(id /* block */)arg1 error:(/* block */ id)arg2;
- (char)stopAdvertisingServiceWithCompletionBlock:(id /* block */)arg0 error:(/* block */ id)arg1;
- (void)setStatusString:(NSString *)arg0 animateIndicator:(char)arg1 isError:(char)arg2;
- (void)textFieldDone:(id)arg0;
- (void)advertiseServiceSwitchToggled:(id)arg0;
- (char)changeServiceNameTo:(id)arg0 completionBlock:(id /* block */)arg1 error:(/* block */ id)arg2;
- (void)messageTimerFired:(id)arg0;
- (char)disconnectLocalPeripheral;
- (void)dealloc;
- (int)tableView:(UITableView *)arg0 numberOfRowsInSection:(int)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (int)numberOfSectionsInTableView:(UITableView *)arg0;
- (NSString *)tableView:(UITableView *)arg0 titleForHeaderInSection:(int)arg1;
- (void)didReceiveMemoryWarning;
- (NSString *)title;
- (CABTMIDILocalPeripheralViewController *)initWithNibName:(NSString *)arg0 bundle:(NSObject *)arg1;
- (void)loadView;
- (void)textFieldDidBeginEditing:(UITextField *)arg0;
- (void)textFieldDidEndEditing:(UITextField *)arg0;
- (void)viewDidLoad;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (void)cleanup;
- (void)stopTimers;
- (NSString *)statusString;

@end
