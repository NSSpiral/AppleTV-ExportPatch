/* Runtime dump - UIPrintPanelTableViewController
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPrintPanelTableViewController : UITableViewController
{
    UIPrintPanelViewController * _printPanelViewController;
    int _rangeRow;
    int _copiesRow;
    int _duplexRow;
    int _paperRow;
    char _contactingPrinter;
    char _printerWarningWasShown;
}

- (void)dealloc;
- (char)tableView:(UITableView *)arg0 shouldHighlightRowAtIndexPath:(NSIndexPath *)arg1;
- (void)tableView:(UITableView *)arg0 didSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (int)tableView:(UITableView *)arg0 numberOfRowsInSection:(int)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (int)numberOfSectionsInTableView:(UITableView *)arg0;
- (NSObject *)tableView:(UITableView *)arg0 titleForFooterInSection:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (char)shouldAutorotateToInterfaceOrientation:(int)arg0;
- (void)viewWillAppear:(char)arg0;
- (void)viewDidLoad;
- (void)viewDidDisappear:(char)arg0;
- (void)_updateSize;
- (void)showCancelButton;
- (UIPrintPanelTableViewController *)initWithPrintPanelViewController:(UIPrintPanelViewController *)arg0;
- (void)clearPrintPanelViewController;
- (void)setShowContactingPrinter:(char)arg0;
- (void)_update:(char)arg0;
- (void)showContacting;
- (void)updateCopies:(id)arg0;
- (void)updateDuplex:(id)arg0;
- (void)updatePageRange:(struct _NSRange)arg0;

@end
