/* Runtime dump - CertificateSummaryTableViewCell
 * Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

@interface CertificateSummaryTableViewCell : CertUIItemSummaryCell

- (void)updateWithCertificateTrust:(struct __SecTrust *)arg0;
- (void)setCertificateName:(NSString *)arg0 issuer:(id)arg1 isRoot:(char)arg2;

@end
