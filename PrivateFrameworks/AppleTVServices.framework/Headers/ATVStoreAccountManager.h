/* Runtime dump - ATVStoreAccountManager
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVStoreAccountManager : NSObject
{
    ATVAuthenticationContext * _pendingAuthenticationContext;
    ATVAuthenticationContext * _activeAuthenticationContext;
    SSAccount * _activeAccount;
    char _makingAccountChanges;
    char _isActiveAccountUpdateScheduled;
    NSObject<OS_dispatch_queue> * _serialAccessQueue;
    NSObject<OS_dispatch_queue> * _authenticationQueue;
}

@property (readonly, nonatomic) SSAccount * activeAccount;

+ (ATVStoreAccountManager *)sharedInstance;
+ (char)automaticallyNotifiesObserversOfActiveAccount;

- (SSAccount *)activeAccount;
- (ATVStoreAccountManager *)init;
- (void).cxx_destruct;
- (void)authenticateAccount:(NSObject *)arg0 allowPrompt:(char)arg1 completion:(id /* block */)arg2;
- (NSNumber *)setActiveAccount:(SSAccount *)arg0;
- (void)notePasswordEntered:(id)arg0 forAccountName:(NSString *)arg1;
- (void)_authenticateActivityChanged:(NSNotification *)arg0;
- (void)_accountStoreChanged;
- (void)_performSynchronizedBlock:(id /* block */)arg0;
- (void)signOutAccount:(NSObject *)arg0;
- (void)_signOutAccount:(NSObject *)arg0 eraseKeyChainData:(char)arg1;
- (void)authenticateAccount:(NSObject *)arg0 withPassword:(NSString *)arg1 allowPrompt:(char)arg2 completion:(id /* block */)arg3;
- (void)_setAuthenticationContext:(NSObject *)arg0;
- (void)_dequeueAuthenticationContextAndAuthenticate;
- (NSString *)_popAuthenticationContext;
- (NSString *)accountWithAccountName:(NSString *)arg0;
- (void)_handleAuthenticationContext:(NSObject *)arg0 response:(NSURLResponse *)arg1 error:(NSError *)arg2;
- (void)_updateActiveAccount;
- (NSString *)accountWithUniqueIdentifier:(NSString *)arg0;
- (void)removeAccount:(NSObject *)arg0;
- (void)authenticateWithName:(NSString *)arg0 password:(NSString *)arg1 completion:(id /* block */)arg2;
- (void)fetchFamilyInfoForActiveAccountWithCompletion:(id /* block */)arg0;
- (NSArray *)accounts;

@end
