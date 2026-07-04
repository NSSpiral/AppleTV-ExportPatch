/* Runtime dump - ABPropertyInstantMessageEditingCell
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPropertyInstantMessageEditingCell : ABPropertySimpleEditingCell <ABPickerControllerDelegate>

@property (readonly, nonatomic) CNInstantMessageAddress * profile;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)pickerDidCancel:(id)arg0;
- (void)picker:(SAUIDomainObjectPicker *)arg0 didPickItem:(NSObject *)arg1;
- (void)labelButtonClicked:(id)arg0;
- (CNInstantMessageAddress *)profile;

@end
