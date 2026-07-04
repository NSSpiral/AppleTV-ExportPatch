/* Runtime dump - PSInternationalLanguageController
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSInternationalLanguageController : PSViewController <UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate>
{
    UISearchBar * _searchBar;
    UITableView * _tableView;
    UIView * _contentView;
    char _searchIsActive;
    PSLanguageSelector * _languageSelector;
    PSLocaleSelector * _localeSelector;
    PSLanguage * _checkedLanguage;
    NSArray * _deviceLanguages;
    NSArray * _otherLanguages;
    NSArray * _filteredDeviceLanguages;
    NSArray * _filteredOtherLanguages;
    NSString * _savedSearchTerm;
}

@property (retain, nonatomic) PSLanguageSelector * languageSelector;
@property (retain, nonatomic) PSLocaleSelector * localeSelector;
@property (retain, nonatomic) PSLanguage * checkedLanguage;
@property (retain, nonatomic) NSArray * deviceLanguages;
@property (retain, nonatomic) NSArray * otherLanguages;
@property (retain, nonatomic) NSArray * filteredDeviceLanguages;
@property (retain, nonatomic) NSArray * filteredOtherLanguages;
@property (retain, nonatomic) NSString * savedSearchTerm;
@property (nonatomic) char searchIsActive;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (PSInternationalLanguageController *)init;
- (void)tableView:(UITableView *)arg0 didSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (int)tableView:(UITableView *)arg0 numberOfRowsInSection:(int)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (int)numberOfSectionsInTableView:(UITableView *)arg0;
- (NSString *)tableView:(UITableView *)arg0 titleForHeaderInSection:(int)arg1;
- (void)loadView;
- (void)viewWillAppear:(char)arg0;
- (void)viewDidAppear:(char)arg0;
- (void)searchBar:(UISearchBar *)arg0 textDidChange:(char)arg1;
- (void)searchBarCancelButtonClicked:(UISearchBar *)arg0;
- (void)searchBarTextDidBeginEditing:(UISearchBar *)arg0;
- (void)searchBarTextDidEndEditing:(UISearchBar *)arg0;
- (void)cancelButtonTapped;
- (void)_removeBlackFrame;
- (void)setLanguageSelector:(PSLanguageSelector *)arg0;
- (void)setLocaleSelector:(PSLocaleSelector *)arg0;
- (void)setCheckedLanguage:(PSLanguage *)arg0;
- (void)setDeviceLanguages:(NSArray *)arg0;
- (void)setOtherLanguages:(NSArray *)arg0;
- (void)setFilteredDeviceLanguages:(NSArray *)arg0;
- (void)setFilteredOtherLanguages:(NSArray *)arg0;
- (void)setSavedSearchTerm:(NSString *)arg0;
- (void)updateNavigationItem;
- (void)generateLanguageCells;
- (void)loadData;
- (NSObject *)_mainContentView;
- (PSLanguageSelector *)languageSelector;
- (PSLocaleSelector *)localeSelector;
- (void)sortByLocalizedLanguage:(NSString *)arg0;
- (NSArray *)filteredDeviceLanguages;
- (NSArray *)filteredOtherLanguages;
- (NSArray *)deviceLanguages;
- (NSArray *)otherLanguages;
- (PSLanguage *)checkedLanguage;
- (void)doneButtonTapped;
- (NSArray *)filteredLanguagesForLanguageList:(NSArray *)arg0 searchString:(NSString *)arg1;
- (void)reloadDataAndScrollToCheckedLanguageWithAnimation:(char)arg0;
- (NSString *)savedSearchTerm;
- (char)searchIsActive;
- (void)setSearchIsActive:(char)arg0;

@end
