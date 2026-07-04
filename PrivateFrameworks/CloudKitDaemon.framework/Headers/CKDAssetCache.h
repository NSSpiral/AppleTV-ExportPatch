/* Runtime dump - CKDAssetCache
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDAssetCache : NSObject
{
    char _isUnitTestingAccount;
    char _isEvictionScheduled;
    CKDMMCS * _MMCS;
    CKSQLitePool * _dbPool;
    NSString * _applicationBundleID;
    NSString * _dbPath;
    NSString * _fileDownloadPath;
    NSString * _packageDownloadPath;
    NSString * _packageUploadPath;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _expiryTimer;
    int _fileDownloadPathFd;
}

@property (weak, nonatomic) CKDMMCS * MMCS;
@property (readonly, nonatomic) CKSQLitePool * dbPool;
@property (nonatomic) char isUnitTestingAccount;
@property (retain, nonatomic) NSString * applicationBundleID;
@property (retain, nonatomic) NSString * dbPath;
@property (retain, nonatomic) NSString * fileDownloadPath;
@property (retain, nonatomic) NSString * packageDownloadPath;
@property (retain, nonatomic) NSString * packageUploadPath;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * queue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> * expiryTimer;
@property (nonatomic) int fileDownloadPathFd;
@property char isEvictionScheduled;

+ (NSObject *)assetCacheWithApplicationBundleID:(NSString *)arg0 dbPath:(NSString *)arg1 fileDownloadPath:(NSString *)arg2 packageDownloadPath:(NSString *)arg3 packageUploadPath:(NSString *)arg4 shouldEvictOnCreation:(char)arg5;
+ (NSOperationQueue *)_sharedCachesQueue;
+ (NSObject *)_sharedCachesByBundleID;
+ (int)openFdForDownloadPath:(NSString *)arg0 error:(id *)arg1;

- (void)dealloc;
- (void).cxx_destruct;
- (NSObject<OS_dispatch_queue> *)queue;
- (void)setQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (NSString *)applicationBundleID;
- (NSObject<OS_dispatch_source> *)expiryTimer;
- (void)setExpiryTimer:(NSObject<OS_dispatch_source> *)arg0;
- (char)isUnitTestingAccount;
- (CKDMMCS *)MMCS;
- (void)setIsUnitTestingAccount:(char)arg0;
- (void)setMMCS:(NSSet *)arg0;
- (void)cancelExpiryTimer;
- (unsigned long long)evictAllFilesForced:(char)arg0;
- (unsigned long long)clearForced:(char)arg0;
- (NSString *)dbPath;
- (void)setApplicationBundleID:(NSString *)arg0;
- (NSData *)trackDownloadedData:(NSData *)arg0 signature:(NSObject *)arg1 error:(id *)arg2;
- (NSArray *)trackDownloadedMMCSItems:(NSArray *)arg0 error:(id *)arg1;
- (void)stopTrackingAssetHandlesByItemIDs:(id)arg0;
- (int)openFileDescriptorForItemID:(unsigned long long)arg0 itemType:(id *)arg1 error:(id *)arg2;
- (char)startTrackingAssetHandles:(id)arg0 error:(id *)arg1;
- (CKDAssetCache *)initWithApplicationBundleID:(NSString *)arg0 dbPath:(NSString *)arg1 fileDownloadPath:(NSString *)arg2 packageDownloadPath:(NSString *)arg3 packageUploadPath:(NSString *)arg4;
- (unsigned long long)_evictFilesForced:(char)arg0 evictNow:(char)arg1;
- (void)_expireAssetHandlesWithCompletionBlock:(id /* block */)arg0;
- (void)expireAssetHandlesIfNecessary;
- (CKSQLitePool *)dbPool;
- (NSData *)_saveData:(NSData *)arg0 error:(id *)arg1;
- (NSString *)fileDownloadPath;
- (int)fileDownloadPathFd;
- (NSArray *)_getAssetHandlesForDownloadedMMCSItems:(NSArray *)arg0 error:(id *)arg1;
- (void)_scheduleEvictionForDownloadedFiles;
- (void)_scheduleExpirationForAssetHandles;
- (void)_unregisterItemIDs:(id)arg0;
- (char)isEvictionScheduled;
- (void)setIsEvictionScheduled:(char)arg0;
- (unsigned long long)_evictDownloadedFilesForced:(char)arg0 evictNow:(char)arg1;
- (unsigned long long)_evictDownloadedFilesWithDatabase:(id)arg0 forced:(char)arg1 evictNow:(char)arg2;
- (NSString *)packageDownloadPath;
- (NSString *)packageUploadPath;
- (unsigned long long)_evictPackagesForced:(char)arg0 evictNow:(char)arg1;
- (void)_expireAssetHandlesWithExpiryDate:(NSDate *)arg0 completionBlock:(id /* block */)arg1;
- (unsigned long long)predictedEvictedSizeForAllFilesForced:(char)arg0;
- (void)setDbPath:(NSString *)arg0;
- (void)setFileDownloadPath:(NSString *)arg0;
- (void)setPackageDownloadPath:(NSString *)arg0;
- (void)setPackageUploadPath:(NSString *)arg0;
- (void)setFileDownloadPathFd:(int)arg0;

@end
