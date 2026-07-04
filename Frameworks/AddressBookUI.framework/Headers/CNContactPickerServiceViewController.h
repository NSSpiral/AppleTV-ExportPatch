/* Runtime dump - CNContactPickerServiceViewController
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface CNContactPickerServiceViewController : CNContactPickerLegacyViewController <CNContactPickerContentDelegate>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)pickerDidSelectContact:(id)arg0 propertyKey:(NSString *)arg1 propertyIdentifier:(int)arg2;
- (void)pickerDidCancel;
- (CNContactPickerServiceViewController *)init;

@end
