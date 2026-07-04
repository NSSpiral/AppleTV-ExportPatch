/* Runtime dump - CNContactPickerLegacyViewController
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface CNContactPickerLegacyViewController : CNContactPickerContentViewController <ABPeoplePickerNavigationControllerDelegate>
{
    void * _addressBook;
    char _clientHasContactsAccess;
    ABPeoplePickerNavigationController * _legacyPicker;
}

@property char clientHasContactsAccess;
@property (retain) ABPeoplePickerNavigationController * legacyPicker;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)setupWithOptions:(NSDictionary *)arg0 readyBlock:(id /* block */)arg1;
- (char)peoplePickerNavigationController:(ABPeoplePickerNavigationController *)arg0 shouldAllowSelectingPersonWithRecordID:(int)arg1;
- (void)setLegacyPicker:(ABPeoplePickerNavigationController *)arg0;
- (void)setClientHasContactsAccess:(char)arg0;
- (ABPeoplePickerNavigationController *)legacyPicker;
- (char)clientHasContactsAccess;
- (void)dealloc;
- (CNContactPickerLegacyViewController *)init;
- (void).cxx_destruct;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg0;
- (char)peoplePickerNavigationController:(ABPeoplePickerNavigationController *)arg0 shouldContinueAfterSelectingPerson:(void *)arg1;
- (char)peoplePickerNavigationController:(ABPeoplePickerNavigationController *)arg0 shouldContinueAfterSelectingPerson:(void *)arg1 property:(int)arg2 identifier:(int)arg3;
- (void)setValue:(NSObject *)arg0 forUndefinedKey:(NSString *)arg1;

@end
