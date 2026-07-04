/* Runtime dump - ABAccountsAndGroupsViewController
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABAccountsAndGroupsViewController : ABAbstractViewController <UITableViewDelegate>
{
    UIRefreshControl * _refreshControl;
    ABAccountsAndGroupDataSource * _dataSource;
    char _needsReload;
    char _tableViewNeedsReloadAfterResume;
    char _showsRefreshButton;
    ABPeoplePickerNavigationController * _peoplePickerNavigationController;
}

@property (readonly, nonatomic) ABAccountsAndGroupDataSource * dataSource;
@property (nonatomic) ABPeoplePickerNavigationController * peoplePickerNavigationController;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (ABPeoplePickerNavigationController *)peoplePickerNavigationController;
- (char)hidesSearchableSources;
- (char)hidesGlobalGroupWrapper;
- (void)setHidesSearchableSources:(char)arg0;
- (void)setHidesGlobalGroupWrapper:(char)arg0;
- (void)updateRefreshButton;
- (void)refreshEverythingNow;
- (void)_updateDisplayedContactsFilterFromSelection;
- (int)abViewControllerType;
- (void)modelDatabaseChange:(NSDictionary *)arg0;
- (void)setPeoplePickerNavigationController:(ABPeoplePickerNavigationController *)arg0;
- (void)dealloc;
- (void)reloadData;
- (void)tableView:(UITableView *)arg0 willDisplayCell:(UITableViewCell *)arg1 forRowAtIndexPath:(NSIndexPath *)arg2;
- (void)tableView:(UITableView *)arg0 willDisplayHeaderView:(NSObject *)arg1 forSection:(int)arg2;
- (NSObject *)tableView:(UITableView *)arg0 willSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (void)tableView:(UITableView *)arg0 didSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (ABAccountsAndGroupDataSource *)dataSource;
- (void)applicationDidResume;
- (void)loadView;
- (void)viewWillAppear:(char)arg0;
- (void)viewDidAppear:(char)arg0;
- (void)viewWillDisappear:(char)arg0;
- (ABModel *)model;
- (void)done:(char)arg0;
- (ABAccountsAndGroupsViewController *)initWithModel:(ABModel *)arg0;
- (void)setModel:(ABModel *)arg0;

@end
