/* Runtime dump - CertInfoSheetViewController
 * Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

@interface CertInfoSheetViewController : UIViewController
{
    NSString * _serviceName;
    NSString * _trustTitle;
    NSString * _trustSubtitle;
    NSString * _trustPurpose;
    NSDate * _trustExpiration;
    NSArray * _trustProperties;
    <CertInfoSheetViewControllerDelegate> * _delegate;
}

@property (retain, nonatomic) NSString * serviceName;
@property (retain, nonatomic) NSString * trustTitle;
@property (retain, nonatomic) NSString * trustSubtitle;
@property (retain, nonatomic) NSString * trustPurpose;
@property (retain, nonatomic) NSDate * trustExpiration;
@property (retain, nonatomic) NSArray * trustProperties;
@property (weak, nonatomic) <CertInfoSheetViewControllerDelegate> * delegate;

- (void)setDelegate:(<CertInfoSheetViewControllerDelegate> *)arg0;
- (<CertInfoSheetViewControllerDelegate> *)delegate;
- (void)loadView;
- (char)shouldAutorotateToInterfaceOrientation:(int)arg0;
- (void)viewWillAppear:(char)arg0;
- (void)viewDidDisappear:(char)arg0;
- (void).cxx_destruct;
- (void)_cancel;
- (NSArray *)trustProperties;
- (void)_setupNavItem;
- (void)setTrustProperties:(NSArray *)arg0;
- (void)_dismissWithResult:(int)arg0;
- (void)_accept;
- (NSString *)trustTitle;
- (void)setTrustTitle:(NSString *)arg0;
- (NSString *)trustSubtitle;
- (void)setTrustSubtitle:(NSString *)arg0;
- (NSString *)trustPurpose;
- (NSDate *)trustExpiration;
- (void)_pushDetailsView;
- (void)setTrustPurpose:(NSString *)arg0;
- (void)setTrustExpiration:(NSDate *)arg0;
- (void)setServiceName:(NSString *)arg0;
- (NSString *)serviceName;

@end
