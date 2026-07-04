/* Runtime dump - TrustCertificateViewController
 * Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

@interface TrustCertificateViewController : UINavigationController
{
    <TrustCertificateViewControllerDelegate> * _trustCertificateDelegate;
    CertificateViewController * _certificateViewController;
}

@property (weak, nonatomic) <TrustCertificateViewControllerDelegate> * trustCertificateDelegate;
@property (retain, nonatomic) CertificateViewController * certificateViewController;

- (void)didReceiveMemoryWarning;
- (void).cxx_destruct;
- (void)_cancel;
- (void)setShowCertificateButton:(char)arg0 localizedTitle:(NSString *)arg1 localizedDescription:(NSString *)arg2 destructive:(char)arg3 handler:(id /* block */)arg4;
- (void)_setupNavItem;
- (void)_dismissWithResult:(int)arg0;
- (void)_accept;
- (CertificateViewController *)certificateViewController;
- (TrustCertificateViewController *)initWithTrustCertificateDelegate:(<TrustCertificateViewControllerDelegate> *)arg0;
- (TrustCertificateViewController *)initWithTrust:(struct __SecTrust *)arg0 action:(int)arg1 delegate:(NSObject *)arg2;
- (void)setCertificateInfo:(NSDictionary *)arg0 issuer:(id)arg1 purpose:(id)arg2 expiration:(NSDate *)arg3 isRoot:(char)arg4 properties:(NSDictionary *)arg5 action:(int)arg6;
- (<TrustCertificateViewControllerDelegate> *)trustCertificateDelegate;
- (void)setTrustCertificateDelegate:(<TrustCertificateViewControllerDelegate> *)arg0;
- (void)setCertificateViewController:(CertificateViewController *)arg0;

@end
