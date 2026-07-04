/* Runtime dump - ABNewPersonViewController_Modern
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABNewPersonViewController_Modern : UIViewController <ABContactViewControllerDelegate>
{
    void * _addressBook;
    void * _displayedPerson;
    <ABNewPersonViewControllerDelegate> * _newPersonViewDelegate;
    char _isRealViewLoaded;
    ABContactViewController * _contactViewController;
    _UIAccessDeniedView * _accessDeniedView;
    void * _parentGroup;
    ABPersonViewControllerHelper * _helper;
    ABPersonTableViewDataSource * _dataSource;
    void * _parentSource;
    CNContact * _mergeContact;
    <ABStyleProvider> * _styleProvider;
    ABContactsFilter * _parentContactsFilter;
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
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (<ABStyleProvider> *)styleProvider;
- (void)setStyleProvider:(<ABStyleProvider> *)arg0;
- (void)setDisplayedPerson:(void *)arg0;
- (ABContactViewController *)contactViewController;
- (void)setNewPersonViewDelegate:(<ABNewPersonViewControllerDelegate> *)arg0;
- (void)setMergeContact:(CNContact *)arg0;
- (<ABPresenterDelegate> *)presentingDelegate;
- (void)contactViewController:(ABContactViewController *)arg0 didCompleteWithContact:(id)arg1;
- (void)setPresentingDelegate:(<ABPresenterDelegate> *)arg0;
- (void *)displayedPerson;
- (_UIAccessDeniedView *)accessDeniedView;
- (void)setParentGroup:(void *)arg0;
- (void)setParentSource:(void *)arg0;
- (void)setSavesNewContactOnSuspend:(char)arg0;
- (void)accessChanged;
- (ABNewPersonViewController_Modern *)initWithNibName:(NSString *)arg0 bundle:(NSObject *)arg1 style:(int)arg2;
- (void *)parentGroup;
- (void)loadContactViewController;
- (char)isRealViewLoaded;
- (void)loadRealView;
- (void)setIsRealViewLoaded:(char)arg0;
- (void *)parentSource;
- (CNContact *)mergeContact;
- (<ABNewPersonViewControllerDelegate> *)newPersonViewDelegate;
- (char)savesNewContactOnSuspend;
- (ABPersonViewControllerHelper *)helper;
- (ABContactsFilter *)parentContactsFilter;
- (void)setParentContactsFilter:(ABContactsFilter *)arg0;
- (void)setAddressBook:(void *)arg0;
- (void)dealloc;
- (ABNewPersonViewController_Modern *)init;
- (char)isKindOfClass:(Class)arg0;
- (ABPersonTableViewDataSource *)dataSource;
- (void)encodeRestorableStateWithCoder:(NSCoder *)arg0;
- (void)decodeRestorableStateWithCoder:(NSCoder *)arg0;
- (void)setEditing:(char)arg0 animated:(char)arg1;
- (void)loadView;
- (ABNewPersonViewController_Modern *)initWithStyle:(int)arg0;
- (void)setShowsCancelButton:(char)arg0;
- (char)showsCancelButton;
- (void)save:(id *)arg0;
- (void *)addressBook;

@end
