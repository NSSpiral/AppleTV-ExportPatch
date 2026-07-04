/* Runtime dump - SBUIRemoteAlertServiceViewController
 * Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBUIRemoteAlertServiceViewController : UIViewController <SBUIRemoteAlertServiceInterface>

+ (NSXPCInterface *)_exportedInterface;
+ (SBUIRemoteAlertServiceViewController *)_remoteViewControllerInterface;

- (void)dealloc;
- (void)setUserInfo:(NSDictionary *)arg0;
- (SBUIRemoteAlertServiceViewController *)initWithNibName:(NSString *)arg0 bundle:(NSObject *)arg1;
- (void)handleDoubleHeightStatusBarTap;
- (void)noteActivatedForActivityContinuationWithIdentifier:(NSString *)arg0;
- (void)noteActivatedForCustomReason:(NSString *)arg0;

@end
