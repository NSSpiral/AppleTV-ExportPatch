/* Runtime dump - CertificateDetailsViewController
 * Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

@interface CertificateDetailsViewController : UITableViewController
{
    id _certificateTrust;
    NSArray * _keyValueSections;
    NSArray * _keyValueSectionTitles;
}

@property (retain, nonatomic) id certificateTrust;
@property (retain, nonatomic) NSArray * keyValueSections;
@property (retain, nonatomic) NSArray * keyValueSectionTitles;

- (CertificateDetailsViewController *)initWithTrust:(struct __SecTrust *)arg0;
- (void)dealloc;
- (CertificateDetailsViewController *)init;
- (float)tableView:(UITableView *)arg0 estimatedHeightForRowAtIndexPath:(NSIndexPath *)arg1;
- (int)tableView:(UITableView *)arg0 numberOfRowsInSection:(int)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (int)numberOfSectionsInTableView:(UITableView *)arg0;
- (NSString *)tableView:(UITableView *)arg0 titleForHeaderInSection:(int)arg1;
- (void)didReceiveMemoryWarning;
- (CertificateDetailsViewController *)initWithStyle:(int)arg0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)preferredContentSizeChanged:(NSNotification *)arg0;
- (void)setCertificateProperties:(NSArray *)arg0;
- (struct __SecTrust *)certificateTrust;
- (void)setCertificateTrust:(NSObject *)arg0;
- (CertificateDetailsViewController *)initWithCertificate:(struct __SecCertificate *)arg0;
- (CertificateDetailsViewController *)initWithCertificateProperties:(NSArray *)arg0;
- (NSArray *)keyValueSections;
- (NSArray *)keyValueSectionTitles;
- (void)setKeyValueSections:(NSArray *)arg0;
- (void)setKeyValueSectionTitles:(NSArray *)arg0;
- (void)_setup;

@end
