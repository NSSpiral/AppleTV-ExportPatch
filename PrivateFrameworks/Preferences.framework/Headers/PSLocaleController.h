/* Runtime dump - PSLocaleController
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSLocaleController : PSViewController <UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate>
{
    UITableView * _tableView;
    UIView * _contentView;
    UISearchBar * _searchBar;
    char _searchMode;
    char _hideKeyboardInSearchMode;
    PSLocaleSelector * _localeSelector;
    NSArray * _filteredListContent;
    NSArray * _sections;
    NSArray * _regionsList;
    PSRegion * _currentRegion;
}

@property (retain, nonatomic) PSLocaleSelector * localeSelector;
@property (retain, nonatomic) NSArray * filteredListContent;
@property (retain, nonatomic) NSArray * sections;
@property (retain, nonatomic) NSArray * regionsList;
@property (retain, nonatomic) PSRegion * currentRegion;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (PSLocaleController *)init;
- (void)tableView:(UITableView *)arg0 didSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (void)scrollViewWillBeginDragging:(UIScrollView *)arg0;
- (int)tableView:(UITableView *)arg0 numberOfRowsInSection:(int)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (int)numberOfSectionsInTableView:(UITableView *)arg0;
- (NSString *)tableView:(UITableView *)arg0 titleForHeaderInSection:(int)arg1;
- (NSObject *)sectionIndexTitlesForTableView:(NSArray *)arg0;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)viewWillAppear:(char)arg0;
- (void)viewDidLoad;
- (void)searchBar:(UISearchBar *)arg0 textDidChange:(char)arg1;
- (void)searchBarTextDidBeginEditing:(UISearchBar *)arg0;
- (void)searchBarTextDidEndEditing:(UISearchBar *)arg0;
- (void)setSections:(NSArray *)arg0;
- (NSArray *)sections;
- (void)setLocaleSelector:(PSLocaleSelector *)arg0;
- (NSObject *)_mainContentView;
- (PSLocaleSelector *)localeSelector;
- (void)updateChecked:(id)arg0;
- (void)setFilteredListContent:(NSArray *)arg0;
- (void)setRegionsList:(NSArray *)arg0;
- (void)setCurrentRegion:(PSRegion *)arg0;
- (NSArray *)regionsList;
- (void)reloadDataAndScrollToCheckedRegionAnimated:(char)arg0;
- (void)loadRegions;
- (void)reloadSections;
- (NSArray *)filteredListContent;
- (PSRegion *)currentRegion;
- (NSArray *)filteredRegionsForRegionList:(NSArray *)arg0 searchString:(NSString *)arg1;

@end
