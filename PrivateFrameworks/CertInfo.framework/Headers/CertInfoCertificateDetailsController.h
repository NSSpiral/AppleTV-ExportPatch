/* Runtime dump - CertInfoCertificateDetailsController
 * Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

@interface CertInfoCertificateDetailsController : UITableViewController
{
    <CertInfoCertificateDetailsControllerDelegate> * _delegate;
    NSArray * _sectionDictionaries;
    UIBarButtonItem * _doneButton;
    id _showsDoneButton;
}

@property (weak, nonatomic) <CertInfoCertificateDetailsControllerDelegate> * delegate;
@property (nonatomic) char showsDoneButton;

- (void)setShowsDoneButton:(char)arg0;
- (char)showsDoneButton;
- (CertInfoCertificateDetailsController *)initWithTrust:(struct __SecTrust *)arg0;
- (void)setDelegate:(<CertInfoCertificateDetailsControllerDelegate> *)arg0;
- (void)tableView:(UITableView *)arg0 didSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (char)tableView:(UITableView *)arg0 shouldShowMenuForRowAtIndexPath:(NSIndexPath *)arg1;
- (char)tableView:(UITableView *)arg0 canPerformAction:(SEL)arg1 forRowAtIndexPath:(NSIndexPath *)arg2 withSender:(NSObject *)arg3;
- (void)tableView:(UITableView *)arg0 performAction:(SEL)arg1 forRowAtIndexPath:(NSIndexPath *)arg2 withSender:(NSObject *)arg3;
- (int)tableView:(UITableView *)arg0 numberOfRowsInSection:(int)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (int)numberOfSectionsInTableView:(UITableView *)arg0;
- (NSString *)tableView:(UITableView *)arg0 titleForHeaderInSection:(int)arg1;
- (<CertInfoCertificateDetailsControllerDelegate> *)delegate;
- (char)shouldAutorotateToInterfaceOrientation:(int)arg0;
- (void).cxx_destruct;
- (CertInfoCertificateDetailsController *)initWithCertificateProperties:(NSArray *)arg0;
- (CertInfoCertificateDetailsController *)initWithTrust:(struct __SecTrust *)arg0 certificateIndex:(long)arg1;
- (NSDictionary *)_sectionsForProperties:(NSDictionary *)arg0;
- (void)_doneButtonPressed:(id)arg0;
- (NSDictionary *)_sectionsForProperties:(NSDictionary *)arg0 currentSectionDictionary:(NSDictionary *)arg1;
- (NSString *)_propertiesForIndexPath:(NSIndexPath *)arg0;

@end
