/* Runtime dump - ACAccountMigrationLock
 * Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

@interface ACAccountMigrationLock : CPExclusiveLock

+ (void)signalMigrationFinished;
+ (NSString *)_currentSystemVersion;
+ (char)migrationFinished;
+ (ACAccountMigrationLock *)createAccountMigrationLock;
+ (void)writeMigrationVersionPref;

@end
