/* Runtime dump - CertInfoTrustDetailsView
 * Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

@interface CertInfoTrustDetailsView : UIView
{
    NSArray * _certificateViews;
    CertInfoCertificateDetailsView * _currentCertView;
}

- (void)layoutSubviews;
- (void).cxx_destruct;
- (CertInfoTrustDetailsView *)initWithFrame:(struct CGRect)arg0 trustProperties:(struct CGSize)arg1;
- (void)_appendRemainingCertificates;

@end
