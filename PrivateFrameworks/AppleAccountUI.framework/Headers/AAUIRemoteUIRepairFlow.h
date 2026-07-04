/* Runtime dump - AAUIRemoteUIRepairFlow
 * Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUIRemoteUIRepairFlow : NSObject <AAUIAccountRepairRemoteUIDelegate>
{
    ACAccount * _account;
    AAUIAccountRepairRemoteUI * _remoteUI;
    id _completion;
    <AAUIRemoteUIRepairFlowDelegate> * _delegate;
}

@property (weak, nonatomic) <AAUIRemoteUIRepairFlowDelegate> * delegate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)setDelegate:(<AAUIRemoteUIRepairFlowDelegate> *)arg0;
- (<AAUIRemoteUIRepairFlowDelegate> *)delegate;
- (void).cxx_destruct;
- (void)presentFlowFromViewController:(BRController *)arg0 modal:(char)arg1 completion:(id /* block */)arg2;
- (void)accountRepairRemoteUI:(AAUIAccountRepairRemoteUI *)arg0 account:(ACAccount *)arg1 didFinishWithSuccess:(char)arg2;
- (void)accountRepairRemoteUIWillAppear:(id)arg0;
- (void)accountRepairRemoteUIWillDismiss:(id)arg0;
- (AAUIRemoteUIRepairFlow *)initWithAccount:(ACAccount *)arg0;

@end
