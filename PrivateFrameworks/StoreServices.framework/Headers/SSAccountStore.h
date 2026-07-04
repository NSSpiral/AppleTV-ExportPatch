/* Runtime dump - SSAccountStore
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSAccountStore : NSObject
{
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    SSKeyValueStore * _keyValueStore;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    NSMutableArray * _notifyTokens;
}

@property (readonly) SSAccount * activeAccount;
@property (readonly) SSAccount * activeLockerAccount;
@property (readonly, copy) NSArray * accounts;
@property (readonly) char expired;
@property (readonly) char authenticationActive;

+ (SSAccountStore *)defaultStore;
+ (char)isExpired;
+ (NSObject *)existingDefaultStore;
+ (char)isExpiredForTokenType:(int)arg0;
+ (void)resetExpiration;
+ (void)resetExpirationForTokenType:(int)arg0;
+ (double)tokenExpirationInterval;
+ (void)setDefaultStore:(NoteStoreObject *)arg0;

- (SSAccount *)activeAccount;
- (void)reloadAccounts;
- (SSAccount *)activeLockerAccount;
- (void)dealloc;
- (SSAccountStore *)init;
- (NSNumber *)setActiveAccount:(SSAccount *)arg0;
- (NSNumber *)addAccount:(NSObject *)arg0;
- (NSNumber *)setActiveLockerAccount:(SSAccount *)arg0;
- (void)signOutAccount:(NSObject *)arg0;
- (char)isAuthenticationActive;
- (NSString *)accountWithUniqueIdentifier:(NSString *)arg0;
- (char)isExpired;
- (NSArray *)accounts;
- (SSKeyValueStore *)_keyValueStore;
- (char)isExpiredForTokenType:(int)arg0;
- (void)resetExpiration;
- (void)resetExpirationForTokenType:(int)arg0;
- (NSString *)accountWithUniqueIdentifier:(NSString *)arg0 scope:(int)arg1;
- (NSString *)accountWithUniqueIdentifier:(NSString *)arg0 reloadIfNecessary:(char)arg1;
- (void)getDefaultAccountNameUsingBlock:(id /* block */)arg0;
- (void)setAccountCredits:(id)arg0 forAccountWithUniqueIdentifier:(NSString *)arg1;
- (void)setDefaultAccountName:(NSString *)arg0 completionBlock:(id /* block */)arg1;
- (void)signOutAllAccounts;
- (void)_dispatchAsync:(id)arg0;
- (void)_dispatchSync:(id)arg0;
- (void)_postAccountStoreChangeNotification;

@end
