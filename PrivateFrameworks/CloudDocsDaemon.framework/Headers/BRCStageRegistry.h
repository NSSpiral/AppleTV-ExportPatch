/* Runtime dump - BRCStageRegistry
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCStageRegistry : NSObject <BRCModule, BRCLowDiskDelegate>
{
    BRCAccountSession * _session;
    id _stageDirectoryPath;
    id _stageDirectoryFileID;
    NSMutableSet * _unflushedStagedFileIDs;
    NSMutableSet * _containersWithUnflushedFileIDs;
    NSMutableSet * _activeUploadStageIDs;
    NSMutableSet * _activeDownloadStageIDs;
    NSMutableDictionary * _lockedFileIDs;
    NSObject<OS_dispatch_source> * _lockedTestTimer;
    NSObject<OS_dispatch_queue> * _flushingQueue;
    BRCStagePersistedState * _persistedState;
    char _lowDiskSpace;
    id _suspendCount;
    NSObject<OS_dispatch_queue> * _queue;
    char _isCancelled;
    int _deviceID;
}

@property (readonly, nonatomic) int deviceID;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (nonatomic) char isCancelled;

+ (void)migrateStageToVersion2_0WithSession:(BRCAccountSession *)arg0;

- (void)cancel;
- (void)dealloc;
- (void)suspend;
- (char)isCancelled;
- (void)resume;
- (void)close;
- (void).cxx_destruct;
- (int)deviceID;
- (void)willFlushAllStagedFileIDs;
- (void)setIsCancelled:(char)arg0;
- (BRCStageRegistry *)initWithAccountSession:(NSObject *)arg0;
- (void)open;
- (void)cleanupStagedDownloadWithID:(int)arg0;
- (NSObject *)createURLForDownloadWithStageID:(NSString *)arg0 name:(NSString *)arg1;
- (void)forgetWatchedLockedFileIDsForContainer:(NSObject *)arg0;
- (void)forgetWatchedLockedFileID:(unsigned long long)arg0;
- (char)moveFromStageToGraveyard:(unsigned long long)arg0;
- (char)makeSideFaultInStageGatherFileID:(unsigned long long *)arg0 generationID:(unsigned int *)arg1 documentID:(unsigned int *)arg2 properties:(NSDictionary *)arg3 inContainer:(NSObject *)arg4 forCreation:(char)arg5 error:(id *)arg6;
- (char)didFlushStagedFileID:(unsigned long long)arg0;
- (NSObject *)createURLForUploadWithStageID:(NSString *)arg0 name:(NSString *)arg1;
- (void)associateUploadStageID:(NSObject *)arg0 withOperation:(NSObject *)arg1;
- (char)copyPackageFileWithPackageFd:(int)arg0 toStageFd:(int)arg1 relpath:(BRCRelativePath *)arg2;
- (int)_performInStageDirectory:(unsigned char)arg0 block:(id /* block */)arg1;
- (void)_testLockedFiles;
- (long long)garbageCollect:(char)arg0;
- (int)_openStageDirectory:(unsigned char)arg0;
- (NSString *)nonLocalFaultURLForAdditionName:(NSString *)arg0;
- (void)applyMetadataOnFileDescriptor:(int)arg0 liveFileDescriptor:(int)arg1 container:(NSObject *)arg2 statInfo:(struct stat)arg3 version:(NSString *)arg4;
- (NSObject *)_pathInStage:(unsigned long long)arg0 index:(unsigned char *)arg1 generationID:(unsigned int *)arg2;
- (void)cleanupStagedUploadWithID:(int)arg0;
- (void)_watchLockedRelpath:(id)arg0;
- (void)lowDiskStatusChangedForDevice:(int)arg0 hasEnoughSpace:(char)arg1;
- (char)mayLockFileID:(unsigned long long)arg0;
- (char)makeDirectoryInStageGatherFileID:(unsigned long long *)arg0 generationID:(unsigned int *)arg1 inContainer:(NSObject *)arg2 error:(id *)arg3;
- (NSString *)makeNonLocalVersionSideFaultWithAdditionName:(NSString *)arg0 container:(NSObject *)arg1 statInfo:(struct stat)arg2 version:(NSString *)arg3 error:(id *)arg4;
- (char)moveFromStage:(unsigned long long)arg0 toPath:(NSString *)arg1 fileName:(NSString *)arg2 error:(id *)arg3;
- (void)associateDownloadStageID:(NSObject *)arg0 withOperation:(NSObject *)arg1;
- (char)rememberStagedDownloadWithID:(int)arg0 gatherFileID:(unsigned long long *)arg1 generationID:(unsigned int *)arg2 documentID:(unsigned int *)arg3 container:(NSObject *)arg4 error:(id *)arg5;
- (char)moveOldVersionFromPath:(NSString *)arg0 error:(id *)arg1;
- (char)moveToGraveyardFromPath:(NSString *)arg0 error:(id *)arg1;
- (char)existsInStage:(unsigned long long)arg0 generationID:(unsigned int *)arg1;
- (char)existsInOldVersionStage:(unsigned long long)arg0 generationID:(unsigned int *)arg1;
- (char)transferDocumentID:(unsigned int)arg0 fromOldVersionStage:(unsigned long long)arg1 toStage:(unsigned long long)arg2;
- (long long)purgableSpace;
- (long long)purgeOldFiles;

@end
