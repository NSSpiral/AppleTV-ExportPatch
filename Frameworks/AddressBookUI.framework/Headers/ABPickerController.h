/* Runtime dump - ABPickerController
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPickerController : UINavigationController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate>
{
    char _allowsCustomItems;
    NSString * _selectedItem;
    NSArray * _builtinItems;
    NSArray * _customItems;
    NSString * _itemLocalizationKey;
    id _itemLocalizationBlock;
    CNContactStyle * _contactStyle;
    UITableViewController * _tableViewController;
    NSIndexPath * _selectedIndexPath;
}

@property (retain, nonatomic) NSString * selectedItem;
@property (nonatomic) <ABPickerControllerDelegate> * delegate;
@property (copy, nonatomic) NSArray * builtinItems;
@property (copy, nonatomic) NSArray * customItems;
@property (nonatomic) char allowsCustomItems;
@property (copy, nonatomic) NSString * itemLocalizationKey;
@property (copy, nonatomic) id itemLocalizationBlock;
@property (retain, nonatomic) CNContactStyle * contactStyle;
@property (retain, nonatomic) UITableViewController * tableViewController;
@property (retain, nonatomic) NSIndexPath * selectedIndexPath;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)setContactStyle:(CNContactStyle *)arg0;
- (CNContactStyle *)contactStyle;
- (BRControl *)_itemAtIndexPath:(NSIndexPath *)arg0;
- (UITableViewController *)tableViewController;
- (void)cancelPicker:(id)arg0;
- (void)setTableViewController:(UITableViewController *)arg0;
- (void)setBuiltinItems:(NSArray *)arg0;
- (NSObject *)titleForPickerItem:(NSObject *)arg0;
- (NSObject *)titleForAddCustomItem;
- (void)setCustomItems:(NSArray *)arg0;
- (void)setAllowsCustomItems:(char)arg0;
- (void)removeCustomItem:(NSObject *)arg0;
- (id /* block */)itemLocalizationBlock;
- (NSString *)itemLocalizationKey;
- (char)allowsCustomItems;
- (NSArray *)builtinItems;
- (NSArray *)customItems;
- (void)_updateRightButtonItem;
- (void)donePicker:(id)arg0;
- (void)setSelectedIndexPath:(NSIndexPath *)arg0;
- (void)customLabelUpdated:(id)arg0;
- (void)setItemLocalizationKey:(NSString *)arg0;
- (void)setItemLocalizationBlock:(id /* block */)arg0;
- (NSIndexPath *)selectedIndexPath;
- (void)dealloc;
- (void)tableView:(UITableView *)arg0 willDisplayCell:(UITableViewCell *)arg1 forRowAtIndexPath:(NSIndexPath *)arg2;
- (void)tableView:(UITableView *)arg0 willDisplayHeaderView:(NSObject *)arg1 forSection:(int)arg2;
- (void)tableView:(UITableView *)arg0 didSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (int)tableView:(UITableView *)arg0 editingStyleForRowAtIndexPath:(NSIndexPath *)arg1;
- (char)tableView:(UITableView *)arg0 shouldIndentWhileEditingRowAtIndexPath:(NSIndexPath *)arg1;
- (void)tableView:(UITableView *)arg0 didEndEditingRowAtIndexPath:(NSIndexPath *)arg1;
- (int)tableView:(UITableView *)arg0 numberOfRowsInSection:(int)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (int)numberOfSectionsInTableView:(UITableView *)arg0;
- (void)tableView:(UITableView *)arg0 commitEditingStyle:(int)arg1 forRowAtIndexPath:(NSIndexPath *)arg2;
- (char)isEditing;
- (ABPickerController *)initWithNibName:(NSString *)arg0 bundle:(NSObject *)arg1;
- (void)textFieldDidBeginEditing:(UITextField *)arg0;
- (char)textFieldShouldEndEditing:(UITextField *)arg0;
- (char)textFieldShouldReturn:(UITextField *)arg0;
- (void)viewWillAppear:(char)arg0;
- (void)setSelectedItem:(NSString *)arg0;
- (NSString *)selectedItem;

@end
