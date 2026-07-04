/* Runtime dump - CPLBackgroundUploadsTask
 * Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLBackgroundUploadsTask : CPLEngineSyncTask
{
    NSObject<OS_dispatch_queue> * _lock;
    NSMutableArray * _uploadTasks;
    char _shouldStop;
    char _hasBadErrors;
    char _hasResetQueue;
    unsigned int _successfullyUploadedResourcesCount;
    unsigned int _failedUploadedResourcesCount;
    unsigned int _total;
    double _start;
}

- (void)launch;
- (void)cancel;
- (void)resume;
- (void).cxx_destruct;
- (void)pause;
- (CPLBackgroundUploadsTask *)initWithEngineLibrary:(CPLEngineLibrary *)arg0;
- (void)taskDidFinishWithError:(NSError *)arg0;
- (void)_uploadTask:(NSObject *)arg0 didFinishWithError:(NSError *)arg1;
- (void)_launchNecessaryUploadTasksWithTransaction:(NSObject *)arg0;
- (void)_finishTaskLocked;
- (void)_enqueueTasksLocked;
- (NSString *)taskIdentifier;

@end
