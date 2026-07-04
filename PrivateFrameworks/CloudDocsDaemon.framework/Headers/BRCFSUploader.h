/* Runtime dump - BRCFSUploader
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCFSUploader : BRCFSSchedulerBase <BRCModule>
{
    NSMutableDictionary * _thumbnailsOperations;
    BRCDeadlineToken * _retryQueueToken;
    NSObject<OS_dispatch_queue> * _thumbnailQueue;
    struct br_pacer_t * _quotaPacer;
    char _prepareReachedMax;
    char _initialKickDone;
    char _isDefaultOwnerOutOfQuota;
    BRCDeadlineScheduler * _uploadsDeadlineScheduler;
}

@property (readonly, nonatomic) BRCDeadlineScheduler * uploadsDeadlineScheduler;
@property (nonatomic) char isDefaultOwnerOutOfQuota;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (nonatomic) char isCancelled;

- (void)suspend;
- (void)resume;
- (void).cxx_destruct;
- (char)isUploadingItem:(NSObject *)arg0;
- (void)_close;
- (BRCFSUploader *)initWithAccountSession:(NSObject *)arg0;
- (void)_schedule;
- (NSObject *)descriptionForThrottleID:(long long)arg0 zone:(NSObject *)arg1 now:(long long)arg2 context:(NSObject *)arg3;
- (void)updateThrottleID:(long long)arg0 zone:(NSObject *)arg1 state:(int)arg2;
- (void)_deleteThrottleID:(long long)arg0 zone:(NSObject *)arg1;
- (void)deleteThrottlesForZone:(NSObject *)arg0;
- (void)_cancelThrottles:(id)arg0 state:(int)arg1;
- (void)rescheduleThrottlesPendingInitialSyncInZone:(NSObject *)arg0;
- (void)sendBatchForSyncContext:(NSObject *)arg0 maxRecordsCount:(unsigned int)arg1 sizeHint:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (NSObject *)quotaAvailableForOwner:(NSObject *)arg0;
- (void)cancelAndCleanupItemUpload:(id)arg0;
- (void)uploadItem:(NSObject *)arg0;
- (BRCDeadlineScheduler *)uploadsDeadlineScheduler;
- (void)ownerDidReceiveOutOfQuotaError:(NSError *)arg0;
- (void)scheduleQuotaFetchIfNeededForOwner:(NSObject *)arg0;
- (void)finishedSyncingUpItem:(NSObject *)arg0 withOutOfQuotaError:(NSError *)arg1;
- (void)_scheduleQuotaFetchForDefaultOwner;
- (void)_scheduleRetries;
- (void)_cancelThrottleID:(long long)arg0;
- (id)_buildItemTooLargeErrorIfNeeded:(id)arg0 syncContext:(BRCSyncContext *)arg1;
- (char)hasItemsOverQuotaForOwner:(NSObject *)arg0;
- (void)setIsDefaultOwnerOutOfQuota:(char)arg0;
- (void)_computeRecordForThrottleID:(long long)arg0 item:(NSObject *)arg1;
- (unsigned int)_thumbnailOperationsMax;
- (char)_updatePackageRecord:(NSObject *)arg0 item:(NSObject *)arg1 stageID:(NSString *)arg2 error:(id *)arg3;
- (NSObject *)_documentItemForThrottleID:(long long)arg0 stageID:(NSString *)arg1;
- (void)_updateRecord:(NSObject *)arg0 item:(NSObject *)arg1 thumbnailOperation:(QLThumbnailOperation *)arg2 stageID:(NSString *)arg3;
- (void)_updateThrottleID:(long long)arg0 setStageID:(NSString *)arg1 operationID:(NSString *)arg2;
- (void)_updateRecord:(NSObject *)arg0 throttleID:(long long)arg1 thumbnailOperation:(QLThumbnailOperation *)arg2 stageID:(NSString *)arg3;
- (void)_doneFetchingThumbnailForThrottleID:(NSObject *)arg0;
- (void)_startFetchThumbnail:(UIImage *)arg0 throttleID:(long long)arg1;
- (char)_finishPackageUploadWithRecord:(NSObject *)arg0 item:(NSObject *)arg1 error:(id *)arg2;
- (NSObject *)_documentItemForThrottleID:(long long)arg0 operationID:(NSString *)arg1;
- (void)_finishedUploadingItem:(NSObject *)arg0 record:(NSObject *)arg1 throttleID:(long long)arg2 error:(NSError *)arg3;
- (void)_retriedThrottleID:(long long)arg0 zone:(NSObject *)arg1 throttle:(EKTravelEngineThrottle *)arg2 operationID:(NSString *)arg3;
- (void)_rescheduleThrottlesOutOfQuotaForDefaultOwnerWithAvailableSize:(long long)arg0;
- (void)_setQuotaAvailableForDefaultOwner:(unsigned long long)arg0;
- (char)isDefaultOwnerOutOfQuota;
- (void)addAliasItem:(NSObject *)arg0 toUploadingItem:(NSObject *)arg1;
- (char)hasItemsOverQuotaInZone:(NSObject *)arg0;

@end
