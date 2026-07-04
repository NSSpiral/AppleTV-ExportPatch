/* Runtime dump - AccountsManager
 * Image: /System/Library/PrivateFrameworks/AccountSettings.framework/AccountSettings
 */

@interface AccountsManager : NSObject
{
    NSMutableDictionary * _topLevelAccountsByID;
    NSMutableArray * _orderedTopLevelAccounts;
    NSMutableDictionary * _childAccountsByID;
    NSMutableDictionary * _childAccountIDToParentAccountID;
    NSMutableDictionary * _originalAccountsByID;
    unsigned int _dataVersion;
    NSArray * _runtimeFixers;
}

+ (void)shouldMigrateOldMailAccounts:(char *)arg0 oldDAAccounts:(char *)arg1 newAccountSettings:(char *)arg2;
+ (AccountsManager *)createAndLockMigrationLock;
+ (void)removeNewAccountSettingsToMigrateOldAccountInformation;
+ (void)killDataAccessIfNecessary;
+ (void)releaseMigrationLock:(id)arg0;
+ (NSDictionary *)fullPathToAccountSettingsPlist;
+ (NSObject *)_notifierClassNamesForAccountType:(NSObject *)arg0 dataclass:(ACDManagedDataclass *)arg1;
+ (void)accountWillChange:(NSDictionary *)arg0 forDataclass:(ACDManagedDataclass *)arg1;
+ (void)accountDidChange:(NSDictionary *)arg0 forDataclass:(ACDManagedDataclass *)arg1;
+ (void)_migrateAccountsIfNeeded;
+ (NSObject *)displayNameForGroupOfAccountType:(NSObject *)arg0 forBeginningOfSentence:(char)arg1;
+ (void)_setShouldSkipNotifications:(char)arg0;
+ (char)_oldMailAccountsInformationFound;
+ (char)_oldDAAccountsInformationFound;
+ (char)accountSettingsNeedsToBeMigrated;
+ (void)waitForMigrationToFinish;
+ (unsigned int)currentVersion;

- (void)dealloc;
- (unsigned int)count;
- (AccountsManager *)init;
- (AccountsManager *)initInsideOfMigration;
- (NSString *)syncableAccountWithSyncIdentifier:(NSObject<OS_dispatch_queue> *)arg0;
- (void)replaceAccountsWithTypes:(NSArray *)arg0 withAccounts:(MSAccounts *)arg1;
- (NSArray *)accountsWithTypes:(NSArray *)arg0;
- (NSArray *)accountsWithTypes:(NSArray *)arg0 withLoader:(RUILoader *)arg1;
- (NSString *)fullAccountWithIdentifier:(NSString *)arg0 loader:(RUILoader *)arg1;
- (void)_loadChildrenFromAccount:(NSObject *)arg0;
- (void)_removeChildrenForAccountWithIdentifier:(NSString *)arg0;
- (void)removeChildWithIdentifier:(NSString *)arg0 fromAccount:(NSObject *)arg1;
- (void)addChild:(OADDrawable *)arg0 toAccount:(NSObject *)arg1;
- (NSDictionary *)mergeInMemoryProperties:(NSDictionary *)arg0 originalProperties:(NSDictionary *)arg1 onDiskProperties:(NSDictionary *)arg2;
- (void)_sendNotificationsForChangedAccounts;
- (void)_setOriginalAccountDictionaries;
- (id)_createRuntimeFixers;
- (void)_addNotificationToDictionary:(NSDictionary *)arg0 forChangeType:(int)arg1 originalProperties:(NSDictionary *)arg2 currentProperties:(NSDictionary *)arg3;
- (NSString *)displayAccountWithSyncIdentifier:(NSObject<OS_dispatch_queue> *)arg0;
- (id)allBasicAccounts;
- (id)allBasicSyncableAccounts;
- (NSArray *)basicAccountsWithTypes:(NSArray *)arg0;
- (NSNumber *)fullDeviceLocalAccount;
- (id)allMailAccounts;
- (void)insertAccount:(NSObject *)arg0;
- (void)replaceAccount:(NSObject *)arg0 withAccount:(NSObject *)arg1;
- (NSDictionary *)_initWithAccountsInfo:(NSDictionary *)arg0;
- (unsigned int)countOfBasicAccountsWithTypes:(NSArray *)arg0;
- (AccountsManager *)initWithAccounsInfoArray:(NSArray *)arg0;
- (void)setDataVersion:(unsigned int)arg0;
- (void)updateAccount:(NSObject *)arg0;
- (void)saveAllAccounts;
- (void)deleteAccountWithIdentifier:(NSString *)arg0;
- (NSString *)accountWithIdentifier:(NSString *)arg0;
- (unsigned int)dataVersion;
- (void)deleteAccount:(NSObject *)arg0;

@end
