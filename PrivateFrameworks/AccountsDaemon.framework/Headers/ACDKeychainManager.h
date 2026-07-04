/* Runtime dump - ACDKeychainManager
 * Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@interface ACDKeychainManager : NSObject

+ (void)initialize;
+ (NSNumber *)credentialForAccount:(NSObject *)arg0 clientID:(NSObject *)arg1 error:(id *)arg2;
+ (NSObject *)credentialForManagedAccountObject:(NSObject *)arg0 clientID:(NSObject *)arg1;
+ (NSObject *)_credentialForAccountWithID:(int)arg0 accountTypeID:(NSObject *)arg1 credentialType:(NSString *)arg2 clientID:(NSObject *)arg3 error:(id *)arg4;
+ (void)_migrateCredential:(NSObject *)arg0 forAccount:(NSObject *)arg1 clientID:(NSObject *)arg2;
+ (NSObject *)_keychainServiceNameForClientID:(NSObject *)arg0 accountTypeIdentifier:(NSString *)arg1 key:(NSString *)arg2;
+ (NSString *)_itemForServiceName:(NSString *)arg0 username:(NSString *)arg1 accessGroup:(NSString *)arg2 error:(id *)arg3;
+ (void)_setCredentialForAccount:(NSObject *)arg0 clientID:(NSObject *)arg1 handleCredentialItemRemovals:(char)arg2 error:(id *)arg3;
+ (void)_saveCredential:(NSObject *)arg0 forAccount:(NSObject *)arg1 clientID:(NSObject *)arg2 error:(id *)arg3;
+ (void)_removeCredentialItemWithKey:(NSString *)arg0 forAccountWithID:(int)arg1 accountTypeID:(NSObject *)arg2 clientID:(NSObject *)arg3 error:(id *)arg4;
+ (void)_setNonPersistentCredentialTimerForAccount:(NSObject *)arg0;
+ (char)_shouldSyncCredentialForAccountType:(NSObject *)arg0;
+ (void)_setItem:(NSObject *)arg0 forServiceName:(NSString *)arg1 username:(NSString *)arg2 accessGroup:(NSString *)arg3 accessibility:(SASettingOpenAccessibility *)arg4 syncable:(char)arg5 error:(id *)arg6;
+ (void)_removeNonPersistentCredentialItemsForAccount:(NSObject *)arg0;
+ (void)removeCredentialForAccount:(NSObject *)arg0 error:(id *)arg1;
+ (void)removeCredentialForAccount:(NSObject *)arg0 clientID:(NSObject *)arg1 error:(id *)arg2;
+ (void)_removeCredentialForAccountWithUsername:(NSString *)arg0 accountIdentifier:(NSString *)arg1 accountTypeIdentifier:(NSString *)arg2 credentialType:(NSString *)arg3 clientID:(NSObject *)arg4 error:(id *)arg5;
+ (void)_removeCredentialItemWithKey:(NSString *)arg0 forAccountWithID:(int)arg1 username:(NSString *)arg2 accountTypeID:(NSObject *)arg3 clientID:(NSObject *)arg4 error:(id *)arg5;
+ (char)_removeItemForService:(NSObject *)arg0 username:(NSString *)arg1 accessGroup:(NSString *)arg2 error:(id *)arg3;
+ (NSObject *)credentialForManagedAccountObject:(NSObject *)arg0;
+ (NSNumber *)credentialForAccount:(NSObject *)arg0 clientID:(NSObject *)arg1;
+ (void)setCredentialForAccount:(NSObject *)arg0;
+ (void)setCredentialForAccount:(NSObject *)arg0 clientID:(NSObject *)arg1;
+ (void)setCredentialForAccount:(NSObject *)arg0 error:(id *)arg1;
+ (void)setCredentialForAccount:(NSObject *)arg0 clientID:(NSObject *)arg1 error:(id *)arg2;
+ (void)setCredentialForNewAccount:(NSObject *)arg0 clientID:(NSObject *)arg1 error:(id *)arg2;
+ (void)removeCredentialForAccount:(NSObject *)arg0;
+ (void)removeCredentialForAccount:(NSObject *)arg0 clientID:(NSObject *)arg1;
+ (void)_removeAllItemsForService:(NSObject *)arg0;
+ (void)_removeAllItemsForUsername:(id)arg0;

@end
