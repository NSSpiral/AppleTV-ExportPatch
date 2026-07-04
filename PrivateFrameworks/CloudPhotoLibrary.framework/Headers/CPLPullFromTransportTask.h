/* Runtime dump - CPLPullFromTransportTask
 * Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLPullFromTransportTask : CPLEngineSyncTask
{
    NSObject<OS_dispatch_queue> * _queue;
    NSData * _initialSyncAnchor;
    <CPLEngineTransportDownloadBatchTask> * _downloadTask;
    <CPLEngineTransportGetAssetCountsTask> * _getAssetCountsTask;
    NSString * _clientCacheIdentifier;
    char _resetSyncAnchor;
    char _didGetSomeChanges;
    char _shouldGetAssetCounts;
    char _isPostPushPhase;
}

@property (retain) <CPLPullFromTransportTaskDelegate> * delegate;
@property (readonly, nonatomic) char didGetSomeChanges;
@property (nonatomic) char shouldGetAssetCounts;
@property (nonatomic) char isPostPushPhase;

- (void)launch;
- (void)cancel;
- (void)resume;
- (void).cxx_destruct;
- (void)pause;
- (CPLPullFromTransportTask *)initWithEngineLibrary:(CPLEngineLibrary *)arg0;
- (void)taskDidFinishWithError:(NSError *)arg0;
- (void)_launch;
- (void)setShouldGetAssetCounts:(char)arg0;
- (char)didGetSomeChanges;
- (void)setIsPostPushPhase:(char)arg0;
- (void)_finishTaskWithErrorAndCleanupIfNecessary:(id)arg0;
- (void)_handleNewBatch:(id)arg0 newSyncAnchor:(SASyncAnchor *)arg1;
- (void)_launchPullTasks;
- (char)shouldGetAssetCounts;
- (char)isPostPushPhase;
- (NSString *)taskIdentifier;

@end
