/* Runtime dump - PSSearchController
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSearchController : NSObject <PSSearchModelDelegate, PSSearchModelDataSource, UITableViewDelegate, UITableViewDataSource, UISearchDisplayDelegate, UISearchBarDelegate>
{
    UISearchDisplayController * _displayController;
    PSSearchResults * _searchResults;
    NSMutableDictionary * _iconViewMap;
    NSMutableArray * _reusableIconViews;
    char _searchEnabled;
    char _showToggles;
    char _showSectionInDetailText;
    int _notifyToken;
    UISearchBar * _searchBar;
    PSListController * _listController;
    <PSSearchControllerDelegate> * _delegate;
}

@property (readonly, nonatomic) UISearchBar * searchBar;
@property (readonly, nonatomic) PSListController * listController;
@property (nonatomic) <PSSearchControllerDelegate> * delegate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (float)_additionalHeightForLabelWithText:(NSString *)arg0 font:(UIFont *)arg1 boundingWidth:(float)arg2;

- (void)dealloc;
- (void)setDelegate:(<PSSearchControllerDelegate> *)arg0;
- (float)tableView:(UITableView *)arg0 heightForRowAtIndexPath:(NSIndexPath *)arg1;
- (void)tableView:(UITableView *)arg0 didSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (void)scrollViewDidScroll:(UIScrollView *)arg0;
- (int)tableView:(UITableView *)arg0 numberOfRowsInSection:(int)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (int)numberOfSectionsInTableView:(UITableView *)arg0;
- (<PSSearchControllerDelegate> *)delegate;
- (char)isActive;
- (void)tableViewDidFinishReload:(id)arg0;
- (UISearchBar *)searchBar;
- (void)searchBar:(UISearchBar *)arg0 textDidChange:(char)arg1;
- (void)setActive:(char)arg0 animated:(char)arg1;
- (void)searchDisplayController:(UISearchDisplayController *)arg0 willUnloadSearchResultsTableView:(NSObject *)arg1;
- (void)searchDisplayControllerWillBeginSearch:(id)arg0;
- (char)searchDisplayController:(UISearchDisplayController *)arg0 shouldReloadTableForSearchString:(NSString *)arg1;
- (void)searchDisplayController:(UISearchDisplayController *)arg0 didLoadSearchResultsTableView:(NSObject *)arg1;
- (void)viewWillAppear;
- (PSSearchController *)initWithListController:(PSListController *)arg0;
- (void)setPreferenceValue:(id)arg0 specifier:(PSSpecifier *)arg1;
- (id)readPreferenceValue:(id)arg0;
- (NSObject *)rootSpecifiersForSearchModel:(NSObject *)arg0;
- (Class)rootSearchControllerClassForSearchModel:(NSObject *)arg0;
- (void)searchModel:(NSObject *)arg0 updatedWithNewResults:(char)arg1 forQuery:(NSObject *)arg2;
- (void)searchModelWillBeginIndexing:(id)arg0;
- (void)searchModelDidFinishIndexing:(id)arg0;
- (void)_reloadSettings:(char)arg0;
- (char)_setBoolValue:(char)arg0 forIvar:(char *)arg1;
- (void)_updateListControllerHeaderView:(char)arg0;
- (void)_buildSearchUIIfNecessary;
- (void)_updateSearchResultsWithText:(NSString *)arg0;
- (void)_removeIconViewForSection:(id)arg0;
- (void)_updateIconViews:(char)arg0;
- (id)_detailTextForSearchEntry:(id)arg0 effectiveTitle:(id *)arg1;
- (char)_shouldShowSwitchForSearchEntry:(id)arg0;
- (struct ?)_layoutInfoForEntryAtIndexPath:(NSIndexPath *)arg0;
- (NSObject *)_readPreferenceValueUsingAction:(NSObject *)arg0;
- (void)_setPreferenceValueUsingAction:(NSObject *)arg0 specifier:(PSSpecifier *)arg1;
- (id)_buildURLForEntry:(id)arg0 isRoot:(char *)arg1;
- (void)setSearchBarVisible:(char)arg0 animated:(char)arg1;
- (char)activateWithInitialText:(char)arg0 animated:(char)arg1;
- (void)addRootSpecifiers:(id)arg0;
- (void)reloadRootSpecifiers:(id)arg0;
- (void)removeRootSpecifiers:(id)arg0;
- (PSListController *)listController;

@end
