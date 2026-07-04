/* Runtime dump - MBManager
 * Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@interface MBManager : NSObject
{
    id _delegate;
}

@property (nonatomic) NSObject<MBManagerDelegate> * delegate;

- (void)setLogLevel:(int)arg0;
- (void)cancel;
- (void)setDelegate:(NSObject<MBManagerDelegate> *)arg0;
- (MBManager *)init;
- (NSObject<MBManagerDelegate> *)delegate;
- (MBManager *)_init;
- (MBManager *)initWithDelegate:(NSObject<MBManagerDelegate> *)arg0 eventQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (NSString *)restoreFilesForDomain:(NSString *)arg0 relativePath:(NSString *)arg1 pendingOnly:(char)arg2 range:(struct _NSRange)arg3 error:(id *)arg4;
- (char)setupBackupWithPasscode:(NSString *)arg0 error:(id *)arg1;
- (char)isBackupEnabled;
- (void)setBackupEnabled:(char)arg0;
- (void)syncBackupEnabled;
- (NSObject *)backupState;
- (NSDictionary *)backupList;
- (NSError *)getBackupListWithError:(id *)arg0;
- (id)getBackupListWithFiltering:(char)arg0 error:(id *)arg1;
- (char)recordRestoreFailure:(id)arg0 error:(id *)arg1;
- (id)restoreFailuresForDataclass:(id)arg0 assetType:(NSObject *)arg1 range:(struct _NSRange)arg2;
- (unsigned int)countOfRestoreFailuresForDataclass:(id)arg0 assetType:(NSObject *)arg1;
- (void)startBackup;
- (char)startBackupWithError:(id *)arg0;
- (NSObject *)filesForSnapshotID:(unsigned int)arg0 backupUDID:(NSString *)arg1 error:(id *)arg2;
- (NSObject *)restoreState;
- (char)restoreFileExistsWithPath:(NSString *)arg0;
- (char)restoreDataExistsForApplicationWithBundleID:(NSString *)arg0 size:(unsigned long long *)arg1;
- (NSString *)restoreFilesForDomain:(NSString *)arg0 error:(id *)arg1;
- (NSString *)restoreFilesForDomain:(NSString *)arg0 relativePath:(NSString *)arg1 pendingOnly:(char)arg2 error:(id *)arg3;
- (void)prioritizeRestoreFileWithPath:(NSString *)arg0;
- (id)dateOfLastBackup;
- (id)dateOfNextScheduledBackup;
- (void)startRestoreForBackupUDID:(id)arg0 snapshotID:(unsigned int)arg1;
- (char)startRestoreForBackupUDID:(id)arg0 snapshotID:(unsigned int)arg1 error:(id *)arg2;
- (char)restoreFileWithPath:(NSString *)arg0 error:(id *)arg1;
- (char)restoreFileWithPath:(NSString *)arg0 context:(NSObject *)arg1 error:(id *)arg2;
- (void)restoreFileWithPath:(NSString *)arg0;
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
- (MBManager *)initWithDelegate:(NSObject<MBManagerDelegate> *)arg0;
- (char)countCameraRollQuota;
- (char)discountCameraRollQuota;
- (NSString *)domainInfoForName:(NSString *)arg0;

@end
