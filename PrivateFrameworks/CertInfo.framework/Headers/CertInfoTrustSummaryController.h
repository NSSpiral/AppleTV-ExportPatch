/* Runtime dump - CertInfoTrustSummaryController
 * Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

@interface CertInfoTrustSummaryController : UITableViewController
{
    <CertInfoTrustDescription> * _description;
    <CertInfoTrustSummaryControllerDelegate> * _delegate;
    UIBarButtonItem * _doneButton;
    UITableViewCell * _headerCell;
    UITableViewCell * _descriptionCell;
    id _showsDoneButton;
}

@property (weak, nonatomic) <CertInfoTrustSummaryControllerDelegate> * delegate;
@property (nonatomic) char showsDoneButton;

- (void)setShowsDoneButton:(char)arg0;
- (char)showsDoneButton;
- (void)setDelegate:(<CertInfoTrustSummaryControllerDelegate> *)arg0;
- (float)tableView:(UITableView *)arg0 heightForRowAtIndexPath:(NSIndexPath *)arg1;
- (void)tableView:(UITableView *)arg0 didSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (int)tableView:(UITableView *)arg0 numberOfRowsInSection:(int)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (<CertInfoTrustSummaryControllerDelegate> *)delegate;
- (char)shouldAutorotateToInterfaceOrientation:(int)arg0;
- (void)viewDidAppear:(char)arg0;
- (void).cxx_destruct;
- (void)_actionButtonPressed:(id)arg0;
- (CertInfoTrustSummaryController *)initWithTrustDescription:(struct __SecTrust *)arg0;
- (NSString *)_cellForReuseIdentifier:(NSString *)arg0;
- (UITableViewCell *)_headerCell;
- (UITableViewCell *)_descriptionCell;
- (void)_doneButtonPressed:(id)arg0;
- (void)setActionButtonTitle:(NSString *)arg0 destructive:(char)arg1 animated:(char)arg2;

@end
