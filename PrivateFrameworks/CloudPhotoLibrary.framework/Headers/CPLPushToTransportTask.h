/* Runtime dump - CPLPushToTransportTask
 * Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLPushToTransportTask : CPLEngineSyncTask
{
    NSObject<OS_dispatch_queue> * _lock;
    CPLChangeBatch * _uploadBatch;
    NSArray * _uploadResourceTasks;
    NSArray * _staleOrUnavailableResources;
    NSArray * _resourcesForBackgroundUpload;
    <CPLEngineTransportUploadBatchTask> * _uploadTask;
    unsigned int _lastReportedProgress;
    unsigned int _countOfPushedBatches;
    NSString * _clientCacheIdentifier;
    CPLEngineChangePipe * _currentPushQueue;
    double _startOfIteration;
}

@property (retain) <CPLPushToTransportTaskDelegate> * delegate;

- (void)launch;
- (void)cancel;
- (void)resume;
- (void).cxx_destruct;
- (void)pause;
- (CPLPushToTransportTask *)initWithEngineLibrary:(CPLEngineLibrary *)arg0;
- (void)_doOneIteration;
- (char)_discardResourcesToUploadFromBatch:(id)arg0 error:(id *)arg1;
- (char)_prepareResourcesToUploadInBatch:(id)arg0 error:(id *)arg1;
- (void)_detectUpdatesForFullRecordsWithNoChangeDataInBatch:(id)arg0;
- (char)_markUploadedTasksDidFinishWithError:(NSError *)arg0 error:(id *)arg1;
- (void)_prepareUploadBatchWithTransaction:(NSObject *)arg0 andStore:(NSObject *)arg1;
- (void)_pushTaskDidFinishWithError:(NSError *)arg0;
- (void)_popNextBatchAndContinue;
- (NSString *)taskIdentifier;

@end
