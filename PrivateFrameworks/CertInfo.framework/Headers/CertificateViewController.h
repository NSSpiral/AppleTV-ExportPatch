/* Runtime dump - CertificateViewController
 * Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

@interface CertificateViewController : UITableViewController
{
    char _certificateIsRoot;
    char _showCertificateButton;
    char _certificateButtonIsDestructiveAction;
    id _certificateTrust;
    int _certUIAction;
    NSString * _certificateTitle;
    NSString * _certificateIssuer;
    NSString * _certificatePurpose;
    NSDate * _certificateExpiration;
    NSArray * _certificateProperties;
    NSString * _certificateButtonTitle;
    NSString * _certificateButtonDescription;
    id _certificateButtonActionHandler;
}

@property (retain, nonatomic) id certificateTrust;
@property (nonatomic) int certUIAction;
@property (retain, nonatomic) NSString * certificateTitle;
@property (retain, nonatomic) NSString * certificateIssuer;
@property (retain, nonatomic) NSString * certificatePurpose;
@property (retain, nonatomic) NSDate * certificateExpiration;
@property (retain, nonatomic) NSArray * certificateProperties;
@property (nonatomic) char certificateIsRoot;
@property (nonatomic) char showCertificateButton;
@property (retain, nonatomic) NSString * certificateButtonTitle;
@property (retain, nonatomic) NSString * certificateButtonDescription;
@property (nonatomic) char certificateButtonIsDestructiveAction;
@property (copy, nonatomic) id certificateButtonActionHandler;

- (void)dealloc;
- (CertificateViewController *)init;
- (float)tableView:(UITableView *)arg0 estimatedHeightForRowAtIndexPath:(NSIndexPath *)arg1;
- (char)tableView:(UITableView *)arg0 shouldHighlightRowAtIndexPath:(NSIndexPath *)arg1;
- (void)tableView:(UITableView *)arg0 didSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (int)tableView:(UITableView *)arg0 numberOfRowsInSection:(int)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (int)numberOfSectionsInTableView:(UITableView *)arg0;
- (NSObject *)tableView:(UITableView *)arg0 titleForFooterInSection:(int)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(char)arg0;
- (void)viewDidLoad;
- (void)viewDidDisappear:(char)arg0;
- (void).cxx_destruct;
- (CertificateViewController *)initWithTrust:(struct __SecTrust *)arg0 action:(int)arg1;
- (void)preferredContentSizeChanged:(NSNotification *)arg0;
- (void)setCertificateTitle:(NSString *)arg0;
- (void)setCertificateIssuer:(NSString *)arg0;
- (void)setCertificatePurpose:(NSString *)arg0;
- (void)setCertificateExpiration:(NSDate *)arg0;
- (void)setCertificateProperties:(NSArray *)arg0;
- (void)setCertificateIsRoot:(char)arg0;
- (void)setCertUIAction:(int)arg0;
- (void)setShowCertificateButton:(char)arg0;
- (void)setCertificateButtonTitle:(NSString *)arg0;
- (void)setCertificateButtonDescription:(NSString *)arg0;
- (void)setCertificateButtonActionHandler:(id /* block */)arg0;
- (void)setCertificateButtonIsDestructiveAction:(char)arg0;
- (char)showCertificateButton;
- (NSString *)certificateButtonDescription;
- (struct __SecTrust *)certificateTrust;
- (NSString *)certificateTitle;
- (NSString *)certificateIssuer;
- (char)certificateIsRoot;
- (int)certUIAction;
- (NSDate *)certificateExpiration;
- (NSString *)certificateButtonTitle;
- (char)certificateButtonIsDestructiveAction;
- (NSArray *)certificateProperties;
- (id /* block */)certificateButtonActionHandler;
- (void)setCertificateTitle:(NSString *)arg0 issuer:(id)arg1 purpose:(id)arg2 expiration:(NSDate *)arg3 properties:(NSDictionary *)arg4 isRoot:(char)arg5 action:(int)arg6;
- (void)setShowCertificateButton:(char)arg0 localizedTitle:(NSString *)arg1 localizedDescription:(NSString *)arg2 destructive:(char)arg3 handler:(id /* block */)arg4;
- (void)setCertificateTrust:(NSObject *)arg0;
- (NSString *)certificatePurpose;

@end
