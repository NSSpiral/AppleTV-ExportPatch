/* Runtime dump - CertInfoTrustDetailsViewController
 * Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

@interface CertInfoTrustDetailsViewController : UIViewController
{
    NSArray * _trustProperties;
}

@property (retain, nonatomic) NSArray * trustProperties;

- (void)loadView;
- (char)shouldAutorotateToInterfaceOrientation:(int)arg0;
- (void)viewWillAppear:(char)arg0;
- (void).cxx_destruct;
- (NSArray *)trustProperties;
- (void)_setupNavItem;
- (void)setTrustProperties:(NSArray *)arg0;

@end
