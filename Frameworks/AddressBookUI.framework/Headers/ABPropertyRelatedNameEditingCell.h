/* Runtime dump - ABPropertyRelatedNameEditingCell
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPropertyRelatedNameEditingCell : ABPropertySimpleEditingCell <ABPeoplePickerNavigationControllerDelegate>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)performAccessoryAction;
- (ABPropertyRelatedNameEditingCell *)initWithStyle:(int)arg0 reuseIdentifier:(NSString *)arg1;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg0;
- (char)peoplePickerNavigationController:(ABPeoplePickerNavigationController *)arg0 shouldContinueAfterSelectingPerson:(void *)arg1;
- (char)peoplePickerNavigationController:(ABPeoplePickerNavigationController *)arg0 shouldContinueAfterSelectingPerson:(void *)arg1 property:(int)arg2 identifier:(int)arg3;

@end
