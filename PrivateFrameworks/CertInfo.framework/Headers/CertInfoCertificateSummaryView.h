/* Runtime dump - CertInfoCertificateSummaryView
 * Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

@interface CertInfoCertificateSummaryView : UIView <UITableViewDataSource, UITableViewDelegate>
{
    UITableView * _tableView;
    NSString * _trustTitle;
    NSString * _trustSubtitle;
    NSString * _purpose;
    NSDate * _expirationDate;
    id _moreDetailsSelectedBlock;
    CertInfoCertificateHeaderCell * _headerCell;
    CertInfoCertificateSummaryDescriptionCell * _descriptionCell;
}

@property (readonly, nonatomic) UITableView * tableView;
@property (retain, nonatomic) NSString * trustTitle;
@property (retain, nonatomic) NSString * trustSubtitle;
@property (retain, nonatomic) NSString * purpose;
@property (retain, nonatomic) NSDate * expirationDate;
@property (retain, nonatomic) CertInfoCertificateHeaderCell * headerCell;
@property (retain, nonatomic) CertInfoCertificateSummaryDescriptionCell * descriptionCell;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (CertInfoCertificateSummaryView *)initWithFrame:(struct CGRect)arg0;
- (float)tableView:(UITableView *)arg0 heightForRowAtIndexPath:(NSIndexPath *)arg1;
- (void)tableView:(UITableView *)arg0 didSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (int)tableView:(UITableView *)arg0 numberOfRowsInSection:(int)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (UITableView *)tableView;
- (void).cxx_destruct;
- (void)setExpirationDate:(NSDate *)arg0;
- (NSString *)trustTitle;
- (void)setTrustTitle:(NSString *)arg0;
- (NSString *)trustSubtitle;
- (void)setTrustSubtitle:(NSString *)arg0;
- (void)setMoreDetailsSelectedBlock:(id /* block */)arg0;
- (void)setHeaderCell:(CertInfoCertificateHeaderCell *)arg0;
- (void)setDescriptionCell:(CertInfoCertificateSummaryDescriptionCell *)arg0;
- (NSString *)_cellForReuseIdentifier:(NSString *)arg0;
- (void)_configureCell:(NSObject *)arg0;
- (CertInfoCertificateHeaderCell *)headerCell;
- (CertInfoCertificateSummaryDescriptionCell *)descriptionCell;
- (void)setPurpose:(NSString *)arg0;
- (NSString *)purpose;
- (NSDate *)expirationDate;

@end
