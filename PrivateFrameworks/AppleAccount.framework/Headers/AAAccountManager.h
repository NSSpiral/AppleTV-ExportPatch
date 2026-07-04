/* Runtime dump - AAAccountManager
 * Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AAAccountManager : NSObject
{
    ACAccountStore * _accountStore;
    NSMutableArray * _accounts;
    NSMutableArray * _originalAccounts;
    id _accountStoreDidChangeObserver;
}

+ (AAAccountManager *)sharedManager;

- (void)reloadAccounts;
- (void)dealloc;
- (void).cxx_destruct;
- (ACAccountStore *)_accountStore;
- (void)_stopObservingAccountStoreDidChangeNotification;
- (void)_beginObservingAccountStoreDidChangeNotification;
- (void)_removeAppleIDCertsForUsername:(id)arg0;
- (id)accountsEnabledForDataclass:(id)arg0;
- (NSString *)accountWithUsername:(NSString *)arg0;
- (NSObject *)accountWithPersonID:(NSObject *)arg0;
- (void)updateAccount:(NSObject *)arg0;
- (void)saveAllAccounts;
- (void)addAccount:(NSObject *)arg0;
- (void)removeAccount:(NSObject *)arg0;
- (char)primaryAccount;
- (NSString *)accountWithIdentifier:(NSString *)arg0;
- (NSMutableArray *)accounts;

@end
