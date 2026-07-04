/* Runtime dump - MFGroupDetailViewController
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFGroupDetailViewController : UITableViewController
{
    <MFGroupDetailViewControllerDelegate> * _delegate;
    MFRecentComposeRecipientGroup * _group;
}

@property (nonatomic) <MFGroupDetailViewControllerDelegate> * delegate;
@property (retain, nonatomic) MFRecentComposeRecipientGroup * group;

- (void)_removeButtonTapped:(id)arg0;
- (void)dealloc;
- (void)setDelegate:(<MFGroupDetailViewControllerDelegate> *)arg0;
- (float)tableView:(UITableView *)arg0 heightForRowAtIndexPath:(NSIndexPath *)arg1;
- (void)tableView:(UITableView *)arg0 didSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (int)tableView:(UITableView *)arg0 numberOfRowsInSection:(int)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (int)numberOfSectionsInTableView:(UITableView *)arg0;
- (<MFGroupDetailViewControllerDelegate> *)delegate;
- (MFGroupDetailViewController *)initWithStyle:(int)arg0;
- (void)viewWillDisappear:(char)arg0;
- (void)setGroup:(MFRecentComposeRecipientGroup *)arg0;
- (MFRecentComposeRecipientGroup *)group;

@end
