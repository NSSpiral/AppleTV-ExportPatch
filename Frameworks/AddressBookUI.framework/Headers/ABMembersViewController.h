/* Runtime dump - ABMembersViewController
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABMembersViewController : ABAbstractViewController <ABNewPersonViewControllerDelegate, ABMembersControllerDelegate, ABViewControllerBannerViewProtocol, ABPersonEditDelegate>
{
    ABMembersController * _membersController;
    int _insertionProperty;
    id _insertionValue;
    id _insertionLabel;
    int _rightButtonBehavior;
    int _leftButtonBehavior;
    char _shouldHandleExternalChangeOnPersonViewControllers;
    _UIAccessDeniedView * _accessDeniedView;
}

@property (readonly) char allowsCancel;
@property (readonly) char allowsCardEditing;
@property (readonly) char shouldShowGroups;
@property (readonly) CNContact * unsavedContact;
@property (readonly) char isSearchingWithNoContactSelected;
@property (readonly, nonatomic) _UIAccessDeniedView * accessDeniedView;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (<ABStyleProvider> *)styleProvider;
- (void)setStyleProvider:(<ABStyleProvider> *)arg0;
- (void)refreshEverythingNow;
- (int)abViewControllerType;
- (void)modelDatabaseChange:(NSDictionary *)arg0;
- (char)allowsCancel;
- (void)newPersonViewController:(BRController *)arg0 didCompleteWithNewPerson:(void *)arg1;
- (char)shouldShowGroups;
- (void)membersControllerWillStartSearching:(id)arg0;
- (void)membersControllerDidEndServerSearch:(id)arg0;
- (void)membersControllerWillEndSearching:(id)arg0;
- (void)membersControllerDidEndSearching:(id)arg0;
- (char)selectAndScrollMemberVisible:(void *)arg0;
- (char)showCardForPerson:(void *)arg0 withMemberCell:(struct objc_method *)arg1 animate:(char)arg2;
- (char)showCardForPerson:(void *)arg0 animate:(char)arg1;
- (void)showInsertEditorForPerson:(void *)arg0 animate:(char)arg1;
- (void)personWasSelected:(void *)arg0;
- (char)membersController:(ABMembersController *)arg0 shouldAllowSelectingPersonWithRecordID:(int)arg1;
- (char)allowsShowingPersonsCards;
- (void)scrollMemberToTop:(void *)arg0;
- (void)resetStateForDisplayedFilterChange;
- (void)cancelSearching:(id)arg0;
- (void)setBannerTitle:(NSString *)arg0 value:(NSObject *)arg1;
- (void)updateTitle;
- (void)_applicationEnteringForeground;
- (void)_applicationEnteringBackground;
- (void)_updateForModel;
- (void)updateNavigationButtonsAnimated:(char)arg0;
- (void)startRefreshingAccount;
- (void)cancelRefreshingAccount;
- (char)allowsCardEditing;
- (void)presentGroupsViewController;
- (_UIAccessDeniedView *)accessDeniedView;
- (void)addPerson:(NSObject *)arg0;
- (void)updateLeftNavigationButtonAnimated:(char)arg0;
- (void)updateNavigationButtonsInSearchMode:(char)arg0 animated:(char)arg1;
- (ABMembersController *)membersController;
- (void)addPersonWithContact:(id)arg0 animated:(char)arg1;
- (NSObject *)addPersonPresentationTarget;
- (void)presentAddPersonViewController:(BRController *)arg0 animated:(char)arg1;
- (char)showCardForPerson:(void *)arg0 withMemberCell:(struct objc_method *)arg1 animate:(char)arg2 selectAndScrollToPerson:(char)arg3;
- (void)resetInsertionData;
- (void)updateNavigationButtonsInSearchMode:(char)arg0;
- (void)newPersonViewController:(BRController *)arg0 didCompleteWithNewPerson:(void *)arg1 informDelegate:(char)arg2;
- (void)reallyHandleExternalChangeOnPersonViewControllers;
- (void)handleExternalChangeOnPersonViewControllers;
- (void)personWasDeleted;
- (void)nameUpdatedForPerson:(void *)arg0;
- (void)linksUpdatedForPerson:(void *)arg0;
- (void)preferredPersonDidChangeToPerson:(void *)arg0;
- (void)insertProperty:(int *)arg0 insertValue:(id *)arg1 insertLabel:(id *)arg2;
- (char)personViewController:(ABPersonViewController *)arg0 shouldContinueAfterEditingConfirmed:(char)arg1 forPerson:(void *)arg2;
- (char)isSearchingWithNoContactSelected;
- (char)isNavigationButtonEnabled:(int)arg0;
- (CNContact *)unsavedContact;
- (NSIndexPath *)indexPathForMember:(void *)arg0;
- (char)showCardForPerson:(void *)arg0 animate:(char)arg1 selectAndScrollToPerson:(char)arg2;
- (void)peoplePickerNavigationControllerNavigationBarStoppedAnimating:(id)arg0;
- (void)model:(NSObject *)arg0 localChangeWithInfo:(struct __CFDictionary *)arg1;
- (void)setAddressBook:(void *)arg0;
- (void)loadState;
- (void)dealloc;
- (void)applicationDidResume;
- (void)encodeRestorableStateWithCoder:(NSCoder *)arg0;
- (void)decodeRestorableStateWithCoder:(NSCoder *)arg0;
- (void)loadView;
- (void)viewWillAppear:(char)arg0;
- (void)viewDidAppear:(char)arg0;
- (void)viewWillDisappear:(char)arg0;
- (void)_getRotationContentSettings:(struct ? *)arg0;
- (NSString *)defaultPNGName;
- (char)canHandleSnapbackIdentifier:(NSString *)arg0 animated:(char)arg1;
- (ABModel *)model;
- (void)updateView;
- (UITableView *)tableView;
- (ABMembersViewController *)initWithModel:(ABModel *)arg0;
- (void)cancel:(char)arg0;

@end
