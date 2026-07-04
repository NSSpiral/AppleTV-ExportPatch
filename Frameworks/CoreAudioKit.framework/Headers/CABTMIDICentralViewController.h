/* Runtime dump - CABTMIDICentralViewController
 * Image: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
 */

@interface CABTMIDICentralViewController : UITableViewController <UITableViewDelegate, UITableViewDataSource, BTLEConnectionTable>
{
    NSMutableArray * peripheralList;
    AMSBTLEConnectionManager * connectionManager;
    UIActivityIndicatorView * indicator;
    char didCleanup;
    char inEditingMode;
    NSTimer * connectionTimer;
    NSMutableArray * incompleteConnectionList;
    UIBarButtonItem * editButton;
    UIBarButtonItem * cancelButton;
    UIBarButtonItem * forgetButton;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)didChangePreferredContentSize:(NSObject *)arg0;
- (void)activateController:(BRController *)arg0;
- (void)deactivateController:(BRController *)arg0;
- (void)updateButtonsToMatchTableState;
- (unsigned int)peripheralCount;
- (NSObject *)peripheralAtIndex:(unsigned int)arg0;
- (void)updatePeripheralTable;
- (void)centralTimerFired:(id)arg0;
- (void)cancelAction:(NSObject *)arg0;
- (void)forgetAction:(NSObject *)arg0;
- (void)editAction:(SEL)arg0;
- (void)setUIEnabled:(char)arg0;
- (void)dealloc;
- (float)tableView:(UITableView *)arg0 estimatedHeightForRowAtIndexPath:(NSIndexPath *)arg1;
- (char)tableView:(UITableView *)arg0 shouldHighlightRowAtIndexPath:(NSIndexPath *)arg1;
- (void)tableView:(UITableView *)arg0 didSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (int)tableView:(UITableView *)arg0 editingStyleForRowAtIndexPath:(NSIndexPath *)arg1;
- (NSString *)tableView:(UITableView *)arg0 titleForDeleteConfirmationButtonForRowAtIndexPath:(NSIndexPath *)arg1;
- (int)tableView:(UITableView *)arg0 numberOfRowsInSection:(int)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (int)numberOfSectionsInTableView:(UITableView *)arg0;
- (NSString *)tableView:(UITableView *)arg0 titleForHeaderInSection:(int)arg1;
- (NSString *)tableView:(UITableView *)arg0 titleForFooterInSection:(int)arg1;
- (char)tableView:(UITableView *)arg0 canEditRowAtIndexPath:(NSIndexPath *)arg1;
- (void)tableView:(UITableView *)arg0 commitEditingStyle:(int)arg1 forRowAtIndexPath:(NSIndexPath *)arg2;
- (void)didReceiveMemoryWarning;
- (NSString *)title;
- (void)setEditing:(char)arg0 animated:(char)arg1;
- (CABTMIDICentralViewController *)initWithNibName:(NSString *)arg0 bundle:(NSObject *)arg1;
- (void)loadView;
- (void)viewWillAppear:(char)arg0;
- (void)viewDidLoad;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (void)cleanup;

@end
