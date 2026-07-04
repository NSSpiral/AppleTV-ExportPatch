/* Runtime dump - CertInfoCertificateListController
 * Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

@interface CertInfoCertificateListController : UITableViewController
{
    <CertInfoTrustDescription> * _description;
}

- (float)tableView:(UITableView *)arg0 heightForRowAtIndexPath:(NSIndexPath *)arg1;
- (void)tableView:(UITableView *)arg0 didSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (int)tableView:(UITableView *)arg0 numberOfRowsInSection:(int)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (int)numberOfSectionsInTableView:(UITableView *)arg0;
- (char)shouldAutorotateToInterfaceOrientation:(int)arg0;
- (void).cxx_destruct;
- (CertInfoCertificateListController *)initWithTrustDescription:(struct __SecTrust *)arg0;

@end
