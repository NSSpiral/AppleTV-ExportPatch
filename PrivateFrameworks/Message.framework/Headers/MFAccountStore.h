/* Runtime dump - MFAccountStore
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFAccountStore : NSObject
{
    int _accountStoreLock;
    ACAccountStore * _accountStore;
}

@property (readonly) ACAccountStore * persistentStore;

+ (MFAccountStore *)sharedAccountStore;
+ (char)_shouldUpdateAccountsInPlace;
+ (NSObject *)_accountWithAccountClass:(Class)arg0 persistentAccount:(ACAccount *)arg1 useExisting:(char)arg2;

- (ACAccountStore *)persistentStore;
- (void)dealloc;
- (MFAccountStore *)init;
- (NSNumber *)existingAccountWithPersistentAccount:(ACAccount *)arg0;
- (NSString *)newPersistentAccountWithAccountTypeIdentifier:(NSString *)arg0;
- (NSString *)supportedDataclassesWithAccountTypeIdentifier:(NSString *)arg0;
- (void)savePersistentAccountWithAccount:(NSObject *)arg0;
- (void)removePersistentAccountWithAccount:(NSObject *)arg0;
- (NSString *)accountsWithTypeIdentifiers:(id)arg0 error:(id *)arg1;
- (void)setPersistentStore:(ACAccountStore *)arg0;
- (void)_accountsStoreChanged:(NSNotification *)arg0;
- (NSNumber *)_accountWithPersistentAccount:(ACAccount *)arg0 useExisting:(char)arg1;

@end
