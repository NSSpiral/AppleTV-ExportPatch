/* Runtime dump - PLImageWriter
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLImageWriter : NSObject <PLPhotoBakedThumbnailsDelegate>
{
    NSMutableArray * _highPriorityJobs;
    NSCountedSet * _unfinishedHighPriorityJobs;
    unsigned int _highPrioritySequentialJobCount;
    NSMutableArray * _lowPriorityJobs;
    NSCountedSet * _unfinishedLowPriorityJobs;
    NSRecursiveLock * _jobsLock;
    int _unfinishedJobCount;
    int _jobQueueAvailabilityToken;
    char _writerThreadRunning;
    char _databaseIsCorrupt;
    PLXPCTransaction * _transaction;
    NSMutableDictionary * _inProgressAvalancheFds;
}

+ (PLImageWriter *)sharedWriter;
+ (void)decorateThumbnailInRect:(struct CGRect)arg0 size:(struct CGSize)arg1 duration:(AWDCompanionSyncFullSyncDuration *)arg2 inContext:(struct CGSize)arg3 format:(NSString *)arg4;
+ (char)setAdjustmentsForNewPhoto:(UIImage *)arg0 withEffectFilterName:(NSString *)arg1 filteredImagePath:(NSString *)arg2 isSubstandardRender:(char)arg3;
+ (void)decorateThumbnail:(UIImage *)arg0 inContext:(struct CGContext *)arg1;

- (void)dealloc;
- (PLImageWriter *)init;
- (char)enqueueJob:(id)arg0;
- (void)_postJobQueueNotificationIsAvailable:(char)arg0;
- (char)_isHighPriorityJob:(id)arg0;
- (void)_incrementJobCount:(NSObject *)arg0;
- (void)_writerThread;
- (id)cameraAssetPathForNewAssetWithExtension:(id)arg0;
- (void)_removeTransientKeys:(NSArray *)arg0;
- (void)_removeInProgressExtendedAttributesForFileAtURL:(NSURL *)arg0;
- (void)_decrementJobCount:(NSObject *)arg0;
- (void)_processImageJob:(id)arg0;
- (void)_processDeletePhotoStreamDataJob:(id)arg0 withReason:(NSString *)arg1;
- (NSString *)pathForNewAssetPathAtAlbumDirectoryPath:(NSString *)arg0 assetType:(unsigned int)arg1 extension:(id *)arg2;
- (void)_handleAvalancheCrashRecovery:(id)arg0;
- (void)decorateThumbnail:(UIImage *)arg0 inContext:(struct CGContext *)arg1;
- (void)_decorateThumbnail:(UIImage *)arg0;
- (void)_setAdjustmentsForNewVideo:(id)arg0 withAdjustmentsDictionary:(NSDictionary *)arg1;
- (char)_sufficientDiskSpaceToCopyVideoAtPath:(NSString *)arg0;
- (void)_processVideoJob:(id)arg0;
- (void)_processVideoSaveJob:(id)arg0;
- (void)_processBatchImageJob:(id)arg0;
- (void)_processAvalancheJob:(id)arg0;
- (void)_processImportImageJob:(id)arg0;
- (void)_processSyncedVideoSaveJob:(id)arg0;
- (void)_processDeletePhotoStreamAssetsWithUUIDs:(id)arg0 withReason:(NSString *)arg1;
- (void)_enablePhotoStreamJob:(id)arg0;
- (void)_processReenqueueAssetUUIDsToPhotoStreamJob:(id)arg0;
- (void)_processSavePhotoStreamImageToCameraRollJob:(id)arg0;
- (void)_processIngestedSyncedAssetJob:(id)arg0;
- (void)_processAutodeleteEmptyAlbumJob:(id)arg0;
- (void)_processCrashRecoveryJob:(id)arg0;
- (void)_processDaemonJob:(id)arg0;
- (void)_processJob:(id)arg0;
- (char)canEnqueueJob:(id)arg0;
- (NSString *)uuidFromIncomingFilename:(NSString *)arg0;
- (void)setAvalancheInProgress:(char)arg0 uuid:(NSUUID *)arg1;

@end
