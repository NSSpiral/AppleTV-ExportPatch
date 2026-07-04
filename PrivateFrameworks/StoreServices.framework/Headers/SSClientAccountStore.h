/* Runtime dump - SSClientAccountStore
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSClientAccountStore : SSAccountStore
{
    NSArray * _accounts;
    char _accountsValid;
}

@property (copy) NSArray * accounts;

- (NSNumber *)activeAccount;
- (void)reloadAccounts;
- (NSNumber *)activeLockerAccount;
- (void)dealloc;
- (SSClientAccountStore *)init;
- (NSNumber *)setActiveAccount:(SSAccount *)arg0;
- (NSNumber *)addAccount:(NSObject *)arg0;
- (NSNumber *)setActiveLockerAccount:(SSAccount *)arg0;
- (void)signOutAccount:(NSObject *)arg0;
- (NSString *)accountWithUniqueIdentifier:(NSString *)arg0;
- (NSArray *)accounts;
- (NSString *)accountWithUniqueIdentifier:(NSString *)arg0 scope:(int)arg1;
- (NSString *)accountWithUniqueIdentifier:(NSString *)arg0 reloadIfNecessary:(char)arg1;
- (void)setAccountCredits:(id)arg0 forAccountWithUniqueIdentifier:(NSString *)arg1;
- (void)signOutAllAccounts;
- (void)setAccounts:(NSArray *)arg0;
- (void)_reloadAccountsIfNeeded;
- (NSNumber *)_addAccount:(NSObject *)arg0 asActiveAccount:(char)arg1 activeLockerAccount:(char)arg2;
- (NSString *)_accountWithUniqueIdentifier:(NSString *)arg0;
- (void)_invalidateAccounts;
- (void)updateAccountsWithMessage:(NSString *)arg0 completionBlock:(id /* block */)arg1;
- (void)_signOutWithAccountIDs:(id)arg0;
- (id)_copyReloadedAccounts;

@end
