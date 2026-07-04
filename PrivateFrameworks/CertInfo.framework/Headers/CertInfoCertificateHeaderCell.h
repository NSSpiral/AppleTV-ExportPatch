/* Runtime dump - CertInfoCertificateHeaderCell
 * Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

@interface CertInfoCertificateHeaderCell : UITableViewCell
{
    UIImage * _certificateImage;
    UIImage * _notTrustedGradient;
    UILabel * _titleLabel;
    UILabel * _subtitleLabel;
    CertInfoGradientLabel * _trustedLabel;
}

- (NSString *)_subtitleLabel;
- (void)layoutSubviews;
- (float)rowHeight;
- (CertInfoCertificateHeaderCell *)initWithStyle:(int)arg0 reuseIdentifier:(NSString *)arg1;
- (UILabel *)_titleLabel;
- (void).cxx_destruct;
- (void)setTrustTitle:(NSString *)arg0;
- (void)setTrustSubtitle:(NSString *)arg0;
- (UIImage *)_certificateImage;
- (NSString *)_trustedLabel;
- (UIImage *)_notTrustedGradient;
- (void)setExpired:(char)arg0;

@end
