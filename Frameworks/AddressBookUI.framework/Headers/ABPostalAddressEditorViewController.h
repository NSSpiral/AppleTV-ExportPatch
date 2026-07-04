/* Runtime dump - ABPostalAddressEditorViewController
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPostalAddressEditorViewController : UITableViewController <ABPresenterDelegate, ABPropertyCellDelegate>
{
    NSMutableArray * _propertyItems;
    int _property;
    CNMutableContact * _contact;
    ABCardPropertyGroup * _propertyGroup;
    CNContactStyle * _contactStyle;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly) char isPresentingModalViewController;

+ (NSObject *)cellIdentifierForClass:(Class)arg0;
+ (NSObject *)cellIdentifierForEditingProperty:(NSObject *)arg0;

- (CNContactStyle *)contactStyle;
- (void)sender:(NSObject *)arg0 presentViewController:(BRController *)arg1;
- (void)sender:(NSObject *)arg0 dismissViewController:(BRController *)arg1;
- (void)registerContactCellClass:(Class)arg0;
- (void)propertyCell:(NSObject *)arg0 didUpdateItem:(NSObject *)arg1 withNewLabel:(char)arg2;
- (void)propertyCell:(NSObject *)arg0 didUpdateItem:(NSObject *)arg1 withNewValue:(char)arg2;
- (void)propertyCell:(NSObject *)arg0 performActionForItem:(NSObject *)arg1 withTransportType:(int)arg2;
- (void)propertyCellDidChangeLayout:(NSObject *)arg0;
- (NSObject *)defaultValueForPropertyCell:(NSObject *)arg0;
- (char)isPresentingModalViewController;
- (void)_rebuildPropertyGroupItems:(char)arg0;
- (void)_startEditingFirstCell;
- (void)validateContents;
- (ABPostalAddressEditorViewController *)initWithContact:(CNMutableContact *)arg0 property:(int)arg1 editNames:(char)arg2;
- (void)dealloc;
- (int)tableView:(UITableView *)arg0 numberOfRowsInSection:(int)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (float)tableViewSpacingForExtraSeparators:(id)arg0;
- (void)viewWillAppear:(char)arg0;
- (void)viewDidLoad;
- (void)viewDidAppear:(char)arg0;
- (void)done:(char)arg0;
- (void)cancel:(char)arg0;

@end
