/* Runtime dump - PLSearchIndexManager
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLSearchIndexManager : NSObject
{
    PLSearchIndexDateFormatter * _dateFormatter;
    PLKeywordManager * _keywordManager;
    PLPhotoLibrary * _photoLibrary;
    PSIDatabase * _db;
    PLThrottleTimer * _throttleTimer;
    PLXPCTransaction * _xpcTransaction;
    NSString * _searchIndexDirectory;
    NSDictionary * _searchMetadata;
    NSObject<OS_dispatch_queue> * _queue;
    NSDictionary * _uuidsToProcess;
    char _receivedUpdatesWhileIndexing;
    char _hasValidSearchIndex;
    char _indexingPaused;
    char __indexing;
    id __inqAfterIndexingDidIterate;
}

@property (readonly) unsigned int enqueuedUUIDsCount;
@property char indexingPaused;
@property char _indexing;
@property (copy, nonatomic) id _inqAfterIndexingDidIterate;

+ (PLSearchIndexManager *)sharedInstance;
+ (PLSearchIndexManager *)_defaultDatabaseDirectory;
+ (PLSearchIndexManager *)_databasePathInDirectory:(id)arg0;
+ (PLSearchIndexManager *)defaultDatabasePath;

- (void)dealloc;
- (PLSearchIndexManager *)initWithSearchIndexDirectory:(NSString *)arg0;
- (void)_throttleTimerFire:(id)arg0;
- (void)_inqCloseIndexIfAbleOrForce:(char)arg0 isDelete:(char)arg1;
- (void)_inqEnsureSearchMetadataExists;
- (char)_inqUpdateLocale;
- (void)setIndexingPaused:(char)arg0;
- (void)dropSearchIndexWithCompletion:(id /* block */)arg0;
- (void)_inqEnsureSearchProgressExists;
- (unsigned int)_inqEnqueuedUUIDsCountForceLoad:(char)arg0;
- (void)_inqAddUpdatesWithUUIDs:(id)arg0 forKey:(NSString *)arg1;
- (char)_isIndexing;
- (char)_inqIsIndexingPaused;
- (void)_inqSetIndexingPaused:(char)arg0;
- (void)_inqResumeIndexingIfNeeded;
- (void)_setInqAfterIndexingDidIterate:(id)arg0;
- (void)_inqEnsureSearchIndexExists;
- (void)_inqCloseSearchIndexAndDelete:(char)arg0 withCompletion:(id /* block */)arg1;
- (void)_inqAddUpdatesWithUUIDsArray:(NSArray *)arg0 forKey:(NSString *)arg1;
- (NSString *)_cxindexProgressPath;
- (NSString *)_dbMetadataPath;
- (NSString *)_oldDbPath;
- (char)_removeFileAtPath:(NSString *)arg0 description:(NSString *)arg1;
- (NSString *)_dbPath;
- (void)_dropXPCTransactionIfNeeded;
- (void)_takeXPCTransactionIfNeeded;
- (void)_inqEnsurePhotoLibraryExists;
- (void)_localeDidChange:(NSDictionary *)arg0;
- (char)_inqHasValidSearchIndex;
- (void)_scheduleCloseIndex;
- (void)_setIndexing:(char)arg0;
- (id)_moc:(id)arg0 fetchAssetsWithUUIDs:(id)arg1;
- (id)_moc:(id)arg0 fetchAlbumsWithUUIDs:(id)arg1;
- (id)_inqAfterIndexingDidIterate;
- (unsigned int)enqueuedUUIDsCount;
- (char)isIndexingPaused;
- (void)setIndexingPausedAndWait;
- (void)ensureSearchIndexExists;
- (void)closeSearchIndexWithCompletion:(id /* block */)arg0;
- (void)applyUpdates:(id)arg0 completion:(id /* block */)arg1;

@end
