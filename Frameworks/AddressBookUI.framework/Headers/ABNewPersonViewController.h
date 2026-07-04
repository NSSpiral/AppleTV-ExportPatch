/* Runtime dump - ABNewPersonViewController
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABNewPersonViewController : UIViewController
{
    <ABNewPersonViewControllerDelegate> * _newPersonViewDelegate;
    id _parentGroup;
    id _helper;
    void * _recordForNewPerson;
    char _isRealViewLoaded;
    ABPersonTableViewDataSource * _dataSource;
    _UIAccessDeniedView * _accessDeniedView;
    void * _parentSource;
    CNContact * _mergeContact;
    ABContactViewController * _contactViewController;
    <ABPresenterDelegate> * _presentingDelegate;
}

@property (nonatomic) <ABNewPersonViewControllerDelegate> * newPersonViewDelegate;
@property (nonatomic) void * addressBook;
@property (nonatomic) void * displayedPerson;
@property (nonatomic) void * parentGroup;
@property (readonly, nonatomic) ABPersonViewControllerHelper * helper;
@property (readonly, nonatomic) ABPersonTableViewDataSource * dataSource;
@property (nonatomic) void * parentSource;
@property (retain, nonatomic) CNContact * mergeContact;
@property (nonatomic) char savesNewContactOnSuspend;
@property (retain, nonatomic) <ABStyleProvider> * styleProvider;
@property (retain, nonatomic) ABContactsFilter * parentContactsFilter;
@property (readonly, nonatomic) ABContactViewController * contactViewController;
@property (nonatomic) <ABPresenterDelegate> * presentingDelegate;
@property (nonatomic) char showsCancelButton;
@property (readonly, nonatomic) _UIAccessDeniedView * accessDeniedView;
@property (nonatomic) char isRealViewLoaded;

- (<ABStyleProvider> *)styleProvider;
- (void)setStyleProvider:(<ABStyleProvider> *)arg0;
- (void)updateNavigationButtons;
- (char)supportedInterfaceOrientation:(int)arg0;
- (int)abViewControllerType;
- (void)setDisplayedPerson:(void *)arg0;
- (ABContactViewController *)contactViewController;
- (void)setNewPersonViewDelegate:(<ABNewPersonViewControllerDelegate> *)arg0;
- (void)setMergeContact:(CNContact *)arg0;
- (<ABPresenterDelegate> *)presentingDelegate;
- (void)setPresentingDelegate:(<ABPresenterDelegate> *)arg0;
- (float)ab_heightToFitForViewInPopoverView;
- (void *)displayedPerson;
- (_UIAccessDeniedView *)accessDeniedView;
- (void)setParentGroup:(void *)arg0;
- (void)setParentSource:(void *)arg0;
- (void)setSavesNewContactOnSuspend:(char)arg0;
- (void)accessChanged;
- (ABNewPersonViewController *)initWithNibName:(NSString *)arg0 bundle:(NSObject *)arg1 style:(int)arg2;
- (void *)parentGroup;
- (char)isRealViewLoaded;
- (void)setIsRealViewLoaded:(char)arg0;
- (void *)parentSource;
- (CNContact *)mergeContact;
- (<ABNewPersonViewControllerDelegate> *)newPersonViewDelegate;
- (char)savesNewContactOnSuspend;
- (ABPersonViewControllerHelper *)helper;
- (ABContactsFilter *)parentContactsFilter;
- (void)setParentContactsFilter:(ABContactsFilter *)arg0;
- (void)savePerson:(NSObject *)arg0;
- (void)saveAndTellDelegate:(char)arg0;
- (void *)recordForNewPerson;
- (ABUIPerson *)displayedUIPerson;
- (void)attemptSaveAndTellDelegate:(char)arg0;
- (void)setDisplayedUIPerson:(ABUIPerson *)arg0;
- (void)setAddressBook:(void *)arg0;
- (void)dealloc;
- (ABNewPersonViewController *)init;
- (ABPersonTableViewDataSource *)dataSource;
- (void)applicationWillTerminate:(id)arg0;
- (void)applicationWillSuspend;
- (void)applicationDidResume;
- (void)encodeRestorableStateWithCoder:(NSCoder *)arg0;
- (void)decodeRestorableStateWithCoder:(NSCoder *)arg0;
- (void)setEditing:(char)arg0 animated:(char)arg1;
- (ABNewPersonViewController *)initWithNibName:(NSString *)arg0 bundle:(NSObject *)arg1;
- (void)loadView;
- (ABNewPersonViewController *)initWithStyle:(int)arg0;
- (void)viewWillAppear:(char)arg0;
- (void)viewDidLoad;
- (void)viewDidAppear:(char)arg0;
- (void)viewWillDisappear:(char)arg0;
- (char)_allowsAutorotation;
- (void)_getRotationContentSettings:(struct ? *)arg0;
- (void)setShowsCancelButton:(char)arg0;
- (char)showsCancelButton;
- (void)save:(id *)arg0;
- (void)cancel:(char)arg0;
- (void *)addressBook;

@end
