/* Runtime dump - AAUIPickInviteeViewController
 * Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUIPickInviteeViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, AAUIContactsSearchDelegate>
{
    ACAccount * _account;
    ACAccountStore * _accountStore;
    AAUIContactsSearchController * _contactsSearchController;
    NSArray * _searchResults;
    UIView * _separator;
    UITableView * _resultsTableView;
    NSString * _searchQuery;
    UIView * _container;
    UIView * _contactSearchBarContainer;
    UITextField * _contactSearchBar;
    UILabel * _toLabel;
    UILabel * _instructionsLabel;
    UILabel * _childAccountLabel;
    UIButton * _createChildAccountButton;
    ABMonogrammer * _monogrammer;
    UIBarButtonItem * _nextButton;
    void * _addressBook;
    <AAUIPickInviteeDelegate> * _delegate;
    NSString * _inviteeEmail;
    NSString * _inviteeShortName;
    NSString * _inviteeCompositeName;
    NSString * _createChildAccountButtonTitle;
    NSString * _createChildAccountInstructions;
}

@property (weak, nonatomic) <AAUIPickInviteeDelegate> * delegate;
@property (readonly, nonatomic) NSString * inviteeEmail;
@property (readonly, nonatomic) NSString * inviteeShortName;
@property (readonly, nonatomic) NSString * inviteeCompositeName;
@property (copy, nonatomic) NSString * createChildAccountButtonTitle;
@property (copy, nonatomic) NSString * createChildAccountInstructions;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)setDelegate:(<AAUIPickInviteeDelegate> *)arg0;
- (float)tableView:(UITableView *)arg0 heightForRowAtIndexPath:(NSIndexPath *)arg1;
- (void)tableView:(UITableView *)arg0 didSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (int)tableView:(UITableView *)arg0 numberOfRowsInSection:(int)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (int)numberOfSectionsInTableView:(UITableView *)arg0;
- (<AAUIPickInviteeDelegate> *)delegate;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void)textFieldValueDidChange:(NSDictionary *)arg0;
- (void)textFieldDidBeginEditing:(UITextField *)arg0;
- (char)textFieldShouldReturn:(UITextField *)arg0;
- (NSObject *)contentScrollView;
- (void)viewDidLoad;
- (void)viewDidAppear:(char)arg0;
- (void).cxx_destruct;
- (NSString *)inviteeEmail;
- (NSString *)inviteeCompositeName;
- (NSString *)inviteeShortName;
- (float)_heightForText:(NSString *)arg0 width:(float)arg1;
- (void)_cancelButtonWasTapped:(id)arg0;
- (AAUIPickInviteeViewController *)initWithAccount:(ACAccount *)arg0 store:(EKEventStore *)arg1;
- (void)contactsSearchController:(AAUIContactsSearchController *)arg0 didFinishSearchWithSuccess:(char)arg1;
- (void)contactsSearchController:(AAUIContactsSearchController *)arg0 didFindSortedResult:(NSObject *)arg1;
- (void)_createChildAccountButtonWasTapped:(id)arg0;
- (void)_nextButtonWasTapped:(id)arg0;
- (void)_updateNextButtonEnabledState;
- (void)_hideSearchResults;
- (NSString *)_attributedStringWithQueryHighlightedForString:(NSString *)arg0 size:(float)arg1;
- (NSObject *)_imageForPersonWithRecordID:(int)arg0;
- (NSString *)createChildAccountButtonTitle;
- (void)setCreateChildAccountButtonTitle:(NSString *)arg0;
- (NSString *)createChildAccountInstructions;
- (void)setCreateChildAccountInstructions:(NSString *)arg0;

@end
