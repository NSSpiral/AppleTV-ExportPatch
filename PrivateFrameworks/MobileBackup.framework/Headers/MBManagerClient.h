/* Runtime dump - MBManagerClient
 * Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@interface MBManagerClient : MBManager <MBConnectionHandler>
{
    MBConnection * _conn;
    int _stateToken;
    NSObject<OS_dispatch_queue> * _eventQueue;
}

- (void)setLogLevel:(int)arg0;
- (void)cancel;
- (void)dealloc;
- (void)setDelegate:(NSObject<MBManagerDelegate> *)arg0;
- (void)invalidate;
- (void)_establishConnection;
- (MBManagerClient *)initWithDelegate:(NSObject<MBManagerDelegate> *)arg0 eventQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (NSString *)restoreFilesForDomain:(NSString *)arg0 relativePath:(NSString *)arg1 pendingOnly:(char)arg2 range:(struct _NSRange)arg3 error:(id *)arg4;
- (char)setupBackupWithPasscode:(NSString *)arg0 error:(id *)arg1;
- (char)isBackupEnabled;
- (void)setBackupEnabled:(char)arg0;
- (void)syncBackupEnabled;
- (NSObject *)backupState;
- (NSError *)getBackupListWithError:(id *)arg0;
- (id)getBackupListWithFiltering:(char)arg0 error:(id *)arg1;
- (char)recordRestoreFailure:(id)arg0 error:(id *)arg1;
- (id)restoreFailuresForDataclass:(id)arg0 assetType:(NSObject *)arg1 range:(struct _NSRange)arg2;
- (unsigned int)countOfRestoreFailuresForDataclass:(id)arg0 assetType:(NSObject *)arg1;
- (char)startBackupWithError:(id *)arg0;
- (NSObject *)filesForSnapshotID:(unsigned int)arg0 backupUDID:(NSString *)arg1 error:(id *)arg2;
- (NSObject *)restoreState;
- (char)restoreFileExistsWithPath:(NSString *)arg0;
- (char)restoreDataExistsForApplicationWithBundleID:(NSString *)arg0 size:(unsigned long long *)arg1;
- (void)prioritizeRestoreFileWithPath:(NSString *)arg0;
- (id)dateOfLastBackup;
- (id)dateOfNextScheduledBackup;
- (char)startRestoreForBackupUDID:(id)arg0 snapshotID:(unsigned int)arg1 error:(id *)arg2;
- (char)restoreFileWithPath:(NSString *)arg0 error:(id *)arg1;
- (char)restoreFileWithPath:(NSString *)arg0 context:(NSObject *)arg1 error:(id *)arg2;
- (char)restoreApplicationWithBundleID:(NSString *)arg0 failed:(char)arg1 error:(id *)arg2;
- (char)restoreApplicationWithBundleID:(NSString *)arg0 failed:(char)arg1 context:(NSObject *)arg2 error:(id *)arg3;
- (char)cancelApplicationRestoreWithBundleID:(NSString *)arg0 error:(id *)arg1;
- (void)finishRestore;
- (void)insufficientFreeSpaceToRestore;
- (void)cancelRestore;
- (char)deleteBackupUDID:(id)arg0 error:(id *)arg1;
- (char)startScanWithError:(id *)arg0;
- (unsigned long long)nextBackupSize;
- (NSArray *)domainInfoList;
- (char)removeDomainName:(NSString *)arg0 error:(id *)arg1;
- (char)isBackupEnabledForDomainName:(NSString *)arg0;
- (void)setBackupEnabled:(char)arg0 forDomainName:(NSString *)arg1;
- (char)extractItemFromBackupUDID:(id)arg0 snapshotID:(unsigned int)arg1 domainName:(NSString *)arg2 relativePath:(NSString *)arg3 toPath:(NSString *)arg4 error:(id *)arg5;
- (char)addFileToBackupUDID:(id)arg0 snapshotID:(unsigned int)arg1 domainName:(NSString *)arg2 relativePath:(NSString *)arg3 fromPath:(NSString *)arg4 error:(id *)arg5;
- (char)deleteItemFromBackupUDID:(id)arg0 snapshotID:(unsigned int)arg1 domainName:(NSString *)arg2 relativePath:(NSString *)arg3 error:(id *)arg4;
- (id)getAppleIDsForBackupUDID:(id)arg0 snapshotID:(unsigned int)arg1 error:(id *)arg2;
- (id)getAppleIDsForBackupUDID:(id)arg0 snapshotID:(unsigned int)arg1 activeAppleID:(id *)arg2 error:(id *)arg3;
- (NSDictionary *)restoreInfo;
- (int)getLogLevel;
- (void)setAllowiTunesBackup:(char)arg0;
- (char)allowiTunesBackup;
- (char)countCameraRollQuotaForBackupUDID:(id)arg0 error:(id *)arg1;
- (char)discountCameraRollQuotaForBackupUDID:(id)arg0 error:(id *)arg1;
- (void)rebootDevice;
- (void)_backupDidBeginNotification;
- (void)wakeUp;
- (NSURLRequest *)_sendRequest:(NSURLRequest *)arg0 arguments:(NSDictionary *)arg1 error:(id *)arg2;
- (NSURLRequest *)_sendRequest:(NSURLRequest *)arg0 arguments:(NSDictionary *)arg1;
- (void)connection:(NSURLConnection *)arg0 didReceiveMessage:(NSString *)arg1;
- (void)connectionWasInterrupted:(id)arg0;
- (void)connectionWasInvalid:(id)arg0;
- (void)accountChanged;
- (void)keyBagIsLocking;
- (void)keyBagIsUnlocked;
- (char)deleteAccountWithError:(id *)arg0;
- (char)deleteSnapshotID:(unsigned int)arg0 fromBackupUDID:(id)arg1 error:(id *)arg2;
- (char)acquireLockWithBackupUDID:(NSString *)arg0 owner:(NSObject *)arg1 timeout:(double)arg2 error:(id *)arg3;
- (char)releaseLockWithBackupUDID:(NSString *)arg0 owner:(NSObject *)arg1 error:(id *)arg2;
- (void)repair;
- (char)countCameraRollQuota;
- (char)discountCameraRollQuota;
- (NSString *)domainInfoForName:(NSString *)arg0;

@end
