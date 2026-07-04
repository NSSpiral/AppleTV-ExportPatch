/* Runtime dump - ACUIAddOtherAccountsViewController
 * Image: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
 */

@interface ACUIAddOtherAccountsViewController : PSListController <ACUISetupViewControllerDelegate>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)setupViewControllerDidDismiss:(id)arg0;
- (id)_specifiersForOtherMailAccounts;
- (id)_specifiersForOtherContactsAccounts;
- (id)_specifiersForOtherCalendarAccounts;
- (ACUIAccountViewProvidersManager *)_viewProvidersManager;
- (NSArray *)specifiers;

@end
