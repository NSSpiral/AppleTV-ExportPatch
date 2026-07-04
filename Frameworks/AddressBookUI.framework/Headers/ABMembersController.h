/* Runtime dump - ABMembersController
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABMembersController : ABContentController <UISearchControllerDelegate, UISearchResultsUpdating, ABMembersDataSourceDelegate, UITextFieldDelegate, UISearchDisplayDelegate, ABSearchOperationDelegate, UISearchBarDelegate>
{
    ABMembersDataSource * _membersDataSource;
    ABMembersFilteredDataSource * _searchDataSource;
    <ABStyleProvider> * _styleProvider;
    unsigned int _cellsCreated;
    unsigned int _memberCount;
    UITableView * _tableView;
    UISearchController * _searchController;
    UISearchDisplayController * _searchDisplayController;
    UITableViewController * _searchResultsController;
    _UIContentUnavailableView * _contentUnavailableView;
    UIViewController * _parentViewController;
    unsigned int _searchSequenceNumber;
    NSOperationQueue * _operationQueue;
    <ABMembersControllerDelegate> * _membersControllerDelegate;
    char _showingCardFromSearch;
    char _shouldDeactivateSearch;
    NSIndexPath * _selectedIndexPath;
    char _searchEnabled;
    char _needToClearOldResults;
    int _initiallyVisibleRow;
    <ABMembersControllerSearchCompletionDelegate> * _searchCompletionDelegate;
    _UINavigationControllerPalette * _searchPalette;
}

@property (nonatomic) char searchEnabled;
@property (retain, nonatomic) <ABStyleProvider> * styleProvider;
@property (nonatomic) <ABMembersControllerDelegate> * membersControllerDelegate;
@property (readonly) UITableView * searchResultsTableView;
@property (nonatomic) <ABMembersControllerSearchCompletionDelegate> * searchCompletionDelegate;
@property (readonly, nonatomic) char isServerSearchGroup;
@property (readonly, nonatomic) NSString * currentSearchText;
@property (readonly, nonatomic) UITableView * currentTableView;
@property (readonly, nonatomic) UISearchBar * searchBar;
@property (retain, nonatomic) _UINavigationControllerPalette * searchPalette;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSString *)newNameSearchOperationWithString:(NSString *)arg0 contactsFilter:(NSObject *)arg1 addressBook:(void *)arg2 delegate:(NSObject *)arg3 inOutSequenceNumber:(unsigned int *)arg4;

- (ABMembersController *)initWithAddressBook:(void *)arg0;
- (<ABStyleProvider> *)styleProvider;
- (void)setStyleProvider:(<ABStyleProvider> *)arg0;
- (void)deselectAllRowsWithAnimation:(char)arg0;
- (void)_reloadFontSizes;
- (void)_applyStylesToTableView:(NSObject *)arg0;
- (char)isSearching;
- (<ABMembersControllerDelegate> *)membersControllerDelegate;
- (NSObject *)contactsFilter;
- (void)_updateRowsHeights;
- (ABMembersDataSource *)membersDataSource;
- (ABMembersFilteredDataSource *)searchDataSource;
- (int)globalIndexOfMember:(void *)arg0;
- (id)tableViewPathToMember:(void *)arg0;
- (void)_scrollIndexToTop:(int)arg0;
- (void)_reselectLastSelectedCellIfNeeded;
- (void)_updateEmptyTableViewAnimated:(char)arg0;
- (UITableView *)currentTableView;
- (char)shouldShowGroups;
- (void)cancelSearchingAnimated:(char)arg0;
- (void)_cancelGALSearch;
- (char)isServerSearchGroup;
- (void)reloadSearchTableView;
- (NSString *)currentSearchText;
- (void)_searchForWords:(id)arg0;
- (void *)_selectedPerson;
- (char)selectAndScrollMemberVisible:(void *)arg0;
- (void)_updateCountString;
- (char)showCardForPerson:(void *)arg0 withMemberCell:(struct objc_method *)arg1 animate:(char)arg2;
- (void)_updateNoContactsViewAnimated:(char)arg0;
- (char)abDataSource:(NSObject *)arg0 selectedPerson:(void *)arg1 atIndexPath:(NSIndexPath *)arg2 withMemberCell:(struct objc_method *)arg3 animate:(char)arg4;
- (char)abDataSourceAllowsShowingPersonsCards:(id)arg0;
- (char)abDataSource:(NSObject *)arg0 shouldAllowSelectingPersonWithRecordID:(int)arg1;
- (void)abScrollViewDidBeginDragging:(id)arg0;
- (void)setMembersControllerDelegate:(<ABMembersControllerDelegate> *)arg0;
- (void)stopScrolling;
- (void)scrollMemberToTop:(void *)arg0;
- (unsigned int)cellsCreated;
- (void)setCellsCreated:(unsigned int)arg0;
- (NSObject *)selectedCell;
- (void)resetStateForDisplayedFilterChange;
- (void)cancelSearching:(id)arg0;
- (UISearchBar *)__searchBar;
- (UISearchController *)__searchController;
- (NSError *)_localizedStringForError:(int)arg0;
- (void)setBannerTitle:(NSString *)arg0 value:(NSObject *)arg1;
- (void)displayedMembersListChanged;
- (void)_deselectAllRowsWithAnimation;
- (char)isSearchEnabled;
- (void)setSearchEnabled:(char)arg0;
- (<ABMembersControllerSearchCompletionDelegate> *)searchCompletionDelegate;
- (void)setSearchCompletionDelegate:(<ABMembersControllerSearchCompletionDelegate> *)arg0;
- (void)searchOperation:(NSObject *)arg0 didFindMatches:(id)arg1 moreComing:(char)arg2;
- (void)setAddressBook:(void *)arg0;
- (void)dealloc;
- (void)reload;
- (UIView *)contentView;
- (void)viewWillAppear:(char)arg0;
- (void)setParentViewController:(UIViewController *)arg0;
- (void)viewDidAppear:(char)arg0;
- (void)viewWillDisappear:(char)arg0;
- (UISearchBar *)searchBar;
- (char)shouldShowIndex;
- (UITableView *)tableView;
- (void)searchBarCancelButtonClicked:(UISearchBar *)arg0;
- (UITableView *)searchResultsTableView;
- (void)searchDisplayController:(UISearchDisplayController *)arg0 willShowSearchResultsTableView:(NSObject *)arg1;
- (void)searchDisplayControllerDidEndSearch:(id)arg0;
- (void)searchDisplayControllerWillBeginSearch:(id)arg0;
- (void)searchDisplayControllerWillEndSearch:(id)arg0;
- (char)_shouldDeactivateOnCancelButtonClicked;
- (char)searchDisplayController:(UISearchDisplayController *)arg0 shouldReloadTableForSearchString:(NSString *)arg1;
- (void)setSearchPalette:(_UINavigationControllerPalette *)arg0;
- (_UINavigationControllerPalette *)searchPalette;
- (void)willPresentSearchController:(BRController *)arg0;
- (void)willDismissSearchController:(BRController *)arg0;
- (void)didDismissSearchController:(BRController *)arg0;
- (void)updateSearchResultsForSearchController:(BRController *)arg0;
- (void)_setSelectedIndexPath:(NSIndexPath *)arg0;
- (NSOperationQueue *)operationQueue;

@end
