/* Runtime dump - ABPropertyAlertCell
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPropertyAlertCell : ABPropertySimpleCell <ABPickerControllerDelegate>

@property (readonly, nonatomic) ABPropertyGroupAlertItem * alertItem;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (char)wantsChevron;

- (void)performDefaultAction;
- (char)shouldPerformDefaultAction;
- (void)pickerDidCancel:(id)arg0;
- (void)picker:(SAUIDomainObjectPicker *)arg0 didPickItem:(NSObject *)arg1;
- (ABPropertyGroupAlertItem *)alertItem;

@end
