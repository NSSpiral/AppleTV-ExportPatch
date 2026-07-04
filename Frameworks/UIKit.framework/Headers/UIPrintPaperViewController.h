/* Runtime dump - UIPrintPaperViewController
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPrintPaperViewController : UITableViewController
{
    UIPrintPanelViewController * _printPanelViewController;
}

- (void)tableView:(UITableView *)arg0 didSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (int)tableView:(UITableView *)arg0 numberOfRowsInSection:(int)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (int)numberOfSectionsInTableView:(UITableView *)arg0;
- (unsigned int)supportedInterfaceOrientations;
- (void)loadView;
- (char)shouldAutorotateToInterfaceOrientation:(int)arg0;
- (void)viewDidDisappear:(char)arg0;
- (UIPrintPaperViewController *)initWithPrintPanelViewController:(UIPrintPanelViewController *)arg0;
- (void)adjustPopoverSize;

@end
