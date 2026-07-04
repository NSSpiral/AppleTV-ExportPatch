/* Runtime dump - ACSystemConfigManager
 * Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

@interface ACSystemConfigManager : NSObject
{
    NSObject<OS_dispatch_queue> * _timerQueue;
    NSObject<OS_dispatch_source> * _timerSource;
    NSObject<OS_dispatch_queue> * _preferencesQueue;
    struct __SCPreferences * _preferencesSession;
    int _applySkipCount;
}

+ (ACSystemConfigManager *)_livingInstance;
+ (unsigned int)_timeoutInterval;
+ (ACSystemConfigManager *)sharedInstance;

- (int)countOfAccountsWithAccountTypeIdentifier:(NSString *)arg0;
- (void)_keepAlive;
- (void)_createSCPreferencesSession;
- (void)_destroySCPreferencesSession;
- (void)_tearDown;
- (void)_handleSCPreferencesSessionNotification:(unsigned int)arg0;
- (void)dealloc;
- (ACSystemConfigManager *)init;
- (void).cxx_destruct;
- (void)setAccountsWithAccountTypeIdentifier:(NSString *)arg0 exist:(char)arg1;
- (void)setCountOfAccounts:(int)arg0 withAccountTypeIdentifier:(NSString *)arg1;
- (void *)_getValueForKey:(NSString *)arg0;
- (void)_setValue:(void *)arg0 forKey:(NSString *)arg1;
- (int)accountsWithAccountTypeIdentifierExist:(id)arg0;

@end
