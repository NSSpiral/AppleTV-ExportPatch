/* Runtime dump - ACUIViewController
 * Image: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
 */

@interface ACUIViewController : PSListController <ACUIAccountOperationsDelegate>
{
    NSTimer * _idleJiggleTimer;
    void * _powerAssertion;
    char _addedToTaskList;
    char _activityInProgress;
    id _confirmationViewCompletion;
    UIProgressHUD * _hud;
    char _validationInProgress;
    UIBarButtonItem * _doneButton;
    UIBarButtonItem * _cancelButton;
    ACAccountStore * _accountStore;
    ACUIAccountOperationsHelper * _accountOperationsHelper;
    <ACUIViewControllerAccountChangeObserver> * _accountChangeObserver;
}

@property (retain, nonatomic) UIBarButtonItem * doneButton;
@property (retain, nonatomic) UIBarButtonItem * cancelButton;
@property (retain, nonatomic) ACAccountStore * accountStore;
@property (retain, nonatomic) ACUIAccountOperationsHelper * accountOperationsHelper;
@property (weak, nonatomic) <ACUIViewControllerAccountChangeObserver> * accountChangeObserver;
@property (nonatomic) char validationInProgress;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (char)shouldPresentAsModalSheet;
+ (NSObject *)acuiAccountStore;

- (UIBarButtonItem *)doneButton;
- (void)setDoneButton:(UIBarButtonItem *)arg0;
- (void)dealloc;
- (ACUIViewController *)init;
- (void)actionSheet:(UIActionSheet *)arg0 didDismissWithButtonIndex:(int)arg1;
- (void)alertView:(UIAlertView *)arg0 didDismissWithButtonIndex:(int)arg1;
- (UIBarButtonItem *)cancelButton;
- (void)setCancelButton:(UIBarButtonItem *)arg0;
- (void)viewDidLoad;
- (void)dismissAnimated:(char)arg0;
- (void).cxx_destruct;
- (void)_preventSleepAndDimming:(char)arg0;
- (void)hideActivityInProgressUI;
- (char)isPresentedAsModalSheet;
- (id)_alertViewWithButtons:(NSArray *)arg0 title:(NSString *)arg1 message:(NSString *)arg2 cancelButtonIndex:(int)arg3 context:(NSObject *)arg4;
- (id)_actionSheetWithButtons:(NSArray *)arg0 title:(NSString *)arg1 destructive:(char)arg2 cancelButtonIndex:(int)arg3 context:(NSObject *)arg4;
- (void)setTaskCompletionAssertionEnabled:(char)arg0;
- (id)showConfirmationViewWithButtons:(NSArray *)arg0 title:(NSString *)arg1 message:(NSString *)arg2 destructive:(char)arg3 cancelButtonIndex:(int)arg4 context:(NSObject *)arg5 forceAlert:(char)arg6 completion:(id /* block */)arg7;
- (id)showConfirmationViewWithButtons:(NSArray *)arg0 title:(NSString *)arg1 message:(NSString *)arg2 destructive:(char)arg3 cancelButtonIndex:(int)arg4 context:(NSObject *)arg5 completion:(id /* block */)arg6;
- (id)showAlertViewWithButtons:(NSArray *)arg0 title:(NSString *)arg1 message:(NSString *)arg2 destructive:(char)arg3 cancelButtonIndex:(int)arg4 context:(NSObject *)arg5 completion:(id /* block */)arg6;
- (id)showConfirmationViewWithButtons:(NSArray *)arg0 title:(NSString *)arg1 message:(NSString *)arg2 destructive:(char)arg3 context:(NSObject *)arg4 completion:(id /* block */)arg5;
- (void)startValidationWithPrompt:(NSString *)arg0 userInteraction:(char)arg1;
- (char)validationInProgress;
- (void)setValidationInProgress:(char)arg0;
- (NSObject *)_effectiveParentController;
- (void)reloadParentSpecifier;
- (void)reloadAllParentSpecifiersAnimated:(char)arg0;
- (void)reloadAllParentSpecifiers;
- (void)_jiggleIdleTimerFired;
- (void)operationsHelper:(NSObject *)arg0 willSaveAccount:(NSObject *)arg1;
- (void)operationsHelper:(NSObject *)arg0 didSaveAccount:(NSObject *)arg1 withSuccess:(char)arg2 error:(NSError *)arg3;
- (void)operationsHelper:(NSObject *)arg0 willRemoveAccount:(NSObject *)arg1;
- (void)operationsHelper:(NSObject *)arg0 didRemoveAccount:(NSObject *)arg1 withSuccess:(char)arg2 error:(NSError *)arg3;
- (NSObject *)operationsHelper:(NSObject *)arg0 desiredDataclassActionFromPicker:(id)arg1;
- (id)showAlertViewWithButtons:(NSArray *)arg0 title:(NSString *)arg1 message:(NSString *)arg2 destructive:(char)arg3 context:(NSObject *)arg4 completion:(id /* block */)arg5;
- (NSNumber *)showConfirmationViewForDeletingAccount:(NSObject *)arg0 context:(NSObject *)arg1 completion:(id /* block */)arg2;
- (void)updateValidationPrompt:(NSString *)arg0;
- (void)removeParentSpecifier;
- (ACUIAccountOperationsHelper *)accountOperationsHelper;
- (void)showActivityInProgressUIWithMessage:(NSString *)arg0;
- (void)hideActivityInProgressUIWithDelay:(double)arg0;
- (char)isShowingActivityInProgressUI;
- (void)setAccountOperationsHelper:(ACUIAccountOperationsHelper *)arg0;
- (void)setAccountChangeObserver:(<ACUIViewControllerAccountChangeObserver> *)arg0;
- (<ACUIViewControllerAccountChangeObserver> *)accountChangeObserver;
- (void)doneButtonTapped:(id)arg0;
- (void)startValidationWithPrompt:(NSString *)arg0;
- (void)stopValidationWithPrompt:(NSString *)arg0 showButtons:(char)arg1;
- (void)setCellsChecked:(char)arg0;
- (void)confirmationView:(NSObject *)arg0 clickedButtonAtIndex:(int)arg1;
- (void)cancelButtonTapped:(id)arg0;
- (ACAccountStore *)accountStore;
- (void)setAccountStore:(ACAccountStore *)arg0;
- (NSArray *)specifiers;
- (char)shouldReloadSpecifiersOnResume;

@end
