/* Runtime dump - BRCAccountHandler
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCAccountHandler : NSObject
{
    BRCAccountSession * _session;
    NSString * _currentAccountID;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_queue> * _migrationStatusSetterQueue;
    char _hasSetMigrationComplete;
    <BRCAccountHandlerDelegate> * _delegate;
}

@property (weak, nonatomic) <BRCAccountHandlerDelegate> * delegate;
@property (readonly, nonatomic) BRCAccountSession * session;

+ (BRCAccountHandler *)inSystemStoreAccountIDForUbiquityDataclass;
+ (void)_migrateAccountIfNecessaryForAccountID:(NSObject *)arg0;
+ (BRCAccountHandler *)inSystemStoreAccountIDWithServiceValidation:(char)arg0 isServiceEnabled:(char *)arg1 didCompleteMigration:(char *)arg2;
+ (BRCAccountHandler *)inSystemStoreAccountIDWithServiceValidation:(char)arg0;
+ (char)isAccountStillUsingUbiquity;

- (void)setDelegate:(<BRCAccountHandlerDelegate> *)arg0;
- (BRCAccountHandler *)init;
- (<BRCAccountHandlerDelegate> *)delegate;
- (void).cxx_destruct;
- (BRCAccountSession *)session;
- (void)setMigrationStatus:(char)arg0 forDSID:(NSNumber *)arg1 shouldNotify:(char)arg2;
- (NSString *)accountIDPath;
- (void)_watchAccountChanges;
- (NSObject *)onDiskAccountID;
- (void)_cleanupPushAndActivitiesStatesWhenNoSessionExists;
- (char)setOnDiskAccountID:(NSObject *)arg0;
- (char)_loadCurrentOnDiskAccountSessionWithError:(id *)arg0;
- (void)jetsamCloudDocsApps;
- (void)_destroyCurrentSessionSynchronously;
- (char)_createCurrentAccountSessionWithID:(int)arg0 error:(id *)arg1;
- (void)_handleAccountWillChange;
- (void)_handleAccountDidChange;
- (void)_updateAccountToAccountID:(NSObject *)arg0;
- (void)_updateAccount;
- (void)startAndLoadCurrentAccountSynchronously;
- (void)destroyCurrentSessionSynchronously;
- (char)createCurrentAccountSessionWithID:(int)arg0 error:(id *)arg1;
- (void)markMigrationCompletedForDSID:(id)arg0;

@end
