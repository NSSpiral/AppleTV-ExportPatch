/* Runtime dump - ACUIIdentityPickerViewController
 * Image: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
 */

@interface ACUIIdentityPickerViewController : PSListController
{
    <ACUIIdentityPickerViewControllerDelegate> * _delegate;
    NSString * _property;
    NSArray * _identities;
    NSArray * _emailAddresses;
    char _allowEditing;
}

@property (readonly, nonatomic) NSString * property;

- (void)tableView:(UITableView *)arg0 accessoryButtonTappedForRowWithIndexPath:(NSIndexPath *)arg1;
- (void)tableView:(UITableView *)arg0 didSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_finishedFetchingIdentities:(id)arg0;
- (struct __SecIdentity *)_selectedIdentity;
- (char)_isPropertyEnabled;
- (void)_setValue:(NSValue *)arg0 forSwitchSpecifier:(id)arg1;
- (id)_valueForSwitchSpecifier:(id)arg0;
- (id)_specifiersForIdentities:(id)arg0;
- (struct __SecIdentity *)_identityToAutoselectWithEnabled:(char)arg0;
- (void)_setPropertyEnabled:(char)arg0 identity:(struct __SecIdentity *)arg1;
- (void)_updateCell:(NSObject *)arg0 selected:(char)arg1;
- (char)_allowIdentitySelection;
- (NSArray *)_identitySpecifiers;
- (NSString *)property;
- (NSArray *)specifiers;

@end
