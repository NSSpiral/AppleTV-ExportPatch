/* Runtime dump - ACUISetupViewController
 * Image: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
 */

@interface ACUISetupViewController : PSSetupController
{
    char _didAttemptDataclassSetup;
    char _shouldForceMailSetup;
}

+ (void)showDataclassConfigurationControllerForAccount:(NSObject *)arg0 name:(NSString *)arg1 fromViewController:(BRController *)arg2 specifier:(PSSpecifier *)arg3 completion:(id /* block */)arg4;
+ (NSObject *)_specifierForDataclassEditControllerClass:(Class)arg0 withName:(NSString *)arg1 account:(NSObject *)arg2;

- (void)_dismissAndNotifyParent;
- (void)controller:(BRController *)arg0 didFinishSettingUpAccount:(NSObject *)arg1;
- (void)finishedAccountSetup;

@end
