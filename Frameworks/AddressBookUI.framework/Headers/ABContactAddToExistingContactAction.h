/* Runtime dump - ABContactAddToExistingContactAction
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABContactAddToExistingContactAction : ABContactAction <ABPeoplePickerNavigationControllerDelegate, ABNewPersonViewControllerDelegate>
{
    CNContact * _chosenContact;
    ABPeoplePickerNavigationController * _peoplePicker;
}

@property (retain, nonatomic) CNContact * chosenContact;
@property (retain, nonatomic) ABPeoplePickerNavigationController * peoplePicker;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)performActionWithSender:(NSObject *)arg0;
- (void)setChosenContact:(CNContact *)arg0;
- (CNContact *)chosenContact;
- (void)newPersonViewController:(BRController *)arg0 didCompleteWithNewPerson:(void *)arg1;
- (void)dealloc;
- (ABPeoplePickerNavigationController *)peoplePicker;
- (void)setPeoplePicker:(ABPeoplePickerNavigationController *)arg0;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg0;
- (char)peoplePickerNavigationController:(ABPeoplePickerNavigationController *)arg0 shouldContinueAfterSelectingPerson:(void *)arg1;
- (char)peoplePickerNavigationController:(ABPeoplePickerNavigationController *)arg0 shouldContinueAfterSelectingPerson:(void *)arg1 property:(int)arg2 identifier:(int)arg3;

@end
