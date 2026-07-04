/* Runtime dump - AAUIBaseSignInViewController
 * Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUIBaseSignInViewController : ACUIViewController <AAUIAccountCreationDelegate, AAUICredentialRecoveryPresentationDelegate, AAUIGenericTermsRemoteUIDelegate, AAUIAccountRepairRemoteUIDelegate>
{
    ACAccount * _account;
    ACAccountType * _appleAccountType;
    ACAccount * _appleAccount;
    char _isPasswordDirty;
    char _shouldHideBackButton;
    NSString * _recommendedUsername;
    char _shouldHideCreateNewAccount;
    ABMonogrammer * _monogrammer;
    PSSpecifier * _signInButtonSpecifier;
    PSSpecifier * _createNewAccountButtonSpecifier;
    NSString * _initialTitle;
    AAUIAccountCreationRemoteUI * _remoteAccountCreationUI;
    AAUIGenericTermsRemoteUI * _genericTermsRemoteUI;
    AAUIAccountRepairRemoteUI * _accountRepairRemoteUI;
    AAUICredentialRecoveryController * _credentialRecoveryUIController;
    id _textFieldTextDidChangeObserver;
    RUILoader * _remoteUILoader;
    NSMutableArray * _remoteUIModels;
    UINavigationController * _modalRemoteViewController;
    id _identityConsolidationCompletion;
    UIImageView * _silhouetteView;
    char _isPresentedModally;
}

@property (nonatomic) char isPresentedModally;
@property (readonly, nonatomic) ACAccount * account;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (AAUIBaseSignInViewController *)init;
- (float)tableView:(UITableView *)arg0 heightForHeaderInSection:(int)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void)viewWillAppear:(char)arg0;
- (void)viewDidLoad;
- (void)viewDidAppear:(char)arg0;
- (void).cxx_destruct;
- (ABMonogrammer *)_monogrammer;
- (NSError *)_titleForError:(NSError *)arg0 account:(ACAccount *)arg1;
- (void)accountRepairRemoteUI:(AAUIAccountRepairRemoteUI *)arg0 account:(ACAccount *)arg1 didFinishWithSuccess:(char)arg2;
- (void)accountCreationWillBeginWithAppleID:(NSString *)arg0 password:(NSString *)arg1;
- (void)accountCreationDidFailWithError:(NSError *)arg0;
- (void)accountCreationDidSucceedWithAppleID:(NSString *)arg0 password:(NSString *)arg1 emailChoice:(NSString *)arg2;
- (void)accountCreationWasCanceled;
- (void)credentialRecoveryController:(BRController *)arg0 didFailWithError:(char)arg1;
- (void)credentialRecoveryController:(BRController *)arg0 finishedWithSuccess:(char)arg1;
- (NSObject *)navigationItemToShowInitialLoadingForCredentialRecoveryController:(BRController *)arg0;
- (void)credentialRecoveryController:(BRController *)arg0 needsPresentationOfViewController:(BRController *)arg1;
- (NSObject *)navigationControllerForPresentationWithCredentialRecoveryController:(BRController *)arg0;
- (void)genericTermsRemoteUI:(AAUIGenericTermsRemoteUI *)arg0 didFinishWithSuccess:(char)arg1;
- (char)_shouldShowCancelDone;
- (void)_updateDoneButton;
- (NSObject *)_displayedAccountType;
- (ACAccountType *)_appleAccountType;
- (void)_presentInvalidUsernameAlert;
- (void)_verifyAccount;
- (void)didCancelSignIn;
- (id)_specifierForGroupWithiForgotLink;
- (NSString *)_specifiersForLoginForm;
- (id)_specifiersForSignInButton;
- (NSNumber *)_specifiersForCreateNewAccount;
- (void)_setUsername:(id)arg0 withSpecifier:(PSPhoneNumberSpecifier *)arg1;
- (id)_usernameForSpecifier:(id)arg0;
- (void)_setPassword:(NSString *)arg0 withSpecifier:(PSPhoneNumberSpecifier *)arg1;
- (id)_passwordForSpecifier:(id)arg0;
- (void)doneButtonTapped:(id)arg0;
- (char)_runningInMail;
- (void)_createNewAccountButtonTapped:(id)arg0;
- (void)_openiForgotLink:(id)arg0;
- (void)_openWebBasedCredentialRecoveryFlow;
- (void)_textFieldValueDidChange:(NSDictionary *)arg0;
- (void)_handleAccountSetupCompletionWithAppleID:(NSString *)arg0 success:(char)arg1 error:(NSError *)arg2;
- (char)_saveAccountWithAllDataclassesEnabledIfPossible;
- (void)didCompleteSignIn;
- (void)_saveAccountAndComplete;
- (void)_didFinishAccountVerificationWithResult:(char)arg0 error:(NSError *)arg1;
- (NSString *)_accountDescriptionFromEmailAddress:(NSString *)arg0;
- (void)_handleAccountRegistrationCompletionWithSuccess:(char)arg0 error:(NSError *)arg1;
- (void)_promoteExistingAccountToPrimary:(id)arg0;
- (void)_presentExistingAccountAlert:(id)arg0;
- (void)_updateAccountInformation:(id)arg0;
- (void)_attemptHSALoginForAccount:(NSObject *)arg0;
- (void)_presentValidationErrorAlert:(id)arg0 forAccount:(NSObject *)arg1;
- (void)_presentNoMailServiceWhileInMailAlert;
- (void)_presentUnableToSaveAccountAlert;
- (void)_saveAccountWithAllDataclassesEnabledIfPossibleWithCompletion:(id /* block */)arg0;
- (void)_handleAccountPromotionCompletionForAccount:(NSObject *)arg0 withSuccess:(char)arg1 error:(NSError *)arg2;
- (void)confirmationView:(NSObject *)arg0 clickedButtonAtIndex:(int)arg1;
- (id)_learnMoreURLForErrorCode:(id)arg0;
- (void)_showGenericTermsUIforAccount:(NSObject *)arg0;
- (void)_loadAccountRepairRemoteUIWithAccount:(ACAccount *)arg0;
- (void)_accountRepairDidFail;
- (float)_heightForCreateNewAccountFooterWithWidth:(float)arg0;
- (NSString *)descriptionPlaceholder;
- (void)cancelButtonTapped:(id)arg0;
- (void)_presentWrongAccountStatusAlert;
- (void)setPresentedModally:(char)arg0;
- (ACAccount *)account;
- (char)isPresentedModally;
- (NSArray *)specifiers;
- (void)returnPressedAtEnd;

@end
