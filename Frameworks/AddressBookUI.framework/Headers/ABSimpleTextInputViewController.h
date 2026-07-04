/* Runtime dump - ABSimpleTextInputViewController
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABSimpleTextInputViewController : UITableViewController <ABPropertyEditingTableViewCellDelegate>
{
    <ABSimpleTextInputViewControllerDelegate> * _delegate;
    id _value;
    NSString * _placeholder;
    <ABStyleProvider> * _styleProvider;
}

@property (nonatomic) <ABSimpleTextInputViewControllerDelegate> * delegate;
@property (copy, nonatomic) NSString * stringValue;
@property (copy, nonatomic) NSString * placeholder;
@property (retain, nonatomic) <ABStyleProvider> * styleProvider;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (<ABStyleProvider> *)styleProvider;
- (void)setStyleProvider:(<ABStyleProvider> *)arg0;
- (float)ab_heightToFitForViewInPopoverView;
- (void)setTitleLocalizationKey:(NSString *)arg0;
- (void)propertyEditingTableViewCell:(NSObject *)arg0 valueDidChange:(NSDictionary *)arg1;
- (void)updateSaveButton;
- (void)dealloc;
- (void)setDelegate:(<ABSimpleTextInputViewControllerDelegate> *)arg0;
- (ABSimpleTextInputViewController *)init;
- (float)tableView:(UITableView *)arg0 heightForRowAtIndexPath:(NSIndexPath *)arg1;
- (NSObject *)tableView:(UITableView *)arg0 willSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (int)tableView:(UITableView *)arg0 numberOfRowsInSection:(int)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (int)numberOfSectionsInTableView:(UITableView *)arg0;
- (<ABSimpleTextInputViewControllerDelegate> *)delegate;
- (void)setPlaceholder:(NSString *)arg0;
- (void)viewWillAppear:(char)arg0;
- (void)viewDidLoad;
- (void)viewWillDisappear:(char)arg0;
- (char)_isSupportedInterfaceOrientation:(int)arg0;
- (char)_allowsAutorotation;
- (NSString *)stringValue;
- (void)setStringValue:(NSString *)arg0;
- (NSString *)placeholder;
- (void)save:(id *)arg0;
- (void)cancel:(char)arg0;

@end
