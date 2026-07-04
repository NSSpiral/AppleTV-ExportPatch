/* Runtime dump - UIPrintStatusTableViewController
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPrintStatusTableViewController : UITableViewController
{
    PKJob * _printJob;
    NSDateFormatter * _sentFormatter;
}

- (void)dealloc;
- (float)tableView:(UITableView *)arg0 heightForRowAtIndexPath:(NSIndexPath *)arg1;
- (void)tableView:(UITableView *)arg0 didSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (int)tableView:(UITableView *)arg0 numberOfRowsInSection:(int)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (int)numberOfSectionsInTableView:(UITableView *)arg0;
- (void)loadView;
- (char)shouldAutorotateToInterfaceOrientation:(int)arg0;
- (void)viewWillAppear:(char)arg0;
- (void)viewWillDisappear:(char)arg0;
- (void)cancelPrinting;
- (void)updateCancelButton;
- (void)popToJobsView;
- (void)updateJobInfo;
- (UIPrintStatusTableViewController *)initWithJob:(UIPDFPageRenderJob *)arg0;

@end
