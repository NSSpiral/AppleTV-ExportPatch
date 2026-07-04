/* Runtime dump - IMDAccountController
 * Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDAccountController : NSObject
{
    NSMutableDictionary * _accounts;
    NSMutableDictionary * _activeAccounts;
    char _isLoading;
    char _isFirstLoad;
}

@property (readonly, nonatomic) NSDictionary * loadOldStatusStore;
@property (readonly, nonatomic) char isLoading;
@property (readonly, nonatomic) NSArray * accounts;
@property (readonly, nonatomic) NSArray * activeAccounts;
@property (readonly, nonatomic) NSArray * connectedAccounts;
@property (readonly, nonatomic) NSArray * connectingAccounts;
@property (readonly, nonatomic) NSArray * activeSessions;

+ (IMDAccountController *)sharedInstance;
+ (IMDAccountController *)sharedAccountController;

- (void)save;
- (void)dealloc;
- (IMDAccountController *)init;
- (char)isLoading;
- (void)load;
- (void)addAccount:(NSObject *)arg0;
- (void)removeAccount:(NSObject *)arg0;
- (NSArray *)accounts;
- (char)isAccountActive:(id)arg0;
- (void)_daemonWillShutdown:(id)arg0;
- (NSObject *)accountsForService:(NSObject *)arg0;
- (NSObject *)accountForAccountID:(NSObject *)arg0;
- (NSDictionary *)loadOldStatusStore;
- (void)activateAccount:(NSObject *)arg0;
- (void)_checkPowerAssertion;
- (NSObject *)activeAccountsForService:(NSObject *)arg0;
- (void)deactivateAccounts:(id)arg0 force:(char)arg1;
- (char)_isAccountActive:(id)arg0 forService:(struct __SCNetworkService *)arg1;
- (void)deactivateAccount:(NSObject *)arg0 force:(char)arg1;
- (void)deferredSave;
- (void)deactivateAccount:(NSObject *)arg0;
- (void)setupAccount:(NSObject *)arg0;
- (NSObject *)accountsForLoginID:(NSObject *)arg0 onService:(NSObject *)arg1;
- (NSArray *)connectedAccounts;
- (NSObject *)connectedAccountsForService:(NSObject *)arg0;
- (NSArray *)connectingAccounts;
- (NSObject *)connectingAccountsForService:(NSObject *)arg0;
- (NSObject *)accountForIDSAccountUniqueID:(NSObject *)arg0;
- (NSArray *)activeSessions;
- (NSNumber *)sessionForAccount:(NSObject *)arg0;
- (NSString *)anySessionForServiceName:(NSString *)arg0;
- (id)_superFormatFromAIML:(id)arg0;
- (void)activateAccounts:(id)arg0;
- (void)deactivateAccounts:(id)arg0;
- (NSArray *)activeAccounts;

@end
