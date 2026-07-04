/* Runtime dump - ACUIDataclassConfigurationViewController
 * Image: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
 */

@interface ACUIDataclassConfigurationViewController : ACUIViewController
{
    char _forceMailSetup;
    NSMutableArray * _dirtyDataclassCells;
    NSString * _accountIdentifier;
    NSMutableDictionary * _allDesiredDataclassActions;
    char _isMergingSyncData;
    PSSpecifier * _deleteButtonSpecifier;
    PSSpecifier * _accountSummaryCellSpecifier;
    NSArray * _dataclassSpecifiers;
    NSArray * _otherSpecifiers;
    char _didShowDataclassActionPickerDuringRemoval;
    char _firstTimeSetup;
    char _shouldShowDeleteAccountButton;
    char _shouldEnableDeleteAccountButton;
    char _shouldEnableAccountSummaryCell;
    char _isMailSetupForced;
    NSArray * _preEnabledDataclasses;
    ACAccount * _account;
    PSSpecifier * _dataclassGroupSpecifier;
    id _configurationCompletion;
}

@property (nonatomic) char firstTimeSetup;
@property (copy, nonatomic) NSArray * preEnabledDataclasses;
@property (retain, nonatomic) ACAccount * account;
@property (weak, nonatomic) PSSpecifier * dataclassGroupSpecifier;
@property (readonly, weak, nonatomic) PSSpecifier * deleteButtonSpecifier;
@property (nonatomic) char shouldShowDeleteAccountButton;
@property (nonatomic) char shouldEnableDeleteAccountButton;
@property (nonatomic) char shouldEnableAccountSummaryCell;
@property (nonatomic) char isMailSetupForced;
@property (copy, nonatomic) id configurationCompletion;

+ (char)shouldPresentAsModalSheet;

- (ACUIDataclassConfigurationViewController *)init;
- (void)viewWillAppear:(char)arg0;
- (void)viewDidLoad;
- (void)viewDidAppear:(char)arg0;
- (void).cxx_destruct;
- (void)operationsHelper:(NSObject *)arg0 willSaveAccount:(NSObject *)arg1;
- (void)operationsHelper:(NSObject *)arg0 didSaveAccount:(NSObject *)arg1 withSuccess:(char)arg2 error:(NSError *)arg3;
- (void)operationsHelper:(NSObject *)arg0 willRemoveAccount:(NSObject *)arg1;
- (void)operationsHelper:(NSObject *)arg0 didRemoveAccount:(NSObject *)arg1 withSuccess:(char)arg2 error:(NSError *)arg3;
- (NSObject *)operationsHelper:(NSObject *)arg0 desiredDataclassActionFromPicker:(id)arg1;
- (char)operationsHelper:(NSObject *)arg0 shouldRemoveAccount:(NSObject *)arg1;
- (void)hideActivityInProgressUIWithDelay:(double)arg0;
- (void)setFirstTimeSetup:(char)arg0;
- (void)forceMailSetup;
- (void)setPreEnabledDataclasses:(NSArray *)arg0;
- (void)setConfigurationCompletion:(id /* block */)arg0;
- (void)setShouldEnableAccountSummaryCell:(char)arg0;
- (void)setShouldEnableDeleteAccountButton:(char)arg0;
- (void)setShouldShowDeleteAccountButton:(char)arg0;
- (char)isFirstTimeSetup;
- (NSString *)_navigationTitle;
- (char)shouldVerifyBeforeAccountSave;
- (id /* block */)configurationCompletion;
- (NSObject *)specifierForAccountSummaryCell;
- (id)_specifiersForDataclasses:(id)arg0;
- (char)shouldShowOtherSpecifiersDuringFirstSetup;
- (NSArray *)otherSpecifiers;
- (char)shouldShowDeleteAccountButton;
- (id)titleForDeleteButton;
- (void)deleteButtonTapped:(id)arg0;
- (char)shouldEnableDeleteAccountButton;
- (Class)accountInfoControllerClass;
- (NSObject *)valueForAccountSummaryCell;
- (char)shouldEnableAccountSummaryCell;
- (NSArray *)_orderDataclassList:(NSArray *)arg0;
- (void)setDataclassGroupSpecifier:(PSSpecifier *)arg0;
- (PSSpecifier *)dataclassGroupSpecifier;
- (char)shouldShowSpecifierForDataclass:(id)arg0;
- (id)specifierForDataclass:(id)arg0;
- (void)dataclassSwitchStateDidChange:(NSDictionary *)arg0 withSpecifier:(PSPhoneNumberSpecifier *)arg1;
- (id)dataclassSwitchStateForSpecifier:(id)arg0;
- (NSArray *)preEnabledDataclasses;
- (void)_markDataclassSwitchCellAsDirty:(id)arg0;
- (void)_setDataclass:(ACDManagedDataclass *)arg0 enabled:(char)arg1;
- (char)shouldAutomaticallyTryEnablingDataclassDuringSetup:(id)arg0;
- (void)resetDirtyDataclassSwitchCells;
- (void)_enableAllProvisionedDataclassesWithoutRequringUserInteraction;
- (id)_activityInProgressTextForDataclass:(id)arg0 isBeingEnabled:(char)arg1;
- (void)_showDelayedActivityInProgressUIWithMessage:(NSString *)arg0;
- (char)_confirmKeepLocalDataForDataclasses:(id)arg0;
- (char)_confirmDeleteLocalDataForDataclasses:(id)arg0;
- (void)_notifyOfAccountSetupCompletion;
- (char)_isShowingDeleteAccountButton;
- (char)_promptUserToConfirmAccountDeletion;
- (id)messageForAccountDeletionProgressUI;
- (int)deleteButtonIndex;
- (char)isMailSetupForced;
- (void)reloadDynamicSpecifiersWithAnimation:(char)arg0;
- (void)setDataclass:(ACDManagedDataclass *)arg0 enabled:(char)arg1;
- (void)appendDeleteAccountButton;
- (PSSpecifier *)deleteButtonSpecifier;
- (void)setIsMailSetupForced:(char)arg0;
- (void)doneButtonTapped:(id)arg0;
- (void)cancelButtonTapped:(id)arg0;
- (ACAccount *)account;
- (void)setAccount:(ACAccount *)arg0;
- (NSString *)displayedAccountTypeString;
- (NSString *)displayedShortAccountTypeString;
- (NSArray *)specifiers;
- (NSString *)_accountIdentifier;

@end
