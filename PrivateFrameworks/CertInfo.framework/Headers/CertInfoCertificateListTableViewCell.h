/* Runtime dump - CertInfoCertificateListTableViewCell
 * Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

@interface CertInfoCertificateListTableViewCell : UITableViewCell
{
    CertInfoCertificateListCellContentView * _certificateContentView;
}

- (void)layoutSubviews;
- (CertInfoCertificateListTableViewCell *)initWithStyle:(int)arg0 reuseIdentifier:(NSString *)arg1;
- (void).cxx_destruct;
- (void)updateWithTrustDescription:(struct __SecTrust *)arg0 certificateIndex:(unsigned int)arg1;

@end
