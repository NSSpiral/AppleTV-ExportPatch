/* Runtime dump - BRCFSDownloader
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCFSDownloader : BRCFSSchedulerBase <BRCModule>
{
    char _initialKickDone;
    BRCDeadlineScheduler * _downloadsDeadlineScheduler;
}

@property (readonly, nonatomic) BRCDeadlineScheduler * downloadsDeadlineScheduler;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (nonatomic) char isCancelled;

- (void)cancel;
- (void)suspend;
- (void)resume;
- (void).cxx_destruct;
- (char)isDownloadingItem:(NSObject *)arg0;
- (void)_close;
- (BRCFSDownloader *)initWithAccountSession:(NSObject *)arg0;
- (void)_schedule;
- (NSObject *)descriptionForThrottleID:(long long)arg0 zone:(NSObject *)arg1 now:(long long)arg2 context:(NSObject *)arg3;
- (void)_deleteThrottleID:(long long)arg0 zone:(NSObject *)arg1;
- (void)_fetchStamps:(struct throttle_stamps *)arg0 now:(long long)arg1 throttle:(EKTravelEngineThrottle *)arg2 throttleID:(long long)arg3 kind:(int)arg4 etag:(NSString *)arg5;
- (id)_zoneForEntry:(id)arg0 kind:(int)arg1 operationID:(NSString *)arg2;
- (NSObject *)_sanitizeRecord:(NSObject *)arg0;
- (void)_cancelThrottles:(id)arg0 state:(int)arg1;
- (char)_hasLosersToDelete:(id)arg0 serverItem:(BRCServerItem *)arg1;
- (void)cancelAndCleanupItemDownload:(id)arg0 kind:(int)arg1;
- (void)createThrottleForItem:(NSObject *)arg0 state:(int)arg1 kind:(int)arg2 etag:(NSString *)arg3;
- (char)shouldScheduleLosersEvictionForItem:(NSObject *)arg0;
- (void)cancelAndCleanupItemDownload:(id)arg0 kind:(int)arg1 etag:(NSString *)arg2;
- (void)scheduleLosersDownloadForItem:(NSObject *)arg0 serverItem:(BRCServerItem *)arg1 purgeStaleEntries:(char)arg2 applySchedulerState:(int *)arg3;
- (void)_finishedDownloading:(id)arg0 kind:(int)arg1 operationID:(NSString *)arg2 error:(NSError *)arg3;
- (void)_retriedEntry:(id)arg0 throttle:(EKTravelEngineThrottle *)arg1 operationID:(NSString *)arg2 skipRetry:(char)arg3;
- (void)_sendThumbnailsBatch:(id)arg0 maxRecordsCount:(unsigned int)arg1;
- (void)_sendContentsBatch:(id)arg0 maxRecordsCount:(unsigned int)arg1;
- (void)_sendLosersBatch:(id)arg0 maxRecordsCount:(unsigned int)arg1;
- (void)rescheduleThrottlesPendingInitialSyncInZone:(NSObject *)arg0;
- (void)cancelAndCleanupItemDownloads:(id)arg0;
- (void)addAliasItem:(NSObject *)arg0 toDownloadingItem:(NSObject *)arg1;
- (void)updateContentDownloadForMetaOnlyChange:(NSDictionary *)arg0 fromEtag:(id)arg1 toEtag:(id)arg2;
- (char)hasAdditionsToApplyForItem:(NSObject *)arg0 serverItem:(BRCServerItem *)arg1;
- (char)makeContentLive:(id)arg0;
- (void)scheduleContentDownloadForItem:(NSObject *)arg0 serverItem:(BRCServerItem *)arg1;
- (void)evictLosersOnItem:(NSObject *)arg0 atURL:(NSURL *)arg1 applySchedulerState:(int *)arg2;
- (char)applyLosersToItem:(NSObject *)arg0 serverItem:(BRCServerItem *)arg1 atURL:(NSURL *)arg2 applySchedulerState:(int *)arg3;
- (char)hasThumbnailToApplyForItem:(NSObject *)arg0;
- (void)scheduleThumbnailDownloadForItem:(NSObject *)arg0 serverItem:(BRCServerItem *)arg1 applySchedulerState:(int *)arg2;
- (char)applyThumbnailToItem:(NSObject *)arg0 serverItem:(BRCServerItem *)arg1 atURL:(NSURL *)arg2 applySchedulerState:(int *)arg3;
- (void)sendBatchForSyncContext:(NSObject *)arg0 maxRecordsCount:(unsigned int)arg1 sizeHint:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (BRCDeadlineScheduler *)downloadsDeadlineScheduler;

@end
