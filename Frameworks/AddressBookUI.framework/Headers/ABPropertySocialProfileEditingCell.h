/* Runtime dump - ABPropertySocialProfileEditingCell
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPropertySocialProfileEditingCell : ABPropertySimpleEditingCell <ABPickerControllerDelegate>
{
    NSString * _previousValue;
}

@property (readonly, nonatomic) CNSocialProfile * profile;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)pickerDidCancel:(id)arg0;
- (void)picker:(SAUIDomainObjectPicker *)arg0 didPickItem:(NSObject *)arg1;
- (void)labelButtonClicked:(id)arg0;
- (void)dealloc;
- (ABPropertySocialProfileEditingCell *)initWithStyle:(int)arg0 reuseIdentifier:(NSString *)arg1;
- (struct ?)suggestionsForString:(NSString *)arg0 inputIndex:(unsigned int)arg1;
- (CNSocialProfile *)profile;

@end
