/* Runtime dump - ABContactAddLinkedCardAction
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABContactAddLinkedCardAction : ABContactAction <ABPeoplePickerNavigationControllerDelegate, ABPersonViewControllerDelegate>
{
    CNContact * _chosenContact;
    NSObject<ABContactAddLinkedCardActionDelegate> * _linkedCardActionDelegate;
    ABPeoplePickerNavigationController * _peoplePicker;
    CNContact * _selectedContact;
}

@property (retain, nonatomic) CNContact * chosenContact;
@property (nonatomic) NSObject<ABContactAddLinkedCardActionDelegate> * linkedCardActionDelegate;
@property (retain, nonatomic) ABPeoplePickerNavigationController * peoplePicker;
@property (retain, nonatomic) CNContact * selectedContact;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)performActionWithSender:(NSObject *)arg0;
- (void)setChosenContact:(CNContact *)arg0;
- (CNContact *)selectedContact;
- (void)setSelectedContact:(CNContact *)arg0;
- (void)peoplePickerLinkButtonTapped;
- (NSObject<ABContactAddLinkedCardActionDelegate> *)linkedCardActionDelegate;
- (char)personViewController:(ABPersonViewController *)arg0 shouldPerformDefaultActionForPerson:(void *)arg1 property:(int)arg2 identifier:(int)arg3;
- (char)peoplePickerNavigationController:(ABPeoplePickerNavigationController *)arg0 shouldAllowSelectingPersonWithRecordID:(int)arg1;
- (CNContact *)chosenContact;
- (void)setLinkedCardActionDelegate:(NSObject<ABContactAddLinkedCardActionDelegate> *)arg0;
- (void)dealloc;
- (ABPeoplePickerNavigationController *)peoplePicker;
- (void)setPeoplePicker:(ABPeoplePickerNavigationController *)arg0;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg0;
- (char)peoplePickerNavigationController:(ABPeoplePickerNavigationController *)arg0 shouldContinueAfterSelectingPerson:(void *)arg1;
- (char)peoplePickerNavigationController:(ABPeoplePickerNavigationController *)arg0 shouldContinueAfterSelectingPerson:(void *)arg1 property:(int)arg2 identifier:(int)arg3;

@end
