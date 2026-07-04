/* Runtime dump - UIPrinterBrowserViewController
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPrinterBrowserViewController : UITableViewController <PKPrinterBrowserDelegate>
{
    <UIPrinterBrowserOwner> * _ownerPanelViewController;
    PKPrinterBrowser * _printerBrowser;
    NSMutableArray * _preferredPrinters;
    NSMutableArray * _otherPrinters;
    NSMutableArray * _filteredOutPrinters;
    NSArray * _lastUsedPrinters;
    PKPrinter * _lockedPrinter;
    char _loaded;
    UIPrinterSearchingView * _searchingView;
    char _clearCurrentPrinter;
    char _shouldFilterPrinters;
    float _maximumPopoverHeight;
}

@property float maximumPopoverHeight;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)tableView:(UITableView *)arg0 didSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (int)tableView:(UITableView *)arg0 numberOfRowsInSection:(int)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (int)numberOfSectionsInTableView:(UITableView *)arg0;
- (NSString *)tableView:(UITableView *)arg0 titleForHeaderInSection:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (void)loadView;
- (char)shouldAutorotateToInterfaceOrientation:(int)arg0;
- (void)viewWillAppear:(char)arg0;
- (void)viewWillDisappear:(char)arg0;
- (void)viewDidDisappear:(char)arg0;
- (UIPrinterBrowserViewController *)initWithOwnerViewController:(BRController *)arg0;
- (void)showCancelButton;
- (void)stopPrinterBrowser;
- (void)willEnterForeground;
- (float)maximumPopoverHeight;
- (void)adjustPopoverSize;
- (void)startPrinterBrowser;
- (void)updateSearching;
- (NSString *)printerAtIndexPath:(NSIndexPath *)arg0;
- (void)addPrinter:(UIPrinter *)arg0 moreComing:(char)arg1;
- (void)removePrinter:(UIPrinter *)arg0 moreGoing:(char)arg1;
- (void)selectPrinter:(id)arg0;
- (void)setMaximumPopoverHeight:(float)arg0;

@end
