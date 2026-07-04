/* Runtime dump - ABContactGroupPickerViewController
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABContactGroupPickerViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    NSArray * _pickableGroups;
    UITableView * _tableView;
    <ABContactGroupPickerDelegate> * _groupPickerDelegate;
    CNContactStyle * _contactStyle;
}

@property (nonatomic) <ABContactGroupPickerDelegate> * groupPickerDelegate;
@property (retain, nonatomic) CNContactStyle * contactStyle;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (ABContactGroupPickerViewController *)pickableGroupsWithPickedGroups:(char)arg0;
+ (NSArray *)propertySections;
+ (char)propertiesLeftToPickWithPickedGroups:(char)arg0;

- (void)setContactStyle:(CNContactStyle *)arg0;
- (CNContactStyle *)contactStyle;
- (<ABContactGroupPickerDelegate> *)groupPickerDelegate;
- (void)setGroupPickerDelegate:(<ABContactGroupPickerDelegate> *)arg0;
- (id)_loadPickableGroupsWithPickedGroups:(char)arg0;
- (ABContactGroupPickerViewController *)initWithGroups:(id)arg0;
- (void)dealloc;
- (void)tableView:(UITableView *)arg0 willDisplayCell:(UITableViewCell *)arg1 forRowAtIndexPath:(NSIndexPath *)arg2;
- (void)tableView:(UITableView *)arg0 willDisplayHeaderView:(NSObject *)arg1 forSection:(int)arg2;
- (NSObject *)tableView:(UITableView *)arg0 willSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (void)tableView:(UITableView *)arg0 didSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (int)tableView:(UITableView *)arg0 numberOfRowsInSection:(int)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (int)numberOfSectionsInTableView:(UITableView *)arg0;
- (void)loadView;
- (void)viewWillAppear:(char)arg0;
- (void)cancel:(char)arg0;

@end
