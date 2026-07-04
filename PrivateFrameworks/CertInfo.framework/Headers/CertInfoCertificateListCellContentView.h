/* Runtime dump - CertInfoCertificateListCellContentView
 * Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

@interface CertInfoCertificateListCellContentView : UIView
{
    UILabel * _titleLabel;
    UILabel * _subtitleLabel;
    UILabel * _expirationLabel;
}

- (CertInfoCertificateListCellContentView *)initWithFrame:(struct CGRect)arg0;
- (void)layoutSubviews;
- (void)setTitle:(NSString *)arg0;
- (void)setSubtitle:(NSString *)arg0;
- (void).cxx_destruct;
- (void)_setupLabel:(NSString *)arg0 isSubtitle:(char)arg1;
- (void)_setText:(NSString *)arg0 forLabel:(NSString *)arg1 withRedColor:(char)arg2;
- (void)setExpiration:(NSDate *)arg0;

@end
