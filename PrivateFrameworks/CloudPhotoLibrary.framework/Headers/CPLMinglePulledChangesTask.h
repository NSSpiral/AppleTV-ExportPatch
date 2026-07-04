/* Runtime dump - CPLMinglePulledChangesTask
 * Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLMinglePulledChangesTask : CPLEngineSyncTask
{
    NSObject<OS_dispatch_queue> * _lock;
    NSString * _clientCacheIdentifier;
    char _hasPreparedForMingling;
    unsigned int _countOfNotifiedBatchesInPullQueue;
}

@property (retain) <CPLMinglePulledChangesTaskDelegate> * delegate;

+ (char)mingleBatch:(id)arg0 forStore:(NSObject *)arg1 putBatchesInPullQueue:(char *)arg2 error:(id *)arg3;

- (void)launch;
- (void)cancel;
- (void)resume;
- (void).cxx_destruct;
- (void)pause;
- (CPLMinglePulledChangesTask *)initWithEngineLibrary:(CPLEngineLibrary *)arg0;
- (void)taskDidFinishWithError:(NSError *)arg0;
- (void)_taskDidFinishWithError:(NSError *)arg0;
- (void)_processNextBatch;
- (void)_launch;
- (NSString *)taskIdentifier;

@end
