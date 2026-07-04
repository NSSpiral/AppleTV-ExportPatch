/* Runtime dump - ABCountryPickerController
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABCountryPickerController : UINavigationController <UITableViewDataSource, UITableViewDelegate>
{
    NSString * _selectedCountryCode;
    CNContactStyle * _contactStyle;
    UITableViewController * _tableViewController;
    UILocalizedIndexedCollation * _collation;
    NSArray * _countries;
    NSArray * _sections;
}

@property (copy, nonatomic) NSString * selectedCountryCode;
@property (nonatomic) <ABCountryPickerControllerDelegate> * delegate;
@property (retain, nonatomic) CNContactStyle * contactStyle;
@property (retain, nonatomic) UITableViewController * tableViewController;
@property (retain, nonatomic) UILocalizedIndexedCollation * collation;
@property (copy, nonatomic) NSArray * countries;
@property (copy, nonatomic) NSArray * sections;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)setContactStyle:(CNContactStyle *)arg0;
- (CNContactStyle *)contactStyle;
- (void)_loadCountryCodes;
- (UITableViewController *)tableViewController;
- (void)cancelPicker:(id)arg0;
- (void)setCountries:(NSArray *)arg0;
- (void)_configureSections;
- (void)setCollation:(UILocalizedIndexedCollation *)arg0;
- (NSArray *)countries;
- (NSString *)selectedCountryCode;
- (void)setSelectedCountryCode:(NSString *)arg0;
- (void)setTableViewController:(UITableViewController *)arg0;
- (void)dealloc;
- (void)tableView:(UITableView *)arg0 willDisplayCell:(UITableViewCell *)arg1 forRowAtIndexPath:(NSIndexPath *)arg2;
- (void)tableView:(UITableView *)arg0 willDisplayHeaderView:(NSObject *)arg1 forSection:(int)arg2;
- (void)tableView:(UITableView *)arg0 didSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (int)tableView:(UITableView *)arg0 numberOfRowsInSection:(int)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (int)numberOfSectionsInTableView:(UITableView *)arg0;
- (NSString *)tableView:(UITableView *)arg0 titleForHeaderInSection:(int)arg1;
- (NSObject *)sectionIndexTitlesForTableView:(NSArray *)arg0;
- (int)tableView:(UITableView *)arg0 sectionForSectionIndexTitle:(NSString *)arg1 atIndex:(int)arg2;
- (ABCountryPickerController *)initWithNibName:(NSString *)arg0 bundle:(NSObject *)arg1;
- (void)viewWillAppear:(char)arg0;
- (void)viewDidLoad;
- (void)setSections:(NSArray *)arg0;
- (NSArray *)sections;
- (UILocalizedIndexedCollation *)collation;

@end
