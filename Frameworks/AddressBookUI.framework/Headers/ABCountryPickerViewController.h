/* Runtime dump - ABCountryPickerViewController
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABCountryPickerViewController : ABPickerViewController <UITableViewDelegate, UITableViewDataSource, UISearchDisplayDelegate, UISearchBarDelegate>
{
    UITableView * _tableView;
    UILocalizedIndexedCollation * _collation;
    NSArray * _sections;
    NSArray * _sectionIndexTitles;
    NSDictionary * _indexToSections;
    UISearchBar * _searchBar;
    UISearchDisplayController * _searchController;
    NSArray * _filteredCountries;
    NSString * _selectedCountryCode;
    NSIndexPath * _selectedIndexPath;
    NSArray * _allCountries;
}

@property (retain, nonatomic) NSString * selectedCountryCode;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)setStyleProvider:(<ABStyleProvider> *)arg0;
- (NSString *)selectedCountryCode;
- (void)setSelectedCountryCode:(NSString *)arg0;
- (void)reloadCountryCodes;
- (void)_setSelectedCountryCode:(id)arg0 atPath:(NSString *)arg1;
- (void)configureSections;
- (void)scrollToSearchFieldAnimated:(char)arg0;
- (float)ab_heightToFitForViewInPopoverView;
- (void)dealloc;
- (ABCountryPickerViewController *)init;
- (void)tableView:(UITableView *)arg0 willDisplayCell:(UITableViewCell *)arg1 forRowAtIndexPath:(NSIndexPath *)arg2;
- (float)tableView:(UITableView *)arg0 heightForHeaderInSection:(int)arg1;
- (NSObject *)tableView:(UITableView *)arg0 viewForHeaderInSection:(int)arg1;
- (NSObject *)tableView:(UITableView *)arg0 willSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (void)tableView:(UITableView *)arg0 didSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (int)tableView:(UITableView *)arg0 numberOfRowsInSection:(int)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (int)numberOfSectionsInTableView:(UITableView *)arg0;
- (NSString *)tableView:(UITableView *)arg0 titleForHeaderInSection:(int)arg1;
- (NSObject *)sectionIndexTitlesForTableView:(NSArray *)arg0;
- (int)tableView:(UITableView *)arg0 sectionForSectionIndexTitle:(NSString *)arg1 atIndex:(int)arg2;
- (void)loadView;
- (void)viewWillAppear:(char)arg0;
- (void)_getRotationContentSettings:(struct ? *)arg0;
- (void)searchBarTextDidBeginEditing:(UISearchBar *)arg0;
- (void)searchBarSearchButtonClicked:(UISearchBar *)arg0;
- (void)searchDisplayController:(UISearchDisplayController *)arg0 willShowSearchResultsTableView:(NSObject *)arg1;
- (void)searchDisplayController:(UISearchDisplayController *)arg0 willHideSearchResultsTableView:(NSObject *)arg1;
- (void)searchDisplayControllerWillBeginSearch:(id)arg0;
- (void)searchDisplayControllerWillEndSearch:(id)arg0;
- (char)searchDisplayController:(UISearchDisplayController *)arg0 shouldReloadTableForSearchString:(NSString *)arg1;

@end
