/* Runtime dump - UIPrintStatusJobsViewController
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPrintStatusJobsViewController : UITableViewController
{
    NSArray * _jobs;
    char _autoPush;
    UIPrintingMessageView * _noJobsView;
}

- (void)dealloc;
- (UIPrintStatusJobsViewController *)init;
- (void)tableView:(UITableView *)arg0 didSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (int)tableView:(UITableView *)arg0 numberOfRowsInSection:(int)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (void)tableView:(UITableView *)arg0 commitEditingStyle:(int)arg1 forRowAtIndexPath:(NSIndexPath *)arg2;
- (void)loadView;
- (char)shouldAutorotateToInterfaceOrientation:(int)arg0;
- (void)viewWillAppear:(char)arg0;
- (void)viewWillDisappear:(char)arg0;
- (void)willReappear;
- (void)pushJob:(id)arg0 animated:(char)arg1;
- (id)visibleJobs;
- (void)updateTableViewCell:(NSObject *)arg0 withJob:(UIPDFPageRenderJob *)arg1;
- (void)updateForJobCountChange;
- (void)updateJobInfo:(NSDictionary *)arg0;
- (void)pushSingleJobAnimated:(char)arg0;
- (void)handleJobListDidChange;

@end
