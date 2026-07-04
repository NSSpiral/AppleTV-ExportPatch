/* Runtime dump - AAUIAccountValidationController
 * Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUIAccountValidationController : NSObject <AAUIRemoteUIRepairFlowDelegate>
{
    ACAccount * _account;
    AAUIAccountRepairRemoteUI * _accountRepairRemoteUI;
    ACUIViewController * _presentingViewController;
    AAUIRemoteUIRepairFlow * _flow;
    char _isPresentedModally;
    char _inHSAVerification;
    <AAUIAccountValidationControllerDelegate> * _delegate;
}

@property (weak, nonatomic) <AAUIAccountValidationControllerDelegate> * delegate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)setDelegate:(<AAUIAccountValidationControllerDelegate> *)arg0;
- (<AAUIAccountValidationControllerDelegate> *)delegate;
- (void).cxx_destruct;
- (void)attemptHSALoginWithCompletion:(id /* block */)arg0;
- (void)repairFlowWillShowViewController:(BRController *)arg0;
- (void)repairFlowWillHideViewController:(BRController *)arg0;
- (AAUIAccountValidationController *)initWithAccount:(ACAccount *)arg0 presentingViewController:(ACUIViewController *)arg1 modal:(char)arg2;
- (void)startHSAVerificationFlow;

@end
