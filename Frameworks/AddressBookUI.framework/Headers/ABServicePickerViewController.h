/* Runtime dump - ABServicePickerViewController
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABServicePickerViewController : ABPickerViewController <ABSimpleTextInputViewControllerDelegate>
{
    NSString * _selectedService;
    NSString * _customService;
    NSArray * _defaultServices;
    NSIndexPath * _selectedIndexPath;
}

@property (copy, nonatomic) NSString * selectedService;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSArray *)defaultServices;
+ (ABServicePickerViewController *)defaultService;

- (void)setStyleProvider:(<ABStyleProvider> *)arg0;
- (void)setSelectedService:(NSString *)arg0;
- (void)simpleTextInputViewController:(BRController *)arg0 didCompleteWithValue:(id)arg1;
- (NSString *)selectServiceTitle;
- (NSString *)addCustomServiceButtonLabel;
- (NSString *)addCustomServiceTitle;
- (NSString *)addCustomServicePlaceholder;
- (NSString *)selectedService;
- (void)dealloc;
- (ABServicePickerViewController *)init;
- (void)tableView:(UITableView *)arg0 willDisplayCell:(UITableViewCell *)arg1 forRowAtIndexPath:(NSIndexPath *)arg2;
- (NSObject *)tableView:(UITableView *)arg0 willSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (void)tableView:(UITableView *)arg0 didSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (int)tableView:(UITableView *)arg0 numberOfRowsInSection:(int)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (int)numberOfSectionsInTableView:(UITableView *)arg0;

@end
